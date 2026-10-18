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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                          mChance;
    ::ll::TypedStorage<8, 2544, ::Random>                                                    mRandom;
    ::ll::TypedStorage<1, 1, bool>                                                           mHasGravity;
    ::ll::TypedStorage<8, 8, std::vector<std::unique_ptr<StructurePoolBlockRule>> const*>    mBlockRules;
    ::ll::TypedStorage<8, 8, std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const*> mBlockTagRules;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                                mChance;
    ::ll::TypedStorage<8, 2544, ::Random>                                                          mRandom;
    ::ll::TypedStorage<1, 1, bool>                                                                 mHasGravity;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::unique_ptr<::StructurePoolBlockRule>> const*>    mBlockRules;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const*> mBlockTagRules;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTypePlacementProcessor();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit BlockTypePlacementProcessor(::LegacyStructureSettings const&);
#else // @header-generator platform
    MCAPI explicit BlockTypePlacementProcessor(::LegacyStructureSettings const& settings);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* applyBlockRules(::BlockSource&, ::BlockPos&, ::Block const*, ::BlockPos const&);

    MCNAPI ::BlockPos& applyGravity(::BlockSource&, int, ::BlockPos&) const;
#else // @header-generator platform
    MCAPI ::Block const*
    applyBlockRules(::BlockSource& region, ::BlockPos& pos, ::Block const* blockToPlace, ::BlockPos const& refPos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::LegacyStructureSettings const&);
#else // @header-generator platform
    MCAPI void* $ctor(::LegacyStructureSettings const& settings);
#endif // @header-generator platform
    // NOLINTEND
};
