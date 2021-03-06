package com.goldtek.sppcommandtest;

import java.util.ArrayList;

import android.app.Activity;
import android.bluetooth.BluetoothDevice;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.BaseAdapter;
import android.widget.ListView;
import android.widget.TextView;

import com.goldtek.sppcommand.GoldtekSppCommand;

public class MainActivity extends Activity {
	final static String tag = "MainActivity";
	static GoldtekSppCommand spp = new GoldtekSppCommand();
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		
		ListView devList = (ListView)findViewById(R.id.listView1);
		devList.setAdapter(adapter);
		devList.setOnItemClickListener(itemClickListener);
	}

	@Override
	protected void onResume() {
		super.onResume();
		adapter.notifyDataSetChanged();
	}
	
	@Override
	public boolean onCreateOptionsMenu(Menu menu) {
		// Inflate the menu; this adds items to the action bar if it is present.
		//getMenuInflater().inflate(R.menu.main, menu);
		return true;
	}

	AdapterView.OnItemClickListener itemClickListener =
			new AdapterView.OnItemClickListener() {

		@Override
		public void onItemClick
		(AdapterView<?> parent, View v, int position, long id) {
			BluetoothDevice dev = (BluetoothDevice)adapter.getItem(position);
			//	TODO: goto the file list
			Intent i = new Intent();
			Bundle b = new Bundle();
			b.putParcelable("BLUETOOTH_DEVICE", dev);
			i.putExtra("BLUETOOTH_DEVICE", b);
			MainActivity.this.startActivityForResult(i, 1);
		}
		
	};
	
	BluetoothListAdapter adapter = new BluetoothListAdapter();
	private class BluetoothListAdapter extends BaseAdapter {
		final static String tag = "BluetoothListAdapter";
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
			View v;
			try {
				if(null != convertView) {
					v = convertView;
				} else {
					LayoutInflater inflater = (LayoutInflater)getSystemService
						      (Context.LAYOUT_INFLATER_SERVICE);
					v = inflater.inflate(R.layout.list_item_layout, parent, false);
				}
	
				((TextView)v.findViewById(R.id.BTDeviceName))
						.setText(devices.get(position).getName());
				((TextView)v.findViewById(R.id.BTDeviceMac))
						.setText(devices.get(position).getAddress());
				
			} catch(NullPointerException n) {
				v = null;
				Log.d(tag, "NULL");
			} catch(Throwable e) {
				v = null;
				Log.d(tag, e.getLocalizedMessage());
			}
			return v;
		}
		
	}

}
