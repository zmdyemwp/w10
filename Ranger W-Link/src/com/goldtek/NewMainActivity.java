package com.goldtek;

import java.util.List;

import android.accessibilityservice.AccessibilityServiceInfo;
import android.app.ActionBar;
import android.app.Activity;
import android.app.AlertDialog;
import android.bluetooth.BluetoothAdapter;
import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Bundle;
import android.os.SystemClock;
import android.util.Log;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.accessibility.AccessibilityManager;
import android.widget.Button;
import android.widget.RadioGroup;
import android.widget.TextView;

public class NewMainActivity extends Activity {

	TextView	tvConnection;
	RadioGroup	rgVibration;
	 
	//boolean preDisconnected = false;
	
	public BroadcastReceiver bcReceiver = new BroadcastReceiver() {
		@Override
		public void onReceive(Context context, Intent intent) {
			// TODO Auto-generated method stub
			Bundle b = intent.getExtras();
			doRefresh(b.getInt(CosmosMsg.msg), b.getInt(CosmosMsg.value));
			//runOnUiThread(rModUI);
		}
	};
	
	public void doRefresh(int msg, int value) {
		Log.d("doRefresh", "msg:"+msg+",value:"+value);
		switch (msg) {
		case CosmosMsg.CONNECTION_STATUS_CHANGE:
			tvConnection
			.setText(this.getResources()
					.getString((0 == value)?
							R.string.disconnected:R.string.connected));
			break;
		case CosmosMsg.VIBRATION_LEVEL_CHANGE:
			rgVibration.check(value);
			break;
		default:
			break;
		}
	}
	
	Runnable rModUI = new Runnable() {
		@Override
		public void run() {
			// TODO Auto-generated method stub
			
		}
	};
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		
		try {
			registerReceiver(bcReceiver, new IntentFilter(CosmosMsg.notifyAction));
		} catch(Throwable e) {
			Log.d("registerReceiver", e.getLocalizedMessage());
		}
		
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_new_main);

		tvConnection = (TextView)findViewById(R.id.connState);
		rgVibration = (RadioGroup)findViewById(R.id.vibrationOpt);
		
		View actionBarView = getLayoutInflater().inflate(R.layout.goldtek_action_bar, null);
		ActionBar actionBar = getActionBar();
		actionBar.setDisplayOptions(ActionBar.DISPLAY_SHOW_CUSTOM);
		actionBar.setCustomView(actionBarView);
		((Button)findViewById(R.id.Connect)).setOnClickListener(doConnect);
		((Button)findViewById(R.id.Disconnect)).setOnClickListener(doDisconnect);
		((Button)findViewById(R.id.syncTime)).setOnClickListener(doSyncTime);
		
		((Button)findViewById(R.id.vOff)).setOnClickListener(doSetVibrationLevel);
		((Button)findViewById(R.id.vOn)).setOnClickListener(doSetVibrationLevel);
		
		((Button)findViewById(R.id.notifySet)).setOnClickListener(doNotification);
		
		this.doGetConnectionStatus();
		this.doGetVibrationLevel();
		
		if( checkBTPower() ) {
			checkAccessibility();
		}
	}

	@Override
	protected void onResume() {
		super.onResume();
		//	TODO: check BT on/off
		//checkBTPower();
	}

	BluetoothAdapter mba = null;
	boolean checkBTPower() {
		if(null == mba) {
			mba = BluetoothAdapter.getDefaultAdapter();
		}
		if(null != mba && !this.mba.isEnabled()) {
			AlertDialog.Builder localBuilder = new AlertDialog.Builder(this);
			localBuilder.setTitle("Watch connection")
						.setMessage("Please turn on bluetooth and pair your watch.")
						.setCancelable(true)
						.setPositiveButton("OK", new DialogInterface.OnClickListener() {
							public void onClick(DialogInterface paramDialogInterface, int paramInt) {
								Intent localIntent = new Intent("android.intent.action.MAIN", null);
								localIntent.addCategory("android.intent.category.LAUNCHER");
								localIntent.setComponent(new ComponentName("com.android.settings", "com.android.settings.bluetooth.BluetoothSettings"));
								localIntent.setFlags(268435456);
								startActivity(localIntent);
							}
						})
						.setNegativeButton("Cancel", new DialogInterface.OnClickListener() {
							public void onClick(DialogInterface paramDialogInterface, int paramInt) {
								paramDialogInterface.cancel();
							}
						});
	        localBuilder.create().show();
	        return false;
		}
		return true;
	}

	boolean checkAccessibility() {
		AccessibilityManager am = (AccessibilityManager)getSystemService(Context.ACCESSIBILITY_SERVICE);
		List<AccessibilityServiceInfo> list =
				am.getEnabledAccessibilityServiceList(AccessibilityServiceInfo.FEEDBACK_GENERIC);
		Log.d("AccessibilityTest", "Count of List: "+list.size());
		boolean isEnabled = false;
		loop:
		for(AccessibilityServiceInfo i:list) {
			if("com.goldtek/.GoldtekService".equalsIgnoreCase(i.getId())) {
				isEnabled = true;
				break loop;
			}
		}
		if( !isEnabled ) {
			Log.d("AccessibilityTest", "Popup Dialog");
			AlertDialog.Builder localBuilder = new AlertDialog.Builder(this);
			localBuilder.setTitle("Notification Service")
						.setMessage("Please enable this service to pass notification to watch.")
						.setCancelable(true)
						.setPositiveButton("OK", new DialogInterface.OnClickListener() {
							public void onClick(DialogInterface paramDialogInterface, int paramInt) {
								Intent i = new Intent(android.provider.Settings.ACTION_ACCESSIBILITY_SETTINGS);
								startActivity(i);
							}
						})
						.setNegativeButton("Cancel", new DialogInterface.OnClickListener() {
							public void onClick(DialogInterface paramDialogInterface, int paramInt) {
								paramDialogInterface.cancel();
							}
						});
	        localBuilder.create().show();
		} else {
			Log.d("AccessibilityTest", "Service is Enabled!");
		}
		Log.d("AccessibilityTest", "End of Process");
		return isEnabled;
	}

	public void onDestroy() {
		try {
			unregisterReceiver(bcReceiver);
		} catch(Throwable e) {
			Log.d("unregisterReceiver", e.getLocalizedMessage());
		}
		super.onDestroy();
	}

	@Override
	public boolean onCreateOptionsMenu(Menu menu) {
		// Inflate the menu; this adds items to the action bar if it is present.
		//getMenuInflater().inflate(R.menu.homescreen, menu);
		return true;
	}
	private static final int SETTINGS = 20;
	@Override
	public boolean onOptionsItemSelected(MenuItem item) {
		switch (item.getItemId()) {
		case R.id.action_settings:
			Intent intent = new Intent(this, PreferencesActivity.class);
			startActivityForResult(intent, SETTINGS);
			break;
		}
		return super.onOptionsItemSelected(item);
	}



	View.OnClickListener doConnect = new View.OnClickListener() {
		@Override
		public void onClick(View v) {
			
			if( checkBTPower() ) {
				//BtListDialog.disconnectFromDev(v.getContext());
				tvConnection.setText(R.string.connecting);
				//	TODO: Show the paired BT devices
				android.app.FragmentTransaction ft = getFragmentManager().beginTransaction();
		        android.app.Fragment prev = getFragmentManager().findFragmentByTag("btlistdialog");
		        if (prev != null) {
		            ft.remove(prev);
		        }
		        ft.addToBackStack(null);
	
				BtListDialog btlist = new BtListDialog();
				btlist.show(ft, "btlistdialog");
			}
		}
	};
	
	View.OnClickListener doDisconnect = new View.OnClickListener() {
		
		@Override
		public void onClick(View v) {
			//	TODO: disconnected from Bluetooth device
			BtListDialog.disconnectFromDev(v.getContext());
		}
	};
	
	View.OnClickListener doSetVibrationLevel = new View.OnClickListener() {
		@Override
		public void onClick(View v) {
			Intent intent = new Intent(getApplication(), NotificationSenderService.class);
			intent.setAction(CosmosMsg.SET_VIBRATION_LEVEL);
			intent.putExtra(CosmosMsg.VLevel, v.getId());
			startService(intent);
		}
	};

	View.OnClickListener doSyncTime = new View.OnClickListener() {
		@Override
		public void onClick(View v) {
			Intent intent = new Intent(getApplication(), NotificationSenderService.class);
			intent.setAction(CosmosMsg.SET_CURRENT_TIME);
			startService(intent);
		}
	};
	
	View.OnClickListener doNotification = new View.OnClickListener() {
		@Override
		public void onClick(View v) {
			// TODO Auto-generated method stub
			//Intent intent = new Intent(getApplicationContext(), CosMosActivity.class);
			if(checkAccessibility()) {
				Intent intent = new Intent(getApplicationContext(), NotificationListActivity.class);
				startActivity(intent);
			}
		}
	};


	void doGetVibrationLevel() {
		Intent intent = new Intent(this, NotificationSenderService.class);
		intent.setAction(CosmosMsg.GET_VIBRATION_LEVEL);
		startService(intent);
	}

	public void doGetConnectionStatus() {
		Intent intent = new Intent(this, NotificationSenderService.class);
		intent.setAction(CosmosMsg.GET_CONNECTION_STATUS);
		startService(intent);
	}
	
}
