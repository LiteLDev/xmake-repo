#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class Random;
// clang-format on

class SnapToSurfaceFeature : public ::IFeature {
public:
    // SnapToSurfaceFeature inner types define
    enum class Surface : int {
        CEILING           = 0,
        FLOOR             = 1,
        RANDOM_HORIZONTAL = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>                               mFeatureToSnap;
    ::ll::TypedStorage<4, 4, int>                             mVerticalSearchRange;
    ::ll::TypedStorage<4, 4, ::SnapToSurfaceFeature::Surface> mSurface;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>   mAllowedSurfaceBlocks;
    ::ll::TypedStorage<1, 1, bool>                            mAllowAirPlacement;
    ::ll::TypedStorage<1, 1, bool>                            mAllowUnderwaterPlacement;
    ::ll::TypedStorage<1, 1, bool>                            mEmbedInSurface;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SnapToSurfaceFeature();

    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SnapToSurfaceFeature();
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
