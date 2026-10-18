#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class IBlockWorldGenAPI;
class Random;
class RenderParams;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class VegetationPatchFeature : public ::IFeature {
public:
    // VegetationPatchFeature inner types define
    enum class Surface : int {
#if defined(LL_PLAT_A) // @header-generator platform
        CEILING = 0,
        FLOOR   = 1,
#else // @header-generator platform
        Ceiling = 0,
        Floor   = 1,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>     mReplaceableBlocks;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>               mGroundBlock;
    ::ll::UntypedStorage<1, 24>                                 mVegetationFeature;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mReplaceableBlocks;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>               mGroundBlock;
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>>            mVegetationFeature;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::VegetationPatchFeature::Surface> mSurface;
    ::ll::TypedStorage<4, 8, ::IntRange>                        mDepth;
    ::ll::TypedStorage<4, 4, float>                             mExtraDeepBlockChance;
    ::ll::TypedStorage<4, 4, int>                               mVerticalRange;
    ::ll::TypedStorage<4, 4, float>                             mVegetationChance;
    ::ll::TypedStorage<4, 8, ::IntRange>                        mHorizontalRadius;
    ::ll::TypedStorage<4, 4, float>                             mExtraEdgeColumnChance;
    ::ll::TypedStorage<1, 1, bool>                              mWaterlogged;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~VegetationPatchFeature();
#else // @header-generator platform
    virtual ~VegetationPatchFeature() /*override*/ = default;
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
