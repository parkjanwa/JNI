#include <jni.h>
#include "JNI_HelloWorld.h"

#using "C:\Users\User\source\repos\NewCSharpDll\NewCSharpDll\bin\Debug\NewCSharpDll.dll"


JNIEXPORT void JNICALL Java_JNI_HelloWorld_one
(JNIEnv*, jclass) {
	printf("c++ : Success");
}


JNIEXPORT void JNICALL Java_JNI_HelloWorld_two
(JNIEnv*, jclass) {
	NewCSharpDll::HelloClass t;
	return t.Hello();
}

