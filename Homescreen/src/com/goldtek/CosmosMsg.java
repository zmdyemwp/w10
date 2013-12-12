package com.goldtek;

public class CosmosMsg {
	
	static final public String notifyAction =
			"com.goldtek.receiver.for.broadcast.from.notification.sender.service";
	
	public static final String msg = "msg";				//	message field
	public static final String value = "value";			//	value field
	
	
	//		intent action sent to service
	public static final String GET_CONNECTION_STATUS = "GET_CONNECTION_STATUS";
	public static final String GET_VIBRATION_LEVEL = "GET_VIBRATION_LEVEL";
	public static final String SET_VIBRATION_LEVEL = "SET_VIBRATION_LEVEL";
	public static final String VLevel = "VALUE_VIBRATION_LEVEL";
	public static final String SET_CURRENT_TIME = "SET_CURRENT_TIME";

	//		broadcast message received from service
	public static final int CONNECTION_STATUS_CHANGE = 0;
	public static final int VIBRATION_LEVEL_CHANGE = 1;

}
