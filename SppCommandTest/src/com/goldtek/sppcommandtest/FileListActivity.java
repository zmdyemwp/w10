package com.goldtek.sppcommandtest;

import android.app.Activity;
import android.bluetooth.BluetoothDevice;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.BaseAdapter;
import android.widget.ListView;

import com.goldtek.sppcommand.GoldtekSppCommand;

public class FileListActivity extends Activity {

	static GoldtekSppCommand spp = new GoldtekSppCommand();
	BluetoothDevice dev;
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		
		Intent i = this.getIntent();
		dev = new BluetoothDevice(i.getSerializableExtra("BLUETOOTH_DEVICE"));
		
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
	protected void onPause() {
		super.onPause();
	}
	
	AdapterView.OnItemClickListener itemClickListener =
			new AdapterView.OnItemClickListener() {

		@Override
		public void onItemClick
		(AdapterView<?> parent, View v, int position, long id) {
			BluetoothDevice dev = (BluetoothDevice)adapter.getItem(position);
			//	TODO: goto the file list
			
			
		}
		
	};

	FileListAdapter adapter = new FileListAdapter();
	private class FileListAdapter extends BaseAdapter {
		final static String tag = "FileListAdapter";

		@Override
		public int getCount() {
		}

		@Override
		public Object getItem(int position) {
		}

		@Override
		public long getItemId(int position) {
			return position;
		}

		@Override
		public View getView(int position, View convertView, ViewGroup parent) {
			View v;
			try {
				if(null != convertView) {
					v = convertView;
				} else {
					LayoutInflater inflater = (LayoutInflater)getSystemService
						      (Context.LAYOUT_INFLATER_SERVICE);
					v = inflater.inflate(R.layout.list_item_layout, parent, false);
				}

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
