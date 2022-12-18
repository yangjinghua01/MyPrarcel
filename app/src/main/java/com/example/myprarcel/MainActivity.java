 package com.example.myprarcel;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.util.Log;
import android.widget.TextView;

import com.example.myprarcel.databinding.ActivityMainBinding;

public class MainActivity extends AppCompatActivity {
    private static final String TAG = "Dog";
    static {
        System.loadLibrary("native-lib");
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
//        =======================源码分析
        Parcel parcel = Parcel.obtain();
        parcel.writeInt(50);
        parcel.writeInt(100);
        parcel.setDataPosition(0);
        int r = parcel.readInt();
        Log.e(TAG, "系统值: "+r);
        r = parcel.readInt();
        Log.e(TAG, "系统值: "+r);
//        自己手写
        Dparcel dparcel = Dparcel.obtain();
        dparcel.writeInt(50);
        dparcel.writeInt(100);
        dparcel.setDataPosition(0);
        int s = dparcel.readInt();
        Log.e(TAG, "自定义值: "+s);
        s = dparcel.readInt();
        Log.e(TAG, "自定义值: "+s);
    }


}