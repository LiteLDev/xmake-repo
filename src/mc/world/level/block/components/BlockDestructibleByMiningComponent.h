#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/ItemSpecificSpeed.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct BlockDestructibleByMiningComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                           mSecondsToDestroy;
    ::ll::TypedStorage<8, 24, std::vector<ItemSpecificSpeed>> mItemSpecificSpeeds;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDestructibleByMiningComponent& operator=(BlockDestructibleByMiningComponent const&);
    BlockDestructibleByMiningComponent(BlockDestructibleByMiningComponent const&);
    BlockDestructibleByMiningComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float getDestroySpeed(::ItemStackBase const&) const;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                               mSecondsToDestroy;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemSpecificSpeed>> mItemSpecificSpeeds;
#endif // @header-generator platform
    // NOLINTEND
};
