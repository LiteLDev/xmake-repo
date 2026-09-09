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
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>                  mRootBlockDescriptor;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>                  mAboveRootBlockDescriptor;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>                  mMuddyRootBlockDescriptor;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>                  mMudBlockDescriptor;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>        mRootsMayGrowThrough;
    ::ll::TypedStorage<8, 216, ::TreeHelper::AttachableDecoration> mDecoration;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MangroveTreeRoots();

    virtual std::optional<BlockPos> placeRoots(::IBlockWorldGenAPI&, ::BlockPos const&, ::Random&, int, ::RenderParams&, ::TreeHelper::TreeParams const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _simulateRoots(
        ::IBlockWorldGenAPI&,
        ::Random&,
        ::BlockPos const&,
        ::BlockPos const&,
        uchar const,
        std::vector<BlockPos>*,
        int,
        ::TreeHelper::TreeParams const&
    ) const;
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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<BlockPos> $placeRoots(
        ::IBlockWorldGenAPI&,
        ::BlockPos const&,
        ::Random&,
        int,
        ::RenderParams&,
        ::TreeHelper::TreeParams const&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
