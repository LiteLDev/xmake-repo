#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/events/gameevents/VibrationListenerConfig.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class GameEvent;
struct GameEventContext;
// clang-format on

class WardenVibrationConfig : public ::VibrationListenerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>      mActor;
    ::ll::TypedStorage<2, 2, ushort>                mSignalThrottlingTicks;
    ::ll::TypedStorage<8, 16, std::optional<ulong>> mLastSignalReceivedTick;
    ::ll::TypedStorage<8, 8, ::Tick>                mLastProjectileTick;
    ::ll::TypedStorage<4, 4, int>                   mProjectileSuspiciousIntervalTicks;
    ::ll::TypedStorage<4, 4, float>                 mTargetProjectileOwnerRange;
    // NOLINTEND

public:
    // prevent constructor by default
    WardenVibrationConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WardenVibrationConfig();

    virtual void onSignalReceive(::BlockSource&, ::BlockPos const&, ::GameEvent const&, ::Actor*, float, uint, ::Actor*);

    virtual bool isValidVibration(::GameEvent const&);

    virtual bool shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WardenVibrationConfig(::Actor&, ushort);
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
