#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class BeardAndShaverFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>                   mFeatureRef;
    ::ll::TypedStorage<4, 24, ::BoundingBox>      mBoundingBox;
    ::ll::TypedStorage<4, 4, float>               mYDelta;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor> mSurfaceBlock;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor> mSupportBlock;
    ::ll::TypedStorage<4, 4, float>               mBeardRaggednessMin;
    ::ll::TypedStorage<4, 4, float>               mBeardRaggednessMax;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BeardAndShaverFeature();

    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BeardAndShaverFeature();
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
