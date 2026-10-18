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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>      mActor;
    ::ll::TypedStorage<2, 2, ushort>                mSignalThrottlingTicks;
    ::ll::TypedStorage<8, 16, std::optional<ulong>> mLastSignalReceivedTick;
    ::ll::TypedStorage<8, 8, ::Tick>                mLastProjectileTick;
    ::ll::TypedStorage<4, 4, int>                   mProjectileSuspiciousIntervalTicks;
    ::ll::TypedStorage<4, 4, float>                 mTargetProjectileOwnerRange;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>         mActor;
    ::ll::TypedStorage<2, 2, ushort>                   mSignalThrottlingTicks;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>> mLastSignalReceivedTick;
    ::ll::TypedStorage<8, 8, ::Tick>                   mLastProjectileTick;
    ::ll::TypedStorage<4, 4, int>                      mProjectileSuspiciousIntervalTicks;
    ::ll::TypedStorage<4, 4, float>                    mTargetProjectileOwnerRange;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WardenVibrationConfig();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~WardenVibrationConfig();
#else // @header-generator platform
    virtual void onSignalReceive(
        ::BlockSource&    region,
        ::BlockPos const& vibrationSourcePos,
        ::GameEvent const&,
        ::Actor* vibrationSource,
        float,
        uint,
        ::Actor* projectileOwner
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSignalReceive(::BlockSource&, ::BlockPos const&, ::GameEvent const&, ::Actor*, float, uint, ::Actor*);
#else // @header-generator platform
    virtual bool isValidVibration(::GameEvent const& gameEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidVibration(::GameEvent const&);

    virtual bool shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&);
    // clang-format on
#else // @header-generator platform
    virtual bool
    shouldListen(::BlockSource& region, ::GameEvent const&, ::GameEventContext const& gameEventContext) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI WardenVibrationConfig(::Actor&, ushort);
#else // @header-generator platform
    MCAPI WardenVibrationConfig(::Actor& actor, ushort signalThrottlingTicks);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Actor&, ushort);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Actor& actor, ushort signalThrottlingTicks);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $onSignalReceive(::BlockSource&, ::BlockPos const&, ::GameEvent const&, ::Actor*, float, uint, ::Actor*);
#else // @header-generator platform
    MCAPI void $onSignalReceive(
        ::BlockSource&    region,
        ::BlockPos const& vibrationSourcePos,
        ::GameEvent const&,
        ::Actor* vibrationSource,
        float,
        uint,
        ::Actor* projectileOwner
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidVibration(::GameEvent const&);
#else // @header-generator platform
    MCAPI bool $isValidVibration(::GameEvent const& gameEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&);
#else // @header-generator platform
    MCAPI bool $shouldListen(::BlockSource& region, ::GameEvent const&, ::GameEventContext const& gameEventContext);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
