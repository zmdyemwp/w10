package com.goldtek;

import android.app.ListActivity;
import android.content.Context;
import android.content.SharedPreferences;
import android.content.pm.PackageManager;
import android.os.Bundle;
import android.preference.PreferenceManager;
import android.view.Menu;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.ListAdapter;
import android.widget.ListView;

public class NotificationListActivity extends ListActivity {

	myAdapter lsa = null;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);

		lsa = new myAdapter(this, R.layout.notification_list_item);
		setListAdapter((ListAdapter)lsa);

		try {
			final ListView listView = getListView();
	        listView.setItemsCanFocus(false);
	        listView.setChoiceMode(ListView.CHOICE_MODE_MULTIPLE);
	        
	        try {
	        	lsa.clear();
	        	PackageManager pm = getPackageManager();
		        for(int i = 0; i < nApps.length; i++) {
		        	if(0 < nApps[i].getPackageName().length()) {
		        		try {
				        	pm.getApplicationInfo(nApps[i].getPackageName(), 0);
				        	lsa.add(nApps[i].getLabel());
				        } catch (Throwable e) {}
		        	} else {
		        		lsa.add(nApps[i].getLabel());
		        	}
		        }
	        } catch (Throwable e) {
	        	//Log.d("AddStrings", e.getLocalizedMessage());
	        }
		} catch (Throwable e) {
			//Log.d("MIN", e.getMessage());
		}
	}

	private class myAdapter extends ArrayAdapter<String> {

		public myAdapter(Context context, int resource) {
			super(context, resource);
			// TODO Auto-generated constructor stub
		}

	}

	@Override
	protected void onListItemClick(ListView l, View v, int position, long id) {
		super.onListItemClick(l,v,position,id);
		try {
			SharedPreferences.Editor editor = PreferenceManager.getDefaultSharedPreferences(this).edit();
			editor.putBoolean(lsa.getItem(position), l.getCheckedItemPositions().get(position));
			editor.commit();
		} catch (Throwable e) {
			//Log.d("onListItemClick", e.getLocalizedMessage());
		}
	}

	@Override
	public boolean onCreateOptionsMenu(Menu menu) {
		// Inflate the menu; this adds items to the action bar if it is present.
		//getMenuInflater().inflate(R.menu.main, menu);
		return true;
	}

	@Override
	protected void onResume() {
		super.onResume();
		SharedPreferences sp = PreferenceManager.getDefaultSharedPreferences(this);
		for(int i = 0; i < lsa.getCount(); i++) {
			getListView().setItemChecked(i, sp.getBoolean(lsa.getItem(i), false));
		}
	}

	/**
			//"",									"SMS"
			//"",									"Calendar"
			"com.facebook.katana",				"Facebook"
			"com.twitter.android",				"Twitter"
			"com.google.android.gm",			"Gmail"
			"com.whatsapp",						"Whatsapp"
			"jp.naver.line.android",			"Line"
			"com.instagram.android",			"Instagram"
			"com.pinterest",					"Pinterest"
			"com.google.android.apps.plus",		"Google+"
			"com.skype.raider",					"Skype"
			"com.renren.xiaonei.android",		"Renren"
			"co.vine.android",					"Vine"
			"com.tencent.mm",					"Wechat"
			"com.linkedin.android",				"LinkedIn"
	 * */
	private final notiApp[] nApps = new notiApp[] {
			//new notiApp("", "SMS"),
			//new notiApp("", "Calendar"),
			new notiApp("com.facebook.katana", "Facebook"),
			new notiApp("com.twitter.android", "Twitter"),
			new notiApp("", "Gmail"),
			new notiApp("com.whatsapp", "Whatsapp"),
			new notiApp("jp.naver.line.android", "Line"),
			new notiApp("com.instagram.android", "Instagram"),
			new notiApp("com.pinterest", "Pinterest"),
			new notiApp("com.google.android.apps.plus", "Google+"),
			new notiApp("com.skype.raider", "Skype"),
			new notiApp("com.renren.xiaonei.android", "Renren"),
			new notiApp("co.vine.android", "Vine"),
			new notiApp("com.tencent.mm", "Wechat"),
			new notiApp("com.linkedin.android", "LinkedIn"),
	};
	private class notiApp {
		notiApp(String packagename, String name) {
			pn = packagename;
			n = name;
		}
		String pn;
		String n;
		public String getPackageName() { return pn; }
		public String getLabel() { return n; }
	}

}
