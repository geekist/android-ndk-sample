#include "com_ytech_ndksample_NDKTools.h"

JNIEXPORT jstring JNICALL Java_com_ytech_ndksample_NDKTools_getStringFromNative
  (JNIEnv *env, jobject obj){
     return (*env)->NewStringUTF(env,"Hello World，这是Jon bates NDK的第一行代码");
  }