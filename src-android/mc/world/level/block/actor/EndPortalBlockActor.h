#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class EndPortalBlockActor : public ::VanillaBlockActor {
public:
    // prevent constructor by default
    EndPortalBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EndPortalBlockActor();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EndPortalBlockActor(::BlockPos const&);
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
