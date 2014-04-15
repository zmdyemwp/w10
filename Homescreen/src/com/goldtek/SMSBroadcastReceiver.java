/**
 * Copyright 2013-present Goldtek .
 * 
 * 
 * robin_singh@goldtek.com
 * 
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package com.goldtek;

import android.bluetooth.BluetoothDevice;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.telephony.SmsMessage;
import android.telephony.TelephonyManager;
import android.util.Log;



public class SMSBroadcastReceiver extends BroadcastReceiver {

        private static final String SMS_RECEIVED = "android.provider.Telephony.SMS_RECEIVED";
        private static final String TAG = "SMSBroadcastReceiver";

        @Override
        public void onReceive(Context context, Intent intent) {
             Log.i(TAG, "JMD >>>>>>>>>>>>>>>Intent recieved: " + intent.getAction());
                //if (intent.getAction() == SMS_RECEIVED) {
                  if(intent.getAction().equals(SMS_RECEIVED)) {
                    Bundle bundle = intent.getExtras();
                    if (bundle != null) {
                        Object[] pdus = (Object[])bundle.get("pdus");
                        final SmsMessage[] messages = new SmsMessage[pdus.length];
                        for (int i = 0; i < pdus.length; i++) {
                            messages[i] = SmsMessage.createFromPdu((byte[])pdus[i]);
                        }
                        if (messages.length > -1) {
                            Log.i(TAG, "Message recieved: " + messages[0].getMessageBody());
                            ///Toast.makeText(context, messages[0].getMessageBody().toString(), Toast.LENGTH_SHORT).show(); 
                            //MainActivity.forwardSMStowatch(messages[0].getMessageBody().toString());
                            Intent localIntent2 = new Intent(context, NotificationSenderService.class); 
                            localIntent2.setAction("SMS_RECEIVED");
                            localIntent2.putExtra("sms", messages[0].getMessageBody().toString());
                            context.startService(localIntent2);
                            
                            
                        }
                    }
                } else if(intent.getAction().equals(BluetoothDevice.ACTION_ACL_DISCONNECTED)){
                	Log.i(TAG, "JMD >>>>>>>>>>>>>>>Intent recieved: BT DISCONnECT ");
                	Intent i = new Intent();
            		Bundle b = new Bundle();
            		b.putInt(CosmosMsg.msg, CosmosMsg.CONNECTION_STATUS_CHANGE);
            		b.putInt(CosmosMsg.value, 0);
            		i.putExtras(b);
            		i.setAction(CosmosMsg.notifyAction);
            		context.sendBroadcast(i);
                }

                  
                  
                  
                String str1;
                String str2;
                
                if(intent.getAction().equals("android.intent.action.PHONE_STATE")) {
                      
                	String state = intent.getStringExtra(TelephonyManager.EXTRA_STATE);
                	
                	Bundle localBundle = intent.getExtras();
                	
                    if (TelephonyManager.EXTRA_STATE_RINGING.equals(state)) {                                   

                        // Phone is ringing
                    	str2 = intent.getStringExtra("incoming_number");

                    }
                }       
           }
        
        
    }