LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES := cas_exploit.cpp

LOCAL_SHARED_LIBRARIES := libutils liblog android.hardware.cas@1.0 android.hardware.cas.native@1.0 libhidlbase libhidltransport libhwbinder libbinder libcutils

LOCAL_CFLAGS += -Wno-multichar -Werror -Wall

LOCAL_MODULE:= cas_exploit

include $(BUILD_EXECUTABLE)
