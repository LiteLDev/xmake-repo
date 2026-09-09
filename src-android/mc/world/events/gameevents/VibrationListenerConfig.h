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
    // clang-format off
    virtual ~VibrationListenerConfig();

    virtual void onSignalReceive(::BlockSource&, ::BlockPos const&, ::GameEvent const&, ::Actor*, float, uint, ::Actor*) = 0;

    virtual bool isValidVibration(::GameEvent const&);

    virtual bool shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&) = 0;

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
    MCNAPI bool $isValidVibration(::GameEvent const&);

    MCNAPI void $onSerializableDataChanged(::BlockSource&);

    MCNAPI bool $canReceiveOnlyIfAdjacentChunksAreTicking() const;
    // NOLINTEND
};
