#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class EndPodiumFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mActive;
    // NOLINTEND

public:
    // prevent constructor by default
    EndPodiumFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EndPodiumFeature();

    virtual bool place(::BlockSource&, ::BlockPos const&, ::Random&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EndPodiumFeature(bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& CORNER_ROUNDING();

    MCNAPI static ::BlockPos const& END_PODIUM_CHUNK_POSITION();

    MCNAPI static ::BlockPos const& END_PODIUM_LOCATION();

    MCNAPI static int const& PODIUM_PILLAR_HEIGHT();

    MCNAPI static int const& PODIUM_RADIUS();

    MCNAPI static int const& RIM_RADIUS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $place(::BlockSource&, ::BlockPos const&, ::Random&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
