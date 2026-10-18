#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct FlowerBedArchetype {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>               mHasStems;
    ::ll::TypedStorage<4, 8, std::optional<int>> mVisualHeight;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                 mHasStems;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mVisualHeight;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
