#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sidebar::navigationLayout {

#if defined(LL_PLAT_A) // @header-generator platform
enum class Type : uint {
    Marketplace = 0,
    Persona     = 1,
    None        = 2,
};
#else // @header-generator platform
enum class Type : uint {};
#endif // @header-generator platform

}
