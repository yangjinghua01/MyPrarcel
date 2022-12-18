package com.example.myprarcel;

public class Dparcel {
    static {
        System.loadLibrary("native-lib");
    }

    private long mNativePtr = 0;

    //不给外界调用
    private Dparcel(long mNativePtr) {
        this.mNativePtr = mNativePtr;
        this.mNativePtr = nativeCreate();
    }

    //内部类
    private static class MyObject {
        private static Dparcel DPARCEL = new Dparcel(0);
    }


    public static Dparcel obtain() {
        return MyObject.DPARCEL;
    }

    public final void writeInt(int val) {
        nativeWriteInt(mNativePtr, val);
    }

    public final void setDataPosition(int pos) {
        nativeSetDataPosition(mNativePtr, pos);
    }

    public final int readInt() {
        return nativeReadInt(mNativePtr);
    }

    //    native方法区
    private native long nativeCreate();//在native层构建Parcel.cpp 对象指针地址

    private native void nativeWriteInt(long mNativePtr, int val);//写入int

    private native void nativeSetDataPosition(long mNativePtr, int pos);//设置 mDataPos = 0 为了下次从0的位置开始读

    private native int nativeReadInt(long mNativePtr);//读取int
}
