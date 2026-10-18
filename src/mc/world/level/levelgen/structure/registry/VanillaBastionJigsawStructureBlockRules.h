#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class JigsawStructureRegistry;
// clang-format on

class VanillaBastionJigsawStructureBlockRules {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void initialize(::JigsawStructureRegistry&);
#else // @header-generator platform
    MCAPI static void initialize(::JigsawStructureRegistry& jigsawRegistry);
#endif // @header-generator platform
    // NOLINTEND
};
