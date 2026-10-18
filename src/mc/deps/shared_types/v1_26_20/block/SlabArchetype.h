#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct SlabArchetype {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mDoubleSlabBlock;
    ::ll::TypedStorage<1, 1, bool>         mIsDouble;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mDoubleSlabBlock;
    ::ll::TypedStorage<1, 1, bool>           mIsDouble;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
