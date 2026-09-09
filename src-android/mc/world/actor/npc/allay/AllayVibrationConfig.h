#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/events/gameevents/VibrationListenerConfig.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class GameEvent;
struct GameEventContext;
// clang-format on

class AllayVibrationConfig : public ::VibrationListenerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mActor;
    // NOLINTEND

public:
    // prevent constructor by default
    AllayVibrationConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~AllayVibrationConfig();

    virtual void onSignalReceive(::BlockSource&, ::BlockPos const&, ::GameEvent const&, ::Actor*, float, uint, ::Actor*);

    virtual bool isValidVibration(::GameEvent const&);

    virtual bool shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AllayVibrationConfig(::Actor&, ushort);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor&, ushort);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
