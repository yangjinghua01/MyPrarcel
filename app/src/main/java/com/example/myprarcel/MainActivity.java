 package com.example.myprarcel;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.widget.TextView;

import com.example.myprarcel.databinding.ActivityMainBinding;

public class MainActivity extends AppCompatActivity {
    static {
        System.loadLibrary("native-lib");
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView tv = findViewById(R.id.sample_text);
        tv.setText(stringFromJNI());
//        =======================源码分析
        Parcel parcel = Parcel.obtain();
        parcel.writeInt(50);
        parcel.writeInt(100);
        parcel.setDataPosition(0);
        int r = parcel.readInt();
        parcel.readInt();
//        自己手写
        Dparcel dparcel = Dparcel.obtain();
        dparcel.writeInt(50);
        dparcel.writeInt(100);
        dparcel.setDataPosition(0);
        int s = dparcel.readInt();
        dparcel.readInt();
    }

    public native String stringFromJNI();
}