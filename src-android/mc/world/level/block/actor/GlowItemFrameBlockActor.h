#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/ItemFrameBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class GlowItemFrameBlockActor : public ::ItemFrameBlockActor {
public:
    // prevent constructor by default
    GlowItemFrameBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GlowItemFrameBlockActor();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GlowItemFrameBlockActor(::BlockPos const&);
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
