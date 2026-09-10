#include <android/log.h>
__attribute__((constructor)) static void opened() {
    __android_log_print(ANDROID_LOG_INFO, "P6Nested", "leaf constructor");
}
__attribute__((destructor)) static void closed() {
    __android_log_print(ANDROID_LOG_INFO, "P6Nested", "leaf destructor");
}
extern "C" __attribute__((visibility("default"))) int p6_leaf_value() noexcept { return 260405; }
