/*
 * CopyRight 2013-2014  Goldtektechnology Co, LTD. 
 * 
 * Robin Singh <robin_singh@goldtek.com,robin.gujjar@gmail.com>
 * 
 * */


package com.goldtek;

import java.io.IOException;
import java.io.InputStream;
import java.util.Calendar;
import java.util.Formatter;
import java.util.TimeZone;
import java.util.UUID;

import android.app.NotificationManager;
import android.app.ProgressDialog;
import android.app.Service;
import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothSocket;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.database.Cursor;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.Typeface;
import android.net.Uri;
import android.os.AsyncTask;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.provider.CallLog.Calls;
import android.provider.ContactsContract.PhoneLookup;
import android.telephony.PhoneStateListener;
import android.telephony.TelephonyManager;
import android.text.Layout;
import android.text.StaticLayout;
import android.text.TextPaint;
import android.widget.Toast;

public class NotificationSenderService extends Service
{
	
     public static final String TAG = "NotificationSenderService";
     boolean mBound = false;
	 NotificationManager mNM;
	 private Context context;
	 private NotificationSenderService service;
	 
	 
	 
	 /*For Bluetooth*/
	 private int mMaxChars = 50000;//Default
	 private UUID mDeviceUUID;
	 
	 private static BluetoothSocket mBTSocket;
	 
	 private ReadInput mReadThread = null;
	 
	 private boolean mIsUserInitiatedDisconnect = false;
	 
	 private boolean mIsBluetoothConnected = false;
	 
	 private int mCurrentVibrationLevel = R.id.vOff;

	 private BluetoothDevice mDevice;

	 private ProgressDialog progressDialog;
	 
	 

  private ServiceConnection mConnection = new ServiceConnection()
  {
    public void onServiceConnected(ComponentName paramAnonymousComponentName, IBinder paramAnonymousIBinder)
    {
      //SpwatchService.LocalBinder localLocalBinder = (SpwatchService.LocalBinder)paramAnonymousIBinder;
      //NotificationSenderService.this.mService = null;//localLocalBinder.getService();
      NotificationSenderService.this.mBound = true;
    }
    
    public void onServiceDisconnected(ComponentName paramAnonymousComponentName)
    {
      NotificationSenderService.this.mBound = false;
    }
  };
  
  
  @Override
	 public void onCreate() {
		 super.onCreate();
 
		 this.service = service;
	     context = NotificationSenderService.this.getApplicationContext();
	     
	     
	     PhoneCallListener phoneListener = new PhoneCallListener();
	     TelephonyManager telephonyManager = (TelephonyManager) this
	             .getSystemService(Context.TELEPHONY_SERVICE);
	     telephonyManager.listen(phoneListener,
	             PhoneStateListener.LISTEN_CALL_STATE);
	     
	     
		 //threadMessage("Starting Dummy  Thread..."); 	 	
	     Thread t = new Thread(new DummyThreadRunnable());	        
	     t.start();
	 
	 }
  
  	//Display a message, preceded by the name of the current thread
	 void threadMessage(String message){
     String threadName = Thread.currentThread().getName();
     //System.out.format("%s: %s%n", threadName, message);
	}
	 
	class DummyThreadRunnable implements Runnable {
	      public void run() {  
	    	  threadMessage("Dummy Thread ..");
	    	  
						//	    	  try{
						//	    		  //new ContentServerSocket(service); 
						//			  } catch (IOException e) {
						//				  Log.d("Robin", e.toString());
						//			  }				
	       }
	}
	
	@Override
	 public int onStartCommand(Intent intent, int flags, int startId) {
			//Log.d(TAG, " onStartCommand  start id =" + startId + ": " + intent);
			// We want this service to continue running until it is explicitly        
			// stopped, so return sticky.
				if(intent != null) {	 
			        String action = intent.getAction();  
			        //if(action == "android.provider.Telephony.SMS_RECEIVED") {
			        if(action == "SMS_RECEIVED") {
			        	String smsreceived = intent.getStringExtra("sms");
			        	//Log.d(TAG,"SMS:" + smsreceived);
			        	//writeTowatch( "SMS", smsreceived);
			        	sendImage2Watch(160, 100, "SMS", smsreceived);
			        }

			        if(action == "CONNECT_TO_BT"){
			        	//Log.d(TAG,"CONNECT_TO_BT >>>>>>>>>> 1:" );			        	
			        	Bundle b = intent.getExtras();
			        	//Log.d(TAG,"CONNECT_TO_BT >>>>>>>>>> :2" );			        	
			    		mDevice = b.getParcelable("mybtdevice");
			    		//Log.d(TAG,"CONNECT_TO_BT >>>>>>>>>> 3:" );			    		
			    		mDeviceUUID = UUID.fromString(b.getString("mybtuuid"));			    		
			    		//Log.d(TAG,"CONNECT_TO_BT >>>>>>>>>> :4" );
			    		mMaxChars = b.getInt("mybuffersize");
			    		//Log.d(TAG,"CONNECT_TO_BT >>>>>>>>>> :5" );			    		
			    		//if (mBTSocket == null || !mIsBluetoothConnected) {
			    			//Log.d(TAG,"CONNECT_TO_BT >>>>>>>>>>6:" );
			    			new ConnectBT().execute();
			    		//}   	
			        }

			        if(action == "DISCONNECT_TO_BT"){
			        	Bundle b = intent.getExtras();
			        	mDevice = b.getParcelable("mybtdevice");			    					    		
			    		//mDeviceUUID = UUID.fromString(b.getString("mybtuuid"));
			        	mDeviceUUID = UUID.fromString("00001101-0000-1000-8000-00805F9B34FB");
			    		mMaxChars = b.getInt("mybuffersize");
			    		mIsUserInitiatedDisconnect = b.getBoolean("userDisconnect");
			    		//Log.d("DisConnectBT", "disconnect");
			    		new DisConnectBT().execute();			    			
			        }
			        
			      
			        //	TODO
			        //	TODO
			        //	TODO
			        if(action == CosmosMsg.GET_CONNECTION_STATUS) {
			        	SendConnState(mIsBluetoothConnected);
			        }
			        
			        if(action == CosmosMsg.GET_VIBRATION_LEVEL) {
			        	doGetVibrationLevel();
			        }

			        if(action == CosmosMsg.SET_VIBRATION_LEVEL) {
			        	mCurrentVibrationLevel = intent.getIntExtra(CosmosMsg.VLevel, R.id.vOff);
			        	if(R.id.vOn == mCurrentVibrationLevel) {
			        		writeCmdTowatch("SETNALARM=800,800");
			        	} else {
			        		writeCmdTowatch("SETNALARM=0,0");
			        	}
			        	try {
			        		Thread.sleep(1000);
			        	} catch(Throwable e) {
			        		e.getLocalizedMessage();
			        	}
			        	//		Get the real setting from GWatch
			        	doGetVibrationLevel();
			        }

			        if(action == CosmosMsg.SET_CURRENT_TIME) {
			        	Calendar c = Calendar.getInstance();
			        	TimeZone tz = TimeZone.getTimeZone("UTC");
			        	c.setTimeZone(tz);
			        	Formatter f = new Formatter();
			        	String s = f.format("SETTIME=%d,%d,%d,%d,%d,%d,",
			        			c.get(Calendar.YEAR),
			        			c.get(Calendar.MONTH)+1,
			        			c.get(Calendar.DAY_OF_MONTH),
			        			c.get(Calendar.HOUR),
			        			c.get(Calendar.MINUTE),
			        			c.get(Calendar.SECOND)).toString();
			        	//Log.d("SET_CURRENT_TIME", s);
			        	writeCmdTowatch(s);
			        	//writeTowatch("Test", "Test");
			        }

			        if(action == "GOLDTEK_WATCH") {
			        	String senderId = intent.getStringExtra("sender");
			        	String messageBody = intent.getStringExtra("message");
			        	//Log.d(tag,"< sender: " + senderId+" Message :"+messageBody+" >");			        	
			        	//writeTowatch( senderId, messageBody);
			        	sendImage2Watch(160, 100, senderId, messageBody);
			        } else {
			        	
			        	//do nothing 
			        }
				} 
				return START_STICKY;
	 }	

	
	private void doGetVibrationLevel() {
		writeCmdTowatch("GETNALARM=");
    	//	TODO: parse the result in read thread but not here!
    	SendVibrationLevel(mCurrentVibrationLevel);
	}
	
		public void writeCmdTowatch(String cmd) {
			if (mBTSocket !=null && mIsBluetoothConnected  ) {
				String str ="SPP+"+cmd+"\r\0";
				try {
					mBTSocket.getOutputStream().write(str.getBytes());
				} catch (IOException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}
		}

		
	final String tag = "sendImage2Watch";
	public void sendImage2Watch(int width, int height, String title, String content) {
		if (null == mBTSocket || !mIsBluetoothConnected  ) {
			return;
		}

		//Log.d(tag, title+"::"+content);
		final int w = width;
		final int h = height;
		Bitmap b = Bitmap.createBitmap(w, h, Bitmap.Config.ARGB_8888);
		Canvas c = new Canvas(b);
		Paint p = new Paint();
		Rect rc = new Rect();
		
		c.drawColor(Color.WHITE);
		Paint bkPaint = new Paint();
		bkPaint.setStyle(Paint.Style.STROKE);
		c.drawRect(0, 1, w-2, h-2, bkPaint);
		float dy = 3;
		//	Draw Title
		p.setTextSize(20);
		p.setTypeface(Typeface.defaultFromStyle(Typeface.BOLD));
		p.setTextAlign(Paint.Align.CENTER);
		p.getTextBounds(title, 0, title.length(), rc);
		c.drawText(title, w/2, dy-rc.top, p);
		dy += rc.bottom - rc.top + 2;
		c.drawLine(0, dy, w, dy, p);
		dy += 5;
		//	Draw Content
		final int margin = 5;
		TextPaint tp = new TextPaint();
		tp.setTextSize(20);
		//tp.setFakeBoldText(true);
		StaticLayout sl = new StaticLayout(content, tp, w-2*margin, Layout.Alignment.ALIGN_NORMAL, 1, 1, false);
		c.save();
		c.translate(margin, dy);
		sl.draw(c);
		c.restore();
		//	get pixels
		int[] pixels=new int[w * h];
		b.getPixels(pixels, 0, w, 0, 0, w, h);

		byte[] binary = new byte[w/8*h];
		theLoop:
		for(int r = 0; r < h; r++) {
			for(int i = 0; i < w; i+=8) {
				try {
					binary[w/8*r + i/8] =
							(byte) (
								((Color.WHITE == pixels[w*r + i + 0])? 0:128) +
								((Color.WHITE == pixels[w*r + i + 1])? 0:64) +
								((Color.WHITE == pixels[w*r + i + 2])? 0:32) +
								((Color.WHITE == pixels[w*r + i + 3])? 0:16) +
								((Color.WHITE == pixels[w*r + i + 4])? 0:8) +
								((Color.WHITE == pixels[w*r + i + 5])? 0:4) +
								((Color.WHITE == pixels[w*r + i + 6])? 0:2) +
								((Color.WHITE == pixels[w*r + i + 7])? 0:1)
							);
				} catch(Throwable e) {
					//Log.d("ERROR", e.getLocalizedMessage());
					//Log.d("ERROR", String.format("(%d, %d)", r, i));
					break theLoop;
				}
			}
		}

		//	SPP command
		//		SPP+PICTURE=<X>,<Y>,<Width>,<Height>,<Data>\r\0
		final String cmd = String.format("SPP+PICTURE=%d,%d,%d,%d,", (160-w)/2, (100-h)/2, w, h);
		try {
			mBTSocket.getOutputStream().write(cmd.getBytes());
			mBTSocket.getOutputStream().write(binary);
			mBTSocket.getOutputStream().write("\r\0".getBytes());
		} catch(Throwable e) {
			//Log.d(tag, e.getLocalizedMessage());
		}

	}
	
		
		
   public void writeTowatch( String sender, String msg){
		
	   if (mBTSocket !=null && mIsBluetoothConnected  ) {
		   
		   //SPP+NOTIFY=<Head>,<Content1>\r\0
		     String str ="SPP+NOTIFY="+sender+","+msg.length()+","+msg+"\r\0";
		   
				   try {
						mBTSocket.getOutputStream().write(str.getBytes());
						//Log.i(TAG, "<<<<======== send sms done >>>");
					} catch (IOException e) {
						// TODO Auto-generated catch block
						
						//Log.i(TAG, "<<<<======== send sms to spp failed>>>");
						e.printStackTrace();
					}
	   
	   }
		
  }

  public IBinder onBind(Intent paramIntent)
  {
    return null;
  }
  
  public void onDestroy()
  {
    if (this.mBound)
    {
      //unbindService(this.mConnection);
    	if (mBTSocket != null && mIsBluetoothConnected) {
			new DisConnectBT().execute();
			
		}
    	
      this.mBound = false;
    }
  }
  
  
  private class PhoneCallListener extends PhoneStateListener {

	    private boolean isPhoneCalling = false;
	    private static final int DISPLAY_NAME_COLUMN_INDEX = 0;
	    @Override
	    public void onCallStateChanged(int state, String incomingNumber) {

	        if (TelephonyManager.CALL_STATE_RINGING == state) {
	        	String result="";
	        	try {
					Uri uri = Uri.withAppendedPath(PhoneLookup.CONTENT_FILTER_URI, Uri.encode(incomingNumber));
					Cursor cursor = getContentResolver()
							.query(uri, new String[]{PhoneLookup.DISPLAY_NAME}, null, null, null);
					if (!cursor.moveToFirst()) {
						result = "";
					} else {
						result = cursor.getString(DISPLAY_NAME_COLUMN_INDEX);
					}
				} catch(Throwable e) {
					//Log.d("", e.getLocalizedMessage());
				}
	        	incomingNumber = incomingNumber+"\n"+result;
	            // phone ringing
	            //Log.i(TAG, "RINGING, number: " + incomingNumber);
	            
	            //writeTowatch( "Call-in",incomingNumber );
	            sendImage2Watch(160, 100, "Call-in",incomingNumber);
	        }

	        if (TelephonyManager.CALL_STATE_OFFHOOK == state) {
	            // active
	            //Log.i(TAG, "OFFHOOK");

	            isPhoneCalling = true;
	        }

	        if (TelephonyManager.CALL_STATE_IDLE == state) {
	            // run when class initial and phone call ended, need detect flag
	            // from CALL_STATE_OFFHOOK
	            //Log.i(TAG, "IDLE number");

	            if (isPhoneCalling) {

	                Handler handler = new Handler();

	                //Put in delay because call log is not updated immediately when state changed
	                // The dialler takes a little bit of time to write to it 500ms seems to be enough
	                handler.postDelayed(new Runnable() {

	                    @Override
	                    public void run() {
	                        // get start of cursor
	                          //Log.i("CallLogDetailsActivity", "Getting Log activity...");
	                            String[] projection = new String[]{Calls.NUMBER};
	                            Cursor cur = getContentResolver().query(Calls.CONTENT_URI, projection, null, null, Calls.DATE +" desc");
	                            cur.moveToFirst();
	                            String lastCallnumber = cur.getString(0);
	                    }
	                },500);

	                isPhoneCalling = false;
	            }

	        }
	    }
	}
  
  
    private class ReadInput implements Runnable {

		private boolean bStop = false;
		private Thread t;

		public ReadInput() {
			t = new Thread(this, "Input Thread");
			t.start();
		}

		public boolean isRunning() {
			return t.isAlive();
		}

		@Override
		public void run() {
			InputStream inputStream;

			try {
				inputStream = mBTSocket.getInputStream();
				while (!bStop) {
					byte[] buffer = new byte[256];
					if (inputStream.available() > 0) {
						inputStream.read(buffer);
						int i = 0;
						/*
						 * This is needed because new String(buffer) is taking the entire buffer i.e. 256 chars on Android 2.3.4 http://stackoverflow.com/a/8843462/1287554
						 */
						for (i = 0; i < buffer.length && buffer[i] != 0; i++) {
						}
						final String strInput = new String(buffer, 0, i);

						//Log.d("Recv", strInput);

						
						//	TODO: parse the result
						if(strInput.contains(CosmosMsg.SET_VIBRATION_RESULT_TAG)) {
							int start = 0;
							int end = 0;
							start = strInput.indexOf(',');
							start = strInput.indexOf(',', start+1);
							end = strInput.indexOf('\r');
							try {
								if(0 == Integer.valueOf(strInput.substring(start+1, end))) {
									SendVibrationLevel(R.id.vOff);
								} else {
									SendVibrationLevel(R.id.vOn);
								}
							} catch(Throwable e) {
								//Log.d("VLevel", e.getLocalizedMessage());
							}
						}
						
						/*
						 * If checked then receive text, better design would probably be to stop thread if unchecked and free resources, but this is a quick fix
						 */

//						if (chkReceiveText.isChecked()) {
//							mTxtReceive.post(new Runnable() {
//								@Override
//								public void run() {
//									mTxtReceive.append(strInput);
//									//Uncomment below for testing
//									//mTxtReceive.append("\n");
//									//mTxtReceive.append("Chars: " + strInput.length() + " Lines: " + mTxtReceive.getLineCount() + "\n");
//									
//									int txtLength = mTxtReceive.getEditableText().length();  
//									if(txtLength > mMaxChars){
//										mTxtReceive.getEditableText().delete(0, txtLength - mMaxChars);
//									}
//
//									if (chkScroll.isChecked()) { // Scroll only if this is checked
//										scrollView.post(new Runnable() { // Snippet from http://stackoverflow.com/a/4612082/1287554
//													@Override
//													public void run() {
//														scrollView.fullScroll(View.FOCUS_DOWN);
//													}
//												});
//									}
//								}
//							});
//						}

					} else {
						//Log.d("DisConnectBT", "zzzzzzzzzzzzzzzzzzzzzzzzzz");
					}
					Thread.sleep(500);
				}
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}

		}

		public void stop() {
			bStop = true;
		}

	}
  
    private class DisConnectBT extends AsyncTask<Void, Void, Void> {

		@Override
		protected void onPreExecute() {
		}

		@Override
		protected Void doInBackground(Void... params) {
			
			//Log.d("DisConnectBT", "doInBackground");

			if (mReadThread != null) {
				mReadThread.stop();
				try {
					mBTSocket.getOutputStream().write("SPP+STOP=\r\0".getBytes());
				} catch (Throwable e) {
					//Log.d("DisConnectBT", e.getLocalizedMessage());
				}
				while (mReadThread.isRunning()) {
					; // Wait until it stops
				}
				//Log.d("DisConnectBT", "xxxxxxxxxxxxxxxxxxx");
				mReadThread = null;
				//Log.d("DisConnectBT", "Terminate ReadThread");
			}

			try {
				if(null != mBTSocket) {
					mBTSocket.close();
					//Log.d("DisConnectBT", "BT socket closed!");
				}
			} catch (IOException e) {
				// TODO Auto-generated catch block
				//Log.d("DisConnectBT", e.getLocalizedMessage());
				e.printStackTrace();
			}

			return null;
		}

		@Override
		protected void onPostExecute(Void result) {
			super.onPostExecute(result);
			//Log.d("DisConnectBT", "onPostExecute");
			mIsBluetoothConnected = false;
			if (mIsUserInitiatedDisconnect) {
				//finish(); TODO
			}
			SendConnState(false);
		}

	}
  
    private void msg(String s) {
		Toast.makeText(getApplicationContext(), s, Toast.LENGTH_SHORT).show();
	}
  
  
    private class ConnectBT extends AsyncTask<Void, Void, Void> {
		private boolean mConnectSuccessful = true;

		@Override
		protected void onPreExecute() {
			//progressDialog = ProgressDialog.show(context, "Hold on", "Connecting");// http://stackoverflow.com/a/11130220/1287554
		}

		@Override
		protected Void doInBackground(Void... devices) {
			try {
				if (mReadThread != null) {
					mReadThread.stop();
					try {
						mBTSocket.getOutputStream().write("SPP+STOP=\r\0".getBytes());
					} catch (Throwable e) {
						//Log.d("DisConnectBT", e.getLocalizedMessage());
					}
					while (mReadThread.isRunning()) {
						//Log.d("preDisconnect", "mReadThread.isRunning()"); // Wait until it stops
					}
					mReadThread = null;
				}
				if(null != mBTSocket) {
					mBTSocket.close();
				}
				//mBTSocket = mDevice.createInsecureRfcommSocketToServiceRecord(mDeviceUUID);
				mBTSocket = mDevice.createRfcommSocketToServiceRecord(UUID.fromString("00001101-0000-1000-8000-00805F9B34FB"));
				BluetoothAdapter.getDefaultAdapter().cancelDiscovery();
				mBTSocket.connect();
			} catch (IOException e) {
				// Unable to connect to device
				//Log.d("Predisconnected", e.getLocalizedMessage());
				e.printStackTrace();
				mConnectSuccessful = false;
			}
			return null;
		}

		@Override
		protected void onPostExecute(Void result) {
			super.onPostExecute(result);

			if (!mConnectSuccessful) {
				
				//Log.d(TAG,"Could not connect to device. " + "Is it a Serial device? Also check if the UUID is correct in the settings" );
				//Toast.makeText(getApplicationContext(), "Could not connect to device. Is it a Serial device? Also check if the UUID is correct in the settings", Toast.LENGTH_LONG).show();
				//finish(); TODO robin need to do something here
				//Log.d(TAG,"CONNECT_TO_BT >>>>>>>>>> :4" );

			} else {
				//msg("Connected to device");
				//Log.d(TAG,"Connected to device" );
				mIsBluetoothConnected = true;
				mReadThread = new ReadInput(); // Kick off input reader

			}

			SendConnState(mConnectSuccessful);
			//progressDialog.dismiss();
		}

	}

    void SendConnState(boolean bConn) {
    	//Log.d(TAG, (bConn)?"Connected":"Disconnected");
    	Intent i = new Intent();
		Bundle b = new Bundle();
		b.putInt(CosmosMsg.msg, CosmosMsg.CONNECTION_STATUS_CHANGE);
		b.putInt(CosmosMsg.value, (bConn)?1:0);
		i.putExtras(b);
		i.setAction(CosmosMsg.notifyAction);
		sendBroadcast(i);
    }

    void SendVibrationLevel(int id) {
    	Intent i = new Intent();
		Bundle b = new Bundle();
		b.putInt(CosmosMsg.msg, CosmosMsg.VIBRATION_LEVEL_CHANGE);
		b.putInt(CosmosMsg.value, id);
		i.putExtras(b);
		i.setAction(CosmosMsg.notifyAction);
		sendBroadcast(i);
    }

}



