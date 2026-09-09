#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/SculkSensorBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class CalibratedSculkSensorBlockActor : public ::SculkSensorBlockActor {
public:
    // prevent constructor by default
    CalibratedSculkSensorBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CalibratedSculkSensorBlockActor();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CalibratedSculkSensorBlockActor(::BlockPos const&);
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
