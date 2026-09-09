#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/IntRange.h"

namespace SharedTypes::v1_20_50 {

struct DurabilityItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange> mDamageChance;
    ::ll::TypedStorage<4, 4, int>                     mMaxDurability;
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
