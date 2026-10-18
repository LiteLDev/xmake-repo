#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BlockType;
// clang-format on
#else // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"
#endif // @header-generator platform

struct OverworldBlendRules {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_set<const BlockType*> const> mBendableBlocks;
    ::ll::TypedStorage<8, 40, std::unordered_set<const BlockType*> const> mNoShiftUpBlocks;
    ::ll::TypedStorage<8, 40, std::unordered_set<const BlockType*> const> mNoShiftDownBlocks;
    ::ll::TypedStorage<8, 40, std::unordered_set<const BlockType*> const> mFloatingOnWaterBlocks;
    ::ll::TypedStorage<8, 40, std::unordered_set<const BlockType*> const> mRemoveFloatingBlocksList;
    ::ll::TypedStorage<8, 40, std::unordered_set<const BlockType*> const> mLavaBlocks;
    ::ll::TypedStorage<8, 40, std::unordered_set<const BlockType*> const> mNotUnderwaterBlocks;
    ::ll::TypedStorage<8, 40, std::unordered_set<const BlockType*> const> mWaterBlocks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~OverworldBlendRules();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockType const*> const> mBendableBlocks;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockType const*> const> mNoShiftUpBlocks;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockType const*> const> mNoShiftDownBlocks;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockType const*> const> mFloatingOnWaterBlocks;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockType const*> const> mRemoveFloatingBlocksList;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockType const*> const> mLavaBlocks;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockType const*> const> mNotUnderwaterBlocks;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockType const*> const> mWaterBlocks;
#endif // @header-generator platform
    // NOLINTEND
};
