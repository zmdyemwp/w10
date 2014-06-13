package com.goldtek.sppcommand;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Set;
import java.util.UUID;

import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothSocket;
import android.os.SystemClock;
import android.util.Log;



public class GoldtekSppCommand {

	static final String tag = "GoldtekSppCommand";
	BluetoothAdapter btadapter = null;
	BluetoothSocket btsocket = null;
	
	public GoldtekSppCommand() {
		//	Constructor
		btadapter = BluetoothAdapter.getDefaultAdapter();
	}

	/*		GetComparedDev
	 * 			return the compared BT devices
	 * */
	public ArrayList<BluetoothDevice> GetComparedDev() {
		ArrayList<BluetoothDevice> result = new ArrayList<BluetoothDevice>();
		result.clear();
		Set<BluetoothDevice> btdevs = btadapter.getBondedDevices();
		for(BluetoothDevice dev:btdevs) {
			result.add(dev);
		}
		return result;
	}
	
	public boolean InitBluetoothSpp(BluetoothDevice dev) {
		boolean result = false;
		//	TODO: open and initialize serial port
		try {
			if(null != btsocket) {
				btsocket.close();
			}
			/* An application should always call cancel discovery
				even if it did not directly request a discovery,
				just to be sure. */
			btsocket = dev.createRfcommSocketToServiceRecord(UUID.fromString("00001101-0000-1000-8000-00805F9B34FB"));
			BluetoothAdapter.getDefaultAdapter().cancelDiscovery();
			btsocket.connect();
			result = true;
		} catch(NullPointerException n) {
			Log.d(tag, "NULL POINTER EXCEPTION");
		} catch(Throwable e) {
			Log.d(tag, e.getLocalizedMessage());
		}
		return result;
	}

	public void DeinitBluetoothSpp() {
		//	TODO: close serial port
		try {
			btsocket.close();
		} catch(NullPointerException n) {
			Log.d(tag, "NULL POINTER EXCEPTION");
		} catch(Throwable e) {
			Log.d(tag, e.getLocalizedMessage());
		}
	}

	public int SppSend(byte[] data) {
		int result = 0;
		try {
			btsocket.getOutputStream().write(data);
		} catch(NullPointerException n) {
			Log.d(tag, "NULL POINTER EXCEPTION");
		} catch(Throwable e) {
			Log.d(tag, e.getLocalizedMessage());
		}
		return result;
	}

	public int SppRecv(byte[] buf, int buflen) {
		int result = 0;
		try {
			InputStream i = btsocket.getInputStream();
			int err = 0;
			while(10 > err && result < buflen) {
				
				SystemClock.sleep(50);
			}
			
			
		} catch(NullPointerException n) {
			Log.d(tag, "NULL POINTER EXCEPTION");
		} catch(Throwable e) {
			Log.d(tag, e.getLocalizedMessage());
		}
		return result;
	}



}
