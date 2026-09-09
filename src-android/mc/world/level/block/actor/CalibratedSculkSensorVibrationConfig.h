#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/SculkSensorVibrationConfig.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class GameEvent;
struct GameEventContext;
// clang-format on

class CalibratedSculkSensorVibrationConfig : public ::SculkSensorVibrationConfig {
public:
    // prevent constructor by default
    CalibratedSculkSensorVibrationConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CalibratedSculkSensorVibrationConfig();

    virtual bool shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
