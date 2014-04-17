package com.goldtek;



import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.provider.Settings;
import android.view.View;
import android.widget.ImageButton;



/**
 * This is the entry activity for a sample that demonstrates how to implement an
 * {@link android.accessibilityservice.AccessibilityService}.
 */
public class CosMosActivity extends Activity {

    /** An intent for launching the system settings. */
    private static final Intent sSettingsIntent =
        new Intent(Settings.ACTION_ACCESSIBILITY_SETTINGS);

    /**
     * {@inheritDoc}
     */
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.accessibility_service);

        // Add a shortcut to the accessibility settings.
        ImageButton button = (ImageButton) findViewById(R.id.button);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(sSettingsIntent);
            }
        });
    }
}
