#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeTrunk.h"
#include "mc/world/level/levelgen/feature/helpers/tree_helper/AttachableDecoration.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IBlockWorldGenAPI;
class IFeature;
class ITreeCanopy;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class FallenTreeTrunk : public ::ITreeTrunk {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::IntRange>                           mLogLength;
    ::ll::TypedStorage<4, 8, ::IntRange>                           mHeightModifier;
    ::ll::TypedStorage<4, 8, ::IntRange>                           mStumpHeight;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>                  mTrunkBlockDescriptor;
    ::ll::UntypedStorage<1, 24>                                    mLogDecorationFeature;
    ::ll::TypedStorage<8, 216, ::TreeHelper::AttachableDecoration> mDecoration;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FallenTreeTrunk();

    virtual std::optional<BlockPos> placeTrunk(::IBlockWorldGenAPI&, ::BlockPos const&, ::Random&, int, ::RenderParams&, ::TreeHelper::TreeParams const&, ::ITreeCanopy const*) const;

    virtual int getTreeHeight(::Random&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<BlockPos> $placeTrunk(
        ::IBlockWorldGenAPI&,
        ::BlockPos const&,
        ::Random&,
        int,
        ::RenderParams&,
        ::TreeHelper::TreeParams const&,
        ::ITreeCanopy const*
    ) const;

    MCNAPI int $getTreeHeight(::Random&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
