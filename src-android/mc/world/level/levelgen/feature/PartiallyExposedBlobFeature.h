#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
// clang-format on

class PartiallyExposedBlobFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>               mExposedFace;
    ::ll::TypedStorage<4, 4, int>                 mPlacementRadiusAroundFloor;
    ::ll::TypedStorage<4, 4, float>               mPlacementProbabilityPerValidPosition;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor> mBlockToPlace;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartiallyExposedBlobFeature();

    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
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
