LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := CpuTypeLib
LOCAL_SRC_FILES := \
	G:\CPUTypeLibFactory\cputypelibfactory\src\main\jni\Android.mk \
	G:\CPUTypeLibFactory\cputypelibfactory\src\main\jni\cpu-features.c \
	G:\CPUTypeLibFactory\cputypelibfactory\src\main\jni\main.cpp \

LOCAL_C_INCLUDES += G:\CPUTypeLibFactory\cputypelibfactory\src\main\jni
LOCAL_C_INCLUDES += G:\CPUTypeLibFactory\cputypelibfactory\src\debug\jni

include $(BUILD_SHARED_LIBRARY)
