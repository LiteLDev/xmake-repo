#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

class SporeBlossomBlockActor : public ::VanillaBlockActor {
public:
    // prevent constructor by default
    SporeBlossomBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SporeBlossomBlockActor();

    virtual void tick(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SporeBlossomBlockActor(::BlockPos const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
