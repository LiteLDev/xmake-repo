#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class IClientInstance;
// clang-format on

class VanillaRenderers {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void registerRenderers(::IClientInstance&);
    // NOLINTEND
};
#else // @header-generator platform
class VanillaRenderers {};
#endif // @header-generator platform
