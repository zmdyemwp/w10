package com.goldtek.sppcommandtest;

import java.util.ArrayList;

import android.app.Activity;
import android.bluetooth.BluetoothDevice;
import android.os.Bundle;
import android.view.Menu;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.ListView;

import com.goldtek.sppcommand.GoldtekSppCommand;

public class MainActivity extends Activity {

	static GoldtekSppCommand spp = new GoldtekSppCommand();
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		
		((ListView)findViewById(R.id.listView1)).setAdapter(adapter);
	}

	@Override
	protected void onResume() {
		super.onResume();
		adapter.notifyDataSetChanged();
	}
	
	@Override
	public boolean onCreateOptionsMenu(Menu menu) {
		// Inflate the menu; this adds items to the action bar if it is present.
		getMenuInflater().inflate(R.menu.main, menu);
		return true;
	}

	BluetoothListAdapter adapter = new BluetoothListAdapter();
	private class BluetoothListAdapter extends BaseAdapter {

		ArrayList<BluetoothDevice> devices;
		
		@Override
		public int getCount() {
			// TODO Auto-generated method stub
			devices = spp.GetComparedDev();
			if(null == devices) {
				return 0;
			} else {
				return devices.size();
			}
		}

		@Override
		public Object getItem(int position) {
			// TODO Auto-generated method stub
			if(null == devices) {
				return null;
			} else {
				return devices.get(position);
			}
		}

		@Override
		public long getItemId(int position) {
			// TODO Auto-generated method stub
			return position;
		}

		@Override
		public View getView(int position, View convertView, ViewGroup parent) {
			// TODO Auto-generated method stub
			MainActivity.this.getResources().
			return null;
		}
		
	}

}
