#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationListenerConfig.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class GameEvent;
struct GameEventContext;
// clang-format on

class SculkSensorVibrationConfig : public ::VibrationListenerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    SculkSensorVibrationConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SculkSensorVibrationConfig();

    virtual void onSignalReceive(::BlockSource&, ::BlockPos const&, ::GameEvent const&, ::Actor*, float, uint, ::Actor*);

    virtual bool shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&);

    virtual void onSerializableDataChanged(::BlockSource&);

    virtual bool canReceiveOnlyIfAdjacentChunksAreTicking() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SculkSensorVibrationConfig(::BlockPos const&);
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
    MCNAPI void
    $onSignalReceive(::BlockSource&, ::BlockPos const&, ::GameEvent const&, ::Actor*, float, uint, ::Actor*);

    MCNAPI bool $shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&);

    MCNAPI void $onSerializableDataChanged(::BlockSource&);

    MCNAPI bool $canReceiveOnlyIfAdjacentChunksAreTicking() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
