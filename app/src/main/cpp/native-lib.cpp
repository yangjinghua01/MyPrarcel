#include <jni.h>
#include <string>
#include "com_example_myprarcel_Dparcel.h"
static DParcel * dParcel = 0;
extern "C" JNIEXPORT jlong JNICALL
Java_com_example_myprarcel_Dparcel_nativeCreate(JNIEnv * jniEnv, jobject job) {
    DParcel * dParcel = new DParcel();
    return reinterpret_cast<jlong>(dParcel);
}
extern "C" JNIEXPORT void JNICALL
Java_com_example_myprarcel_Dparcel_nativeWriteInt(JNIEnv * jniEnv, jobject thiz, jlong native_ptr, jint val) {
    DParcel * dParcel = reinterpret_cast<DParcel *>(native_ptr);
    dParcel->writeInt(val);
}
extern "C" JNIEXPORT void JNICALL
Java_com_example_myprarcel_Dparcel_nativeSetDataPosition(JNIEnv *, jobject, jlong native_ptr, jint mDataPos) {
    DParcel * dParcel = reinterpret_cast<DParcel *>(native_ptr);
    dParcel->setDataPosition(mDataPos);
}
extern "C" JNIEXPORT jint JNICALL
Java_com_example_myprarcel_Dparcel_nativeReadInt(JNIEnv *, jobject, jlong native_ptr) {
    DParcel * dParcel = reinterpret_cast<DParcel *>(native_ptr);
    return dParcel->readInt();
}
