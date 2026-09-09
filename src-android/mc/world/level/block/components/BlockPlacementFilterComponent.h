#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockPlacementCondition.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

struct BlockPlacementFilterComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BlockPlacementCondition>> conditions;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPlacementFilterComponent& operator=(BlockPlacementFilterComponent const&);
    BlockPlacementFilterComponent(BlockPlacementFilterComponent const&);
    BlockPlacementFilterComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool mayPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;
    // NOLINTEND
};
