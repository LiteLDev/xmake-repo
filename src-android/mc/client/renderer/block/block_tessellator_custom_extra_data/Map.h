#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/block_tessellator_custom_extra_data/CauldronData.h"
#include "mc/client/renderer/block/block_tessellator_custom_extra_data/FlowerPotData.h"
#include "mc/world/level/BlockPos.h"

namespace BlockTessellatorCustomExtraData {

class Map {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, BlockTessellatorCustomExtraData::CauldronData>> mExtraCauldronData;
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, BlockTessellatorCustomExtraData::FlowerPotData>> mExtraFlowerPotData;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    Map& operator=(Map const&);
    Map(Map const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Map();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace BlockTessellatorCustomExtraData
