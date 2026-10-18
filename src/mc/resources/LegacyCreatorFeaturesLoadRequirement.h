#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PackLoadInfo;
// clang-format on

class LegacyCreatorFeaturesLoadRequirement {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool satisfied(::PackLoadInfo const&);
#else // @header-generator platform
    MCNAPI static bool satisfied(::PackLoadInfo const& packLoadInfo);
#endif // @header-generator platform
    // NOLINTEND
};
