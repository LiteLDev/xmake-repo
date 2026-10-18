#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct PackLoadInfo;
// clang-format on

class BaseGamePackLoadRequirement {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool satisfied(::PackLoadInfo const&);
    // NOLINTEND
};
#else // @header-generator platform
class BaseGamePackLoadRequirement {};
#endif // @header-generator platform
