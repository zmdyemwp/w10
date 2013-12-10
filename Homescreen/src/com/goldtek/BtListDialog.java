package com.goldtek;

import java.util.ArrayList;
import java.util.Set;
import java.util.UUID;

import android.app.AlertDialog;
import android.app.Dialog;
import android.app.DialogFragment;
import android.app.FragmentTransaction;
import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.TextView;

public class BtListDialog extends DialogFragment {
	
	static BluetoothDevice currentDev = null;
	static private int mMaxChars = 50000;//Default
	static private UUID mDeviceUUID = UUID.fromString("00001101-0000-1000-8000-00805F9B34FB");
	private LayoutInflater mInflater;
	private BluetoothAdapter mBTAdapter;
	//private static final int BT_ENABLE_REQUEST = 10; // This is the code we use for BT Enable
	ArrayList<BluetoothDevice> list;

	class BtDevAdapter extends ArrayAdapter<BluetoothDevice> {
		private int mResource;
		ArrayList<BluetoothDevice> mobjs;
		BtDevAdapter(Context ctx, int resource, ArrayList<BluetoothDevice> objects) {
			super(ctx, resource, objects);
			mInflater = (LayoutInflater)ctx.getSystemService(Context.LAYOUT_INFLATER_SERVICE);
			mResource = resource;
			mobjs = objects;
		}
		
		@Override
		public View getView(int position, View convertView, ViewGroup parent) {
			return createViewFromResource(position, convertView, parent, mResource);
		}
		
		View createViewFromResource
			(int position, View convertView, ViewGroup parent, int resource) {
			View v;
			if(null != convertView) {
				v = convertView;
			} else {
				v = mInflater.inflate(resource, parent, false);
				BluetoothDevice dev = mobjs.get(position);
				((TextView)v.findViewById(R.id.connState))
					.setText(dev.getName());
				((TextView)v.findViewById(R.id.btAddr))
				.setText(dev.getAddress());
			}
			return v;
		}
	}

	public void connect2Dev(BluetoothDevice dev) {
		//	TODO: send intent to NotificationSenderService
		//		TODO: connect to device
		Intent localIntent2 = new Intent(getActivity(), NotificationSenderService.class);
        localIntent2.setAction("CONNECT_TO_BT");
        localIntent2.putExtra("mybtdevice", dev);
        localIntent2.putExtra("mybtuuid", mDeviceUUID.toString());
        localIntent2.putExtra("mybuffersize", mMaxChars);
        getActivity().startService(localIntent2);
        currentDev = dev;
	}
	
	static public void disconnectFromDev(Context ct) {
		final String packageName = "com.goldtek";
		final String className = "NotificationSenderService";
		//	TODO: send intent to NotificationSenderService
		//		TODO: disconnect from device
		Intent localIntent3 = new Intent();			
		localIntent3.setAction("DISCONNECT_TO_BT");
		localIntent3.putExtra("userDisconnect", true);
		localIntent3.putExtra("mybtdevice", currentDev);
		localIntent3.putExtra("mybtuuid", mDeviceUUID.toString());
		localIntent3.putExtra("mybuffersize", mMaxChars);
		localIntent3.setClassName(packageName, packageName + "." + className);	
		ct.startService(localIntent3);
		currentDev = null;
	}

	DialogInterface.OnClickListener listener = new DialogInterface.OnClickListener() {
		@Override
		public void onClick(DialogInterface dialog, int which) {
			// TODO Auto-generated method stub
			Log.d("Selected Bluetooth Device",
					list.get(which).getName()+"<"+list.get(which).getAddress()+">");
			connect2Dev(list.get(which));
		}
	};
	
	@Override
    public Dialog onCreateDialog(Bundle savedInstanceState) {
        // Use the Builder class for convenient dialog construction
        mBTAdapter = BluetoothAdapter.getDefaultAdapter();
        Set<BluetoothDevice> pairedDevices = mBTAdapter.getBondedDevices();
        list = new ArrayList<BluetoothDevice>();
        list.clear();
        for(BluetoothDevice i:pairedDevices) {
        	list.add(i);
        }

        AlertDialog.Builder builder = new AlertDialog.Builder(getActivity());
        Dialog d = builder.create();
        try {
	        BtDevAdapter adapter = new BtDevAdapter(getActivity(), R.layout.btdevlist_item, list);
	        View title = getActivity().getLayoutInflater()
	        				.inflate(R.layout.alert_dialog_title, null);
	        ((TextView)title.findViewById(R.id.alertDialogTitleText))
	        	.setText(this.getResources().getString(R.string.dialog_title));
	        builder.setCustomTitle(title)
	        		.setAdapter(adapter, listener);
	        // Create the AlertDialog object and return it
	        d = builder.create();
	        //d.getWindow().setBackgroundDrawableResource(R.drawable.dialog_box);
        } catch(Throwable e) {
        	Log.d("onCreateDialog", e.getMessage());
        }
        return d;
    }
	
	public int show(FragmentTransaction ft, String tag) {
		return super.show(ft, tag);
	}
	
	/**
	 * Searches for paired devices. Doesn't do a scan! Only devices which are paired through Settings->Bluetooth
	 * will show up with this. I didn't see any need to re-build the wheel over here
	 * @author ryder
	 *
	 */
	/*
	private class SearchDevices extends AsyncTask<Void, Void, List<BluetoothDevice>> {

		@Override
		protected List<BluetoothDevice> doInBackground(Void... params) {
			Set<BluetoothDevice> pairedDevices = mBTAdapter.getBondedDevices();
			List<BluetoothDevice> listDevices = new ArrayList<BluetoothDevice>();
			for (BluetoothDevice device : pairedDevices) {
				listDevices.add(device);
			}
			return listDevices;
		}

		@Override
		protected void onPostExecute(List<BluetoothDevice> listDevices) {
			super.onPostExecute(listDevices);
			if (listDevices.size() > 0) {
				MyAdapter adapter = (MyAdapter) mLstDevices.getAdapter();
				adapter.replaceItems(listDevices);
			} else {
				msg("No paired devices found, please pair your serial BT device and try again");
			}
		}

	}
	private void msg(String str) {
		Toast.makeText(getApplicationContext(), str, Toast.LENGTH_SHORT).show();
	}
	*/
}
