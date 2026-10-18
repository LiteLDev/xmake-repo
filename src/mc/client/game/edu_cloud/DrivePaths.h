#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EduCloud {

#if defined(LL_PLAT_A) // @header-generator platform
enum class DrivePaths : int {
    MinecraftEducation = 0,
};
#else // @header-generator platform
enum class DrivePaths : int {};
#endif // @header-generator platform

}
