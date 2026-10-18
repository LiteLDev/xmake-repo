#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class IBlockWorldGenAPI;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class SculkPatchFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mCanPlaceSculkPatchOn;
    ::ll::TypedStorage<8, 8, ::Block const*>                mBlock;
    ::ll::TypedStorage<4, 4, float>                         mBlockPlacementChance;
    ::ll::TypedStorage<4, 4, int>                           mCursorCount;
    ::ll::TypedStorage<4, 4, int>                           mChargeAmount;
    ::ll::TypedStorage<4, 4, int>                           mSpreadAttempts;
    ::ll::TypedStorage<4, 4, int>                           mGrowthRounds;
    ::ll::TypedStorage<4, 4, int>                           mSpreadRounds;
    ::ll::TypedStorage<4, 8, ::IntRange>                    mExtraGrowthChance;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mCanPlaceSculkPatchOn;
    ::ll::TypedStorage<8, 8, ::Block const*>                    mBlock;
    ::ll::TypedStorage<4, 4, float>                             mBlockPlacementChance;
    ::ll::TypedStorage<4, 4, int>                               mCursorCount;
    ::ll::TypedStorage<4, 4, int>                               mChargeAmount;
    ::ll::TypedStorage<4, 4, int>                               mSpreadAttempts;
    ::ll::TypedStorage<4, 4, int>                               mGrowthRounds;
    ::ll::TypedStorage<4, 4, int>                               mSpreadRounds;
    ::ll::TypedStorage<4, 8, ::IntRange>                        mExtraGrowthChance;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SculkPatchFeature();
#else // @header-generator platform
    virtual ~SculkPatchFeature() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<BlockPos> $place(::IFeature::PlacementContext const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
