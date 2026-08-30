#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class HugeMushroomFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mForcedType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HugeMushroomFeature();

    virtual bool place(::BlockSource&, ::BlockPos const&, ::Random&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HugeMushroomFeature();

    MCNAPI explicit HugeMushroomFeature(int);

    MCNAPI bool _canSurvive(::Block const&) const;

    MCNAPI bool placeFixed(::BlockSource&, ::BlockPos const&, int, int) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(int);
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
