#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandTeacherFlag : ushort {
    TeacherRegularPermissions = 0,
    TeacherAlwaysAllowed      = 1024,
};
#endif // @header-generator platform
