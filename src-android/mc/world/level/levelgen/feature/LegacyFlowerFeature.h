#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"
#include "mc/world/level/levelgen/feature/helpers/FlowerPlacementType.h"
#include "mc/world/level/levelgen/synth/PerlinSimplexNoise.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class LegacyFlowerFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::FlowerPlacementType>       mPlacementType;
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise const> mBiomeInfoNoise;
    ::ll::TypedStorage<4, 4, int const>                   mIterations;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyFlowerFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LegacyFlowerFeature();

    virtual bool place(::BlockSource&, ::BlockPos const&, ::Random&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LegacyFlowerFeature(::FlowerPlacementType, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FlowerPlacementType, int);
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
