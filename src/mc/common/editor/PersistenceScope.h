#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

enum class PersistenceScope : int {
    ClientProject = 0,
    ClientGlobal  = 1,
    ServerProject = 2,
    ServerGlobal  = 3,
};

}
#endif // @header-generator platform
