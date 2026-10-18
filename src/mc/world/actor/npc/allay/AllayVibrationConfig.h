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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mActor;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mActor;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AllayVibrationConfig();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~AllayVibrationConfig();
#else // @header-generator platform
    virtual void onSignalReceive(
        ::BlockSource&     region,
        ::BlockPos const&  vibrationSourcePos,
        ::GameEvent const& gameEvent,
        ::Actor*,
        float,
        uint,
        ::Actor*
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
    virtual bool shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AllayVibrationConfig(::Actor&, ushort);
#else // @header-generator platform
    MCAPI AllayVibrationConfig(::Actor& actor, ushort);
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
    MCAPI void* $ctor(::Actor& actor, ushort);
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
        ::BlockSource&     region,
        ::BlockPos const&  vibrationSourcePos,
        ::GameEvent const& gameEvent,
        ::Actor*,
        float,
        uint,
        ::Actor*
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
    MCFOLD bool $shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&);


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
