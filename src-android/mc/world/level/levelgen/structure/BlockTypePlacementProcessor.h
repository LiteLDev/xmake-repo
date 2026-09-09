#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Random.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class LegacyStructureSettings;
class StructurePoolBlockRule;
class StructurePoolBlockTagRule;
// clang-format on

class BlockTypePlacementProcessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                          mChance;
    ::ll::TypedStorage<8, 2544, ::Random>                                                    mRandom;
    ::ll::TypedStorage<1, 1, bool>                                                           mHasGravity;
    ::ll::TypedStorage<8, 8, std::vector<std::unique_ptr<StructurePoolBlockRule>> const*>    mBlockRules;
    ::ll::TypedStorage<8, 8, std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const*> mBlockTagRules;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTypePlacementProcessor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockTypePlacementProcessor(::LegacyStructureSettings const&);

    MCNAPI ::Block const* applyBlockRules(::BlockSource&, ::BlockPos&, ::Block const*, ::BlockPos const&);

    MCNAPI ::BlockPos& applyGravity(::BlockSource&, int, ::BlockPos&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LegacyStructureSettings const&);
    // NOLINTEND
};
