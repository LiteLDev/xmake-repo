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

class SculkShriekerVibrationConfig : public ::VibrationListenerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    SculkShriekerVibrationConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SculkShriekerVibrationConfig();

    virtual void onSignalReceive(::BlockSource&, ::BlockPos const&, ::GameEvent const&, ::Actor*, float, uint, ::Actor*);

    virtual bool isValidVibration(::GameEvent const&);

    virtual bool shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&);

    virtual void onSerializableDataChanged(::BlockSource&);

    virtual bool canReceiveOnlyIfAdjacentChunksAreTicking() const;
    // clang-format on
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

    MCNAPI bool $isValidVibration(::GameEvent const&);

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
