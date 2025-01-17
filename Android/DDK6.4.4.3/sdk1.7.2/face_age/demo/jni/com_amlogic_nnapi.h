/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_amlogic_nnapi */
#include "nn_sdk.h"
#include "nn_demo.h"

#ifndef _Included_com_amlogic_nnapi
#define _Included_com_amlogic_nnapi
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_amlogic_nnapi
 * Method:    model_init
 * Signature: ([BCC)J
 */
JNIEXPORT jlong JNICALL Java_com_amlogic_nnapi_model_1init
  (JNIEnv *, jobject, jbyteArray, jchar);

/*
 * Class:     com_amlogic_nnapi
 * Method:    model_inputs_set
 * Signature: (JIII[B)I
 */
JNIEXPORT jint JNICALL Java_com_amlogic_nnapi_model_1inputs_1set
  (JNIEnv *, jobject, jlong, jint, jint, jint, jbyteArray);

/*
 * Class:     com_amlogic_nnapi
 * Method:    model_run
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_amlogic_nnapi_model_1run
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_amlogic_nnapi
 * Method:    model_get_outputinfo
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_com_amlogic_nnapi_model_1get_1outputinfo
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     com_amlogic_nnapi
 * Method:    model_outputs_get
 * Signature: (J[F)I
 */
JNIEXPORT jint JNICALL Java_com_amlogic_nnapi_model_1outputs_1get
  (JNIEnv *, jobject, jlong, jfloatArray,jint,jint);

/*
 * Class:     com_amlogic_nnapi
 * Method:    model_destroy
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_amlogic_nnapi_model_1destroy
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
