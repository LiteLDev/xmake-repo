#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/chunk/BlockDifference.h"
#include "mc/world/level/chunk/HeightDifference.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct BlockDifference;
struct HeightDifference;
// clang-format on
#endif // @header-generator platform

struct DeserializationChanges {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, BlockDifference>> blockChangesMap;
    ::ll::TypedStorage<8, 24, std::vector<HeightDifference>>                 heightChanges;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::BlockDifference>> blockChangesMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::HeightDifference>>                   heightChanges;
#endif // @header-generator platform
    // NOLINTEND
};
