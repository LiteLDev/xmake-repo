#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ChanceInformation.h"
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeRoot.h"
#include "mc/world/level/levelgen/feature/helpers/tree_helper/AttachableDecoration.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class MangroveTreeRoots : public ::ITreeRoot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                  mMaxRootWidth;
    ::ll::TypedStorage<4, 4, int>                                  mMaxRootLength;
    ::ll::TypedStorage<4, 8, ::IntRange>                           mYOffset;
    ::ll::TypedStorage<4, 12, ::ChanceInformation>                 mAboveRootBlockChance;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>                  mRootBlockDescriptor;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>                  mAboveRootBlockDescriptor;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>                  mMuddyRootBlockDescriptor;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>                  mMudBlockDescriptor;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>        mRootsMayGrowThrough;
    ::ll::TypedStorage<8, 216, ::TreeHelper::AttachableDecoration> mDecoration;
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>                  mRootBlockDescriptor;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>                  mAboveRootBlockDescriptor;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>                  mMuddyRootBlockDescriptor;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>                  mMudBlockDescriptor;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>>    mRootsMayGrowThrough;
    ::ll::TypedStorage<8, 224, ::TreeHelper::AttachableDecoration> mDecoration;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~MangroveTreeRoots();
#else // @header-generator platform
    virtual ~MangroveTreeRoots() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<BlockPos> placeRoots(::IBlockWorldGenAPI&, ::BlockPos const&, ::Random&, int, ::RenderParams&, ::TreeHelper::TreeParams const&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::std::optional<::BlockPos> placeRoots(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&    pos,
        ::Random&            random,
        int                  trunkHeight,
        ::RenderParams&,
        ::TreeHelper::TreeParams const& treeParams
    ) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _simulateRoots(
        ::IBlockWorldGenAPI&,
        ::Random&,
        ::BlockPos const&,
        ::BlockPos const&,
        uchar const,
        std::vector<BlockPos>*,
        int,
        ::TreeHelper::TreeParams const&
#else // @header-generator platform
    MCAPI bool _simulateRoots(
        ::IBlockWorldGenAPI&            target,
        ::Random&                       random,
        ::BlockPos const&               rootPos,
        ::BlockPos const&               newOrigin,
        uchar const                     dir,
        ::std::vector<::BlockPos>*      rootPositions,
        int                             layer,
        ::TreeHelper::TreeParams const& treeParams
#endif // @header-generator platform
    ) const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& RANDOM_SKEW_CHANCE();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<BlockPos> $placeRoots(
        ::IBlockWorldGenAPI&,
        ::BlockPos const&,
        ::Random&,
        int,
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos> $placeRoots(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&    pos,
        ::Random&            random,
        int                  trunkHeight,
#endif // @header-generator platform
        ::RenderParams&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::TreeHelper::TreeParams const&
#else // @header-generator platform
        ::TreeHelper::TreeParams const& treeParams
#endif // @header-generator platform
    ) const;
#if defined(LL_PLAT_A) // @header-generator platform
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
