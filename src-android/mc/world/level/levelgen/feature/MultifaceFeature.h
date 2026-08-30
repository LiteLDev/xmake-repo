#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class LevelChunk;
class Random;
// clang-format on

class MultifaceFeature : public ::IFeature {
public:
    // MultifaceFeature inner types define
    using ShuffledFaces = ::Bedrock::small_vector<uchar, 6>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>           mBlock;
    ::ll::TypedStorage<4, 4, int>                           mSearchRange;
    ::ll::TypedStorage<1, 1, bool>                          mCanPlaceOnFloor;
    ::ll::TypedStorage<1, 1, bool>                          mCanPlaceOnCeiling;
    ::ll::TypedStorage<1, 1, bool>                          mCanPlaceOnWall;
    ::ll::TypedStorage<4, 4, float>                         mChanceOfSpreading;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mCanBePlacedOn;
    ::ll::TypedStorage<8, 24, std::vector<uchar>>           mValidDirections;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultifaceFeature();

    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MultifaceFeature();

    MCNAPI std::optional<BlockPos>
           _placeBlockIfPossible(::BlockSource&, ::BlockPos const&, ::Random&, ::gsl::span<const uchar> const) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<BlockPos> $place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
