package com.android.cosmosui;

import android.app.AlertDialog;
import android.app.Dialog;
import android.app.DialogFragment;
import android.app.FragmentTransaction;
import android.os.Bundle;

public class BtListDialog extends DialogFragment {
	@Override
    public Dialog onCreateDialog(Bundle savedInstanceState) {
        // Use the Builder class for convenient dialog construction
        AlertDialog.Builder builder = new AlertDialog.Builder(getActivity());
        builder.setMessage(R.string.dialog_title);
        // Create the AlertDialog object and return it
        return builder.create();
    }
	
	public int show(FragmentTransaction ft, String tag) {
		return super.show(ft, tag);
	}
}
