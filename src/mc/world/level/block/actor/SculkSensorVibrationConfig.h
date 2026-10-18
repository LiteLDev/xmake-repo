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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    SculkSensorVibrationConfig();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~SculkSensorVibrationConfig();
#else // @header-generator platform
    virtual void onSignalReceive(
        ::BlockSource& region,
        ::BlockPos const&,
        ::GameEvent const& gameEvent,
        ::Actor*           source,
        float              distance,
        uint               listenerRange,
        ::Actor*
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSignalReceive(::BlockSource&, ::BlockPos const&, ::GameEvent const&, ::Actor*, float, uint, ::Actor*);
#else // @header-generator platform
    virtual bool shouldListen(
        ::BlockSource&            region,
        ::GameEvent const&        gameEvent,
        ::GameEventContext const& gameEventContext
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&);
#else // @header-generator platform
    virtual void onSerializableDataChanged(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual bool canReceiveOnlyIfAdjacentChunksAreTicking() const /*override*/;
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
        ::BlockSource& region,
        ::BlockPos const&,
        ::GameEvent const& gameEvent,
        ::Actor*           source,
        float              distance,
        uint               listenerRange,
        ::Actor*
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&);
#else // @header-generator platform
    MCAPI bool
    $shouldListen(::BlockSource& region, ::GameEvent const& gameEvent, ::GameEventContext const& gameEventContext);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onSerializableDataChanged(::BlockSource&);
#else // @header-generator platform
    MCFOLD void $onSerializableDataChanged(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canReceiveOnlyIfAdjacentChunksAreTicking() const;
#else // @header-generator platform
    MCFOLD bool $canReceiveOnlyIfAdjacentChunksAreTicking() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
