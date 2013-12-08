package com.android.cosmosui;

import android.app.Activity;
import android.os.Bundle;
import android.view.Menu;
import android.view.View;
import android.widget.Button;

public class MainActivity extends Activity {

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		((Button)findViewById(R.id.Connect)).setOnClickListener(doConnect);
	}

	@Override
	public boolean onCreateOptionsMenu(Menu menu) {
		// Inflate the menu; this adds items to the action bar if it is present.
		getMenuInflater().inflate(R.menu.main, menu);
		return true;
	}

	View.OnClickListener doConnect = new View.OnClickListener() {
		
		@Override
		public void onClick(View v) {
			
			//	TODO: check BT enabled
			
			//	TODO: Show the paired BT devices
			android.app.FragmentTransaction ft = getFragmentManager().beginTransaction();
	        android.app.Fragment prev = getFragmentManager().findFragmentByTag("btlistdialog");
	        if (prev != null) {
	            ft.remove(prev);
	        }
	        ft.addToBackStack(null);

			BtListDialog btlist = new BtListDialog();
			btlist.show(ft, "btlistdialog");
			
			//	TODO: Connect to selected BT Device
		}
	};
	
}
