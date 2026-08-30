#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/IGameEventListener.h"
#include "mc/world/events/gameevents/PositionSource.h"
#include "mc/world/events/gameevents/VibrationInfo.h"
#include "mc/world/events/gameevents/VibrationSelector.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class GameEvent;
class Vec3;
class VibrationListenerConfig;
struct GameEventContext;
// clang-format on

class VibrationListener : public ::IGameEventListener {
public:
    // VibrationListener inner types define
    enum OwnerType : uint {
        SculkSensor   = 0,
        SculkShrieker = 1,
        Warden        = 2,
        Allay         = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::VibrationSelector>                     mVibrationSelector;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VibrationListenerConfig>> mConfig;
    ::ll::TypedStorage<8, 24, ::GameEvents::PositionSource>            mPositionSource;
    ::ll::TypedStorage<4, 4, ::VibrationListener::OwnerType>           mOwnerType;
    ::ll::TypedStorage<4, 4, uint>                                     mRange;
    ::ll::TypedStorage<8, 64, std::optional<VibrationInfo>>            mInFlightVibrationInfo;
    ::ll::TypedStorage<4, 4, int>                                      mInFlightVibrationTicks;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<const GameEvent>>  mLatestReceivedVibration;
    // NOLINTEND

public:
    // prevent constructor by default
    VibrationListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VibrationListener();

    virtual void handleGameEvent(::GameEvent const&, ::GameEventContext const&, ::BlockSource&);

    virtual ::GameEvents::PositionSource const& getPositionSource() const;

    virtual uint getRange() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VibrationListener(
        std::unique_ptr<VibrationListenerConfig>&&,
        ::GameEvents::PositionSource,
        uint,
        ::VibrationListener::OwnerType
    );

    MCNAPI void _requestVibrationParticle(::BlockSource&, ::BlockPos const&, float);

    MCNAPI void _tickInternal(::BlockSource&);

    MCNAPI bool _tryAdvanceInFlightVibration(::BlockSource&);

    MCNAPI ::GameEvent const& getLatestReceivedVibration() const;

    MCNAPI void load(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void save(::CompoundTag&) const;

    MCNAPI void tick(::BlockSource&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::unique_ptr<VibrationListenerConfig>&&,
        ::GameEvents::PositionSource,
        uint,
        ::VibrationListener::OwnerType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $handleGameEvent(::GameEvent const&, ::GameEventContext const&, ::BlockSource&);

    MCNAPI ::GameEvents::PositionSource const& $getPositionSource() const;

    MCNAPI uint $getRange() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
