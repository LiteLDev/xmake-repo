#include "KernelLifecycle.h"

static_assert(sizeof(PLAndroidModContextV1) == 64);
static_assert(sizeof(PLAndroidModRegistrationV1) == 48);

PL_REGISTER_MOD(ll::android::KernelLifecycle, ll::android::kernel());
