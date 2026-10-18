#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/block_tessellator_custom_extra_data/CauldronData.h"
#include "mc/client/renderer/block/block_tessellator_custom_extra_data/FlowerPotData.h"
#include "mc/world/level/BlockPos.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
namespace BlockTessellatorCustomExtraData { class CauldronData; }
namespace BlockTessellatorCustomExtraData { class FlowerPotData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace BlockTessellatorCustomExtraData {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class Map {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::BlockTessellatorCustomExtraData::CauldronData>>
        mExtraCauldronData;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::BlockTessellatorCustomExtraData::FlowerPotData>>
        mExtraFlowerPotData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Map();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class Map {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace BlockTessellatorCustomExtraData
