#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class JigsawStructureRegistry;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class VanillaAncientCityJigsawStructureBlockRules {};
#else // @header-generator platform
class VanillaAncientCityJigsawStructureBlockRules {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void initialize(::JigsawStructureRegistry& jigsawRegistry);
    // NOLINTEND
};
#endif // @header-generator platform
