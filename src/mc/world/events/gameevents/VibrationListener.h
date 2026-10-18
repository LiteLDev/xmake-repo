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
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
class VibrationListenerConfig;
struct GameEventContext;
// clang-format on

class VibrationListener : public ::IGameEventListener {
public:
    // VibrationListener inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum OwnerType : uint {
#else // @header-generator platform
    enum class OwnerType : int {
#endif // @header-generator platform
        SculkSensor   = 0,
        SculkShrieker = 1,
        Warden        = 2,
        Allay         = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 72, ::VibrationSelector>                     mVibrationSelector;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VibrationListenerConfig>> mConfig;
    ::ll::TypedStorage<8, 24, ::GameEvents::PositionSource>            mPositionSource;
    ::ll::TypedStorage<4, 4, ::VibrationListener::OwnerType>           mOwnerType;
    ::ll::TypedStorage<4, 4, uint>                                     mRange;
    ::ll::TypedStorage<8, 64, std::optional<VibrationInfo>>            mInFlightVibrationInfo;
    ::ll::TypedStorage<4, 4, int>                                      mInFlightVibrationTicks;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<const GameEvent>>  mLatestReceivedVibration;
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::VibrationSelector>                         mVibrationSelector;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VibrationListenerConfig>> mConfig;
    ::ll::TypedStorage<8, 24, ::GameEvents::PositionSource>                mPositionSource;
    ::ll::TypedStorage<4, 4, ::VibrationListener::OwnerType>               mOwnerType;
    ::ll::TypedStorage<4, 4, uint>                                         mRange;
    ::ll::TypedStorage<8, 64, ::std::optional<::VibrationInfo>>            mInFlightVibrationInfo;
    ::ll::TypedStorage<4, 4, int>                                          mInFlightVibrationTicks;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::GameEvent const>>  mLatestReceivedVibration;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    VibrationListener();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~VibrationListener();
#else // @header-generator platform
    virtual void handleGameEvent(
        ::GameEvent const&        gameEvent,
        ::GameEventContext const& gameEventContext,
        ::BlockSource&            region
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleGameEvent(::GameEvent const&, ::GameEventContext const&, ::BlockSource&);
#else // @header-generator platform
    virtual uint getRange() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::GameEvents::PositionSource const& getPositionSource() const;

    virtual uint getRange() const;
#else // @header-generator platform
    virtual ::GameEvents::PositionSource const& getPositionSource() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI VibrationListener(
        std::unique_ptr<VibrationListenerConfig>&&,
        ::GameEvents::PositionSource,
        uint,
        ::VibrationListener::OwnerType
    );
#else // @header-generator platform
    MCAPI bool _areAdjacentChunksTicking(::BlockSource& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _requestVibrationParticle(::BlockSource&, ::BlockPos const&, float);
#else // @header-generator platform
    MCAPI void _requestVibrationParticle(::BlockSource& region, ::BlockPos const& originPos, float timeToLive);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _tickInternal(::BlockSource&);
#else // @header-generator platform
    MCAPI bool _tryAdvanceInFlightVibration(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _tryAdvanceInFlightVibration(::BlockSource&);
#else // @header-generator platform
    MCAPI void load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameEvent const& getLatestReceivedVibration() const;
#else // @header-generator platform
    MCAPI void save(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void tick(::BlockSource& region);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleGameEvent(::GameEvent const&, ::GameEventContext const&, ::BlockSource&);
#else // @header-generator platform
    MCAPI void
    $handleGameEvent(::GameEvent const& gameEvent, ::GameEventContext const& gameEventContext, ::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameEvents::PositionSource const& $getPositionSource() const;
#else // @header-generator platform
    MCAPI uint $getRange() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $getRange() const;
#else // @header-generator platform
    MCFOLD ::GameEvents::PositionSource const& $getPositionSource() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
