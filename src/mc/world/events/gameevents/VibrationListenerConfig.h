#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class GameEvent;
struct GameEventContext;
// clang-format on

class VibrationListenerConfig {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~VibrationListenerConfig();
#else // @header-generator platform
    virtual ~VibrationListenerConfig() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSignalReceive(::BlockSource&, ::BlockPos const&, ::GameEvent const&, ::Actor*, float, uint, ::Actor*) = 0;
#else // @header-generator platform
    virtual void
    onSignalReceive(::BlockSource&, ::BlockPos const&, ::GameEvent const&, ::Actor*, float, uint, ::Actor*) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidVibration(::GameEvent const&);
#else // @header-generator platform
    virtual bool isValidVibration(::GameEvent const& gameEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&) = 0;
#else // @header-generator platform
    virtual bool
    shouldListen(::BlockSource& region, ::GameEvent const& gameEvent, ::GameEventContext const& gameEventContext) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSerializableDataChanged(::BlockSource&);
#else // @header-generator platform
    virtual void onSerializableDataChanged(::BlockSource& region);
#endif // @header-generator platform

    virtual bool canReceiveOnlyIfAdjacentChunksAreTicking() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidVibration(::GameEvent const&);
#else // @header-generator platform
    MCAPI bool $isValidVibration(::GameEvent const& gameEvent);
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
};
