#include <jni.h>
#include <string>
#include "com_example_myprarcel_Dparcel.h"

extern "C"
JNIEXPORT jlong JNICALL
Java_com_example_myprarcel_Dparcel_nativeCreate(JNIEnv *jniEnv, jobject jobj) {
    DParcel *dParcel = new DParcel;
    return reinterpret_cast<jlong>(dParcel);

}




extern "C" JNIEXPORT void JNICALL
Java_com_example_myprarcel_Dparcel_nativeWriteInt(JNIEnv * jniEnv, jobject native_ptr) {

}



extern "C" JNIEXPORT void JNICALL
Java_com_example_myprarcel_Dparcel_nativeSetDataPosition(JNIEnv *, jobject, jlong, jint) {

}






extern "C" JNIEXPORT jint JNICALL
Java_com_example_myprarcel_Dparcel_nativeReadInt(JNIEnv *, jobject, jlong) {

}
