/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "DParcel.h"
/* Header for class com_example_myprarcel_Dparcel */

#ifndef _Included_com_example_myprarcel_Dparcel
#define _Included_com_example_myprarcel_Dparcel
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_myprarcel_Dparcel
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_example_myprarcel_Dparcel_nativeCreate
  (JNIEnv *, jobject);

/*
 * Class:     com_example_myprarcel_Dparcel
 * Method:    nativeWriteInt
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_myprarcel_Dparcel_nativeWriteInt
  (JNIEnv *, jobject);

/*
 * Class:     com_example_myprarcel_Dparcel
 * Method:    nativeSetDataPosition
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_example_myprarcel_Dparcel_nativeSetDataPosition
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_example_myprarcel_Dparcel
 * Method:    nativeReadInt
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_example_myprarcel_Dparcel_nativeReadInt
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif