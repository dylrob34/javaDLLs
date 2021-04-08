/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class main_DeviceControl */

#ifndef _Included_main_DeviceControl
#define _Included_main_DeviceControl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     main_DeviceControl
 * Method:    load
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_main_DeviceControl_load
  (JNIEnv *, jclass);

/*
 * Class:     main_DeviceControl
 * Method:    getUUTData
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_main_DeviceControl_getUUTData
  (JNIEnv *, jclass);

/*
 * Class:     main_DeviceControl
 * Method:    sendComPort
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_main_DeviceControl_sendComPort
  (JNIEnv *, jclass, jstring);

/*
 * Class:     main_DeviceControl
 * Method:    powerOn
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_main_DeviceControl_powerOn
  (JNIEnv *, jclass);

/*
 * Class:     main_DeviceControl
 * Method:    powerOff
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_main_DeviceControl_powerOff
  (JNIEnv *, jclass);

/*
 * Class:     main_DeviceControl
 * Method:    setVoltage
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_main_DeviceControl_setVoltage
  (JNIEnv *, jclass, jstring);

/*
 * Class:     main_DeviceControl
 * Method:    sendAxisOnePos
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_main_DeviceControl_sendAxisOnePos
  (JNIEnv *, jclass, jstring);

/*
 * Class:     main_DeviceControl
 * Method:    sendAxisOneRate
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_main_DeviceControl_sendAxisOneRate
  (JNIEnv *, jclass, jstring);

/*
 * Class:     main_DeviceControl
 * Method:    sendAxisTwoPos
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_main_DeviceControl_sendAxisTwoPos
  (JNIEnv *, jclass, jstring);

/*
 * Class:     main_DeviceControl
 * Method:    sendAxisTwoRate
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_main_DeviceControl_sendAxisTwoRate
  (JNIEnv *, jclass, jstring);

/*
 * Class:     main_DeviceControl
 * Method:    getAxisOnePos
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_main_DeviceControl_getAxisOnePos
  (JNIEnv *, jclass);

/*
 * Class:     main_DeviceControl
 * Method:    getAxisOneRate
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_main_DeviceControl_getAxisOneRate
  (JNIEnv *, jclass);

/*
 * Class:     main_DeviceControl
 * Method:    getAxisTwoPos
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_main_DeviceControl_getAxisTwoPos
  (JNIEnv *, jclass);

/*
 * Class:     main_DeviceControl
 * Method:    getAxisTwoRate
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_main_DeviceControl_getAxisTwoRate
  (JNIEnv *, jclass);

/*
 * Class:     main_DeviceControl
 * Method:    execute
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_main_DeviceControl_execute
  (JNIEnv *, jclass, jstring, jstring, jstring, jobjectArray, jint);

/*
 * Class:     main_DeviceControl
 * Method:    verify
 * Signature: ([Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_main_DeviceControl_verify
  (JNIEnv *, jclass, jobjectArray, jint);

/*
 * Class:     main_DeviceControl
 * Method:    abortTest
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_main_DeviceControl_abortTest
  (JNIEnv *, jclass);

/*
 * Class:     main_DeviceControl
 * Method:    record
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_main_DeviceControl_record
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     main_DeviceControl
 * Method:    getPV
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_main_DeviceControl_getPV
  (JNIEnv *, jclass);

/*
 * Class:     main_DeviceControl
 * Method:    getSP
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_main_DeviceControl_getSP
  (JNIEnv *, jclass);

/*
 * Class:     main_DeviceControl
 * Method:    sendManualSP
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_main_DeviceControl_sendManualSP
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif
