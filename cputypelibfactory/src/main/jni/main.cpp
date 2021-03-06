/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <string.h>
#include "cpu-features.h"
/* Header for class com_laipengxu_cputypelibfactory_CpuTypeUtils */

#ifndef _Included_com_laipengxu_cputypelibfactory_CpuTypeUtils
#define _Included_com_laipengxu_cputypelibfactory_CpuTypeUtils
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_laipengxu_cputypelibfactory_CpuTypeUtils
 * Method:    isArmCpu
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_laipengxu_cputypelibfactory_CpuTypeUtils_isArmCpu
  (JNIEnv *env, jclass type)
  {
      AndroidCpuFamily cpuFamily = android_getCpuFamily();
      return cpuFamily == ANDROID_CPU_FAMILY_ARM;
  }

/*
 * Class:     com_laipengxu_cputypelibfactory_CpuTypeUtils
 * Method:    isArm7Compatible
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_laipengxu_cputypelibfactory_CpuTypeUtils_isArm7Compatible
  (JNIEnv *env, jclass type)
  {
      uint64_t cpuFeatures = android_getCpuFeatures();
      return (cpuFeatures & ANDROID_CPU_ARM_FEATURE_ARMv7) == ANDROID_CPU_ARM_FEATURE_ARMv7;
  }

/*
 * Class:     com_laipengxu_cputypelibfactory_CpuTypeUtils
 * Method:    isMipsCpu
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_laipengxu_cputypelibfactory_CpuTypeUtils_isMipsCpu
(JNIEnv *env, jclass type)
{
    AndroidCpuFamily cpuFamily = android_getCpuFamily();
    return cpuFamily == ANDROID_CPU_FAMILY_MIPS;
}

/*
 * Class:     com_laipengxu_cputypelibfactory_CpuTypeUtils
 * Method:    isX86Cpu
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_laipengxu_cputypelibfactory_CpuTypeUtils_isX86Cpu
(JNIEnv *env, jclass type)
{
    AndroidCpuFamily cpuFamily = android_getCpuFamily();
    return cpuFamily == ANDROID_CPU_FAMILY_X86;
}

/*
 * Class:     com_laipengxu_cputypelibfactory_CpuTypeUtils
 * Method:    isArm64Cpu
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_laipengxu_cputypelibfactory_CpuTypeUtils_isArm64Cpu
(JNIEnv *env, jclass type)
{
    AndroidCpuFamily cpuFamily = android_getCpuFamily();
    return cpuFamily == ANDROID_CPU_FAMILY_ARM64;
}

/*
 * Class:     com_laipengxu_cputypelibfactory_CpuTypeUtils
 * Method:    isMips64Cpu
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_laipengxu_cputypelibfactory_CpuTypeUtils_isMips64Cpu
(JNIEnv *env, jclass type)
{
    AndroidCpuFamily cpuFamily = android_getCpuFamily();
    return cpuFamily == ANDROID_CPU_FAMILY_MIPS64;
}

/*
 * Class:     com_laipengxu_cputypelibfactory_CpuTypeUtils
 * Method:    isX86_64Cpu
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_laipengxu_cputypelibfactory_CpuTypeUtils_isX86_164Cpu
(JNIEnv *env, jclass type)
{
    AndroidCpuFamily cpuFamily = android_getCpuFamily();
    return cpuFamily == ANDROID_CPU_FAMILY_X86_64;
}

static JNINativeMethod gMethods[] = {
        {  "isArmCpu", "()Z",
                (void *) Java_com_laipengxu_cputypelibfactory_CpuTypeUtils_isArmCpu  },
        {  "isArm7Compatible", "()Z",
                (void *) Java_com_laipengxu_cputypelibfactory_CpuTypeUtils_isArm7Compatible  },
        {  "isMipsCpu", "()Z",
                (void *) Java_com_laipengxu_cputypelibfactory_CpuTypeUtils_isMipsCpu  },
        {  "isX86Cpu", "()Z",
                (void *) Java_com_laipengxu_cputypelibfactory_CpuTypeUtils_isX86Cpu  },
        {  "isArm64Cpu", "()Z",
                (void *) Java_com_laipengxu_cputypelibfactory_CpuTypeUtils_isArm64Cpu  },
        {  "isMips64Cpu", "()Z",
                (void *) Java_com_laipengxu_cputypelibfactory_CpuTypeUtils_isMips64Cpu  },
        {  "isX86_64Cpu", "()Z",
                (void *) Java_com_laipengxu_cputypelibfactory_CpuTypeUtils_isX86_164Cpu  },
};


int register_android_os_cts_CpuFeatures(JNIEnv* env)
{
    jclass clazz = env->FindClass("android/os/cts/CPUFrameworkHelper");
    return env->RegisterNatives(clazz, gMethods,
                                sizeof(gMethods) / sizeof(JNINativeMethod));
}

#ifdef __cplusplus
}
#endif
#endif
