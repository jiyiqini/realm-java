/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_realm_internal_Group */

#ifndef _Included_io_realm_internal_Group
#define _Included_io_realm_internal_Group
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     io_realm_internal_Group
 * Method:    createNative
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Group_createNative__
  (JNIEnv *, jobject);

/*
 * Class:     io_realm_internal_Group
 * Method:    createNative
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Group_createNative__Ljava_lang_String_2I
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     io_realm_internal_Group
 * Method:    createNative
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Group_createNative___3B
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     io_realm_internal_Group
 * Method:    createNative
 * Signature: (Ljava/nio/ByteBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Group_createNative__Ljava_nio_ByteBuffer_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     io_realm_internal_Group
 * Method:    nativeClose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Group_nativeClose
  (JNIEnv *, jclass, jlong);

/*
 * Class:     io_realm_internal_Group
 * Method:    nativeSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Group_nativeSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_Group
 * Method:    nativeHasTable
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_realm_internal_Group_nativeHasTable
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     io_realm_internal_Group
 * Method:    nativeGetTableName
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_io_realm_internal_Group_nativeGetTableName
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     io_realm_internal_Group
 * Method:    nativeRemoveTable
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Group_nativeRemoveTable
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     io_realm_internal_Group
 * Method:    nativeRenameTable
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Group_nativeRenameTable
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     io_realm_internal_Group
 * Method:    nativeGetTableNativePtr
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Group_nativeGetTableNativePtr
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     io_realm_internal_Group
 * Method:    nativeWriteToFile
 * Signature: (JLjava/lang/String;[B)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Group_nativeWriteToFile
  (JNIEnv *, jobject, jlong, jstring, jbyteArray);

/*
 * Class:     io_realm_internal_Group
 * Method:    nativeLoadFromMem
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Group_nativeLoadFromMem
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     io_realm_internal_Group
 * Method:    nativeWriteToMem
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_io_realm_internal_Group_nativeWriteToMem
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_Group
 * Method:    nativeToJson
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_io_realm_internal_Group_nativeToJson
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_Group
 * Method:    nativeCommit
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Group_nativeCommit
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_Group
 * Method:    nativeToString
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_io_realm_internal_Group_nativeToString
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_Group
 * Method:    nativeIsEmpty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_io_realm_internal_Group_nativeIsEmpty(
    JNIEnv*, jobject, jlong nativeGroupPtr);

#ifdef __cplusplus
}
#endif
#endif
