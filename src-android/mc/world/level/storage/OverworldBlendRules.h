#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockType;
// clang-format on

struct OverworldBlendRules {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};
