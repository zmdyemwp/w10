package com.goldtek;

public class CosmosMsg {
	
	static final public String notifyAction =
			"com.goldtek.receiver.for.broadcast.from.notification.sender.service";
	
	public static final String msg = "msg";				//	message field
	public static final String value = "value";			//	value field
	
	public static final int CONNECTION_STATUS_CHANGE = 0;
	public static final int VIBRATION_LEVEL_CHANGE = 1;
}
