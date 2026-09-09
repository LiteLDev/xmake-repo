#include "ll/core/android/KernelLifecycle.h"

namespace {
ll::android::KernelLifecycle kernel;
}

static_assert(sizeof(PLAndroidModContextV1) == 64);
static_assert(sizeof(PLAndroidModRegistrationV1) == 48);

PL_REGISTER_MOD(ll::android::KernelLifecycle, kernel);
