#include "HelloJNI.h"
#include <stdio.h>

/*
 * Class:     HelloJNI
 * Method:    sayHello
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_HelloJNI_sayHello(JNIEnv *env, jobject jobj)
{
    printf("Hello, World!\n");
    return;
}

