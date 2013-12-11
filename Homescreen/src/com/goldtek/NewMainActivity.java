package com.goldtek;

import android.app.ActionBar;
import android.app.Activity;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Bundle;
import android.util.Log;
import android.view.Menu;
import android.view.View;
import android.widget.Button;
import android.widget.RadioGroup;
import android.widget.TextView;

public class NewMainActivity extends Activity {

	TextView	tvConnection;
	RadioGroup	rgVibration;
	  
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
		//getMenuInflater().inflate(R.menu.main, menu);
		return true;
	}

	View.OnClickListener doConnect = new View.OnClickListener() {
		
		@Override
		public void onClick(View v) {
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
	};
	
	View.OnClickListener doDisconnect = new View.OnClickListener() {
		
		@Override
		public void onClick(View v) {
			//	TODO: disconnected from Bluetooth device
			BtListDialog.disconnectFromDev(v.getContext());
		}
	};
	
}
