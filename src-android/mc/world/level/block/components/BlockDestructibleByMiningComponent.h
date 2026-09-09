#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/ItemSpecificSpeed.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

struct BlockDestructibleByMiningComponent {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};
