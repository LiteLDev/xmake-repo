#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeTrunk.h"

// auto generated forward declare list
// clang-format off
class IBlockWorldGenAPI;
class ITreeCanopy;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class FancyTreeTrunk : public ::ITreeTrunk {
public:
    // FancyTreeTrunk inner types declare
    // clang-format off
    class FoliageCoords;
    // clang-format on

    // FancyTreeTrunk inner types define
    class FoliageCoords : public ::BlockPos {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mBranchBase;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        FoliageCoords();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                 mBaseHeight;
    ::ll::TypedStorage<4, 4, int>                 mHeightVariance;
    ::ll::TypedStorage<4, 4, int>                 mTrunkWidth;
    ::ll::TypedStorage<4, 4, float>               mHeightScale;
    ::ll::TypedStorage<4, 4, float>               mBranchSlope;
    ::ll::TypedStorage<4, 4, float>               mBranchDensity;
    ::ll::TypedStorage<4, 4, float>               mBranchAltitudeFactor;
    ::ll::TypedStorage<4, 4, float>               mFoliageAltitudeFactor;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 168, ::BlockDescriptor> mTrunkBlockDescriptor;
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::BlockDescriptor> mTrunkBlockDescriptor;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>               mWidthScale;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~FancyTreeTrunk();
#else // @header-generator platform
    virtual ~FancyTreeTrunk() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<BlockPos> placeTrunk(::IBlockWorldGenAPI&, ::BlockPos const&, ::Random&, int, ::RenderParams&, ::TreeHelper::TreeParams const&, ::ITreeCanopy const*) const;
#else // @header-generator platform
    virtual int getTreeHeight(::Random& random) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getTreeHeight(::Random&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::optional<::BlockPos> placeTrunk(
        ::IBlockWorldGenAPI&            target,
        ::BlockPos const&               pos,
        ::Random&                       random,
        int                             treeHeight,
        ::RenderParams&                 renderParams,
        ::TreeHelper::TreeParams const& treeParams,
        ::ITreeCanopy const*            canopy
    ) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<BlockPos> $placeTrunk(
        ::IBlockWorldGenAPI&,
        ::BlockPos const&,
        ::Random&,
        int,
        ::RenderParams&,
        ::TreeHelper::TreeParams const&,
        ::ITreeCanopy const*
#else // @header-generator platform
    MCAPI int $getTreeHeight(::Random& random) const;

    MCAPI ::std::optional<::BlockPos> $placeTrunk(
        ::IBlockWorldGenAPI&            target,
        ::BlockPos const&               pos,
        ::Random&                       random,
        int                             treeHeight,
        ::RenderParams&                 renderParams,
        ::TreeHelper::TreeParams const& treeParams,
        ::ITreeCanopy const*            canopy
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getTreeHeight(::Random&) const;
    // NOLINTEND
#else // @header-generator platform
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
