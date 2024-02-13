#include <jni.h>
#include <string>
#include "log.h"




//extern "C" JNIEXPORT jstring JNICALL
//Java_com_hexl_lessontest_MainActivity_stringFromJNI(
//        JNIEnv* env,
//        jobject /* this */) {
//    std::string hello = "Hello from C++";
//    char str[10];
////    sprintf(str, " add %d", result);
//    LOGI("val=%s,len=%d,address=%p", str, strlen(str), &str);
//    return env->NewStringUTF(strcat(const_cast<char *>(hello.c_str()), str));
//}
//
//


extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_xptest_MainActivity_stringFromJNI(JNIEnv *env, jclass clazz) {
    std::string hello = "Hello from C++";
    char str[15] = ", yuanrenxue";
    return env->NewStringUTF(strcat(const_cast<char *>(hello.c_str()), str));
}