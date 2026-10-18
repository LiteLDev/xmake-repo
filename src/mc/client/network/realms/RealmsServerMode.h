#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RealmsServerMode : int {
    PlayOnly      = 0,
    EditorOnly    = 1,
    PlayAndEditor = 2,
};
#else // @header-generator platform
enum class RealmsServerMode : int {};
#endif // @header-generator platform

}
