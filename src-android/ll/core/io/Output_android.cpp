#include "ll/core/io/Output.h"
#include <android/log.h>

namespace ll::android {
void fallbackLog(int32_t priority, char const* message) noexcept {
    __android_log_write(priority, "LeviLamina", message);
}
} // namespace ll::android
