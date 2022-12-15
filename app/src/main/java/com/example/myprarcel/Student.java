package com.example.myprarcel;

import android.os.Parcel;
import android.os.Parcelable;

import java.io.Serializable;

//面试题 Serializable 和 Parcelable 那个性能更高为什么
// 因为Serializeble IO流完成的，Parcelable C++对象指针 共享内存 指针挪动保存数据
public class Student implements Parcelable {
    protected Student(Parcel in) {
        in.readInt();
        in.readString();
    }

    public static final Creator<Student> CREATOR = new Creator<Student>() {
        @Override
        public Student createFromParcel(Parcel in) {
            return new Student(in);
        }

        @Override
        public Student[] newArray(int size) {
            return new Student[size];
        }
    };

    @Override
    public int describeContents() {
        return 0;
    }

    @Override
    public void writeToParcel(Parcel parcel, int i) {
        parcel.readInt();
        parcel.readString();
    }
}
