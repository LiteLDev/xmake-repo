#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/IGameEventListener.h"
#include "mc/world/events/gameevents/PositionSource.h"
#include "mc/world/level/block/SculkSpreader.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class GameEvent;
class ILevel;
class Level;
class SaveContext;
struct GameEventContext;
// clang-format on

class SculkCatalystBlockActor : public ::VanillaBlockActor, public ::IGameEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80>                             mListenerRegistration;
    ::ll::TypedStorage<8, 24, ::GameEvents::PositionSource> mPositionSource;
    ::ll::TypedStorage<8, 72, ::SculkSpreader>              mSculkSpreader;
    // NOLINTEND

public:
    // prevent constructor by default
    SculkCatalystBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SculkCatalystBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void onRemoved(::BlockSource&);

    virtual void tick(::BlockSource&);

    virtual void handleGameEvent(::GameEvent const&, ::GameEventContext const&, ::BlockSource&);

    virtual ::GameEvents::PositionSource const& getPositionSource() const;

    virtual uint getRange() const;

    virtual ::IGameEventListener::DeliveryMode getDeliveryMode() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SculkCatalystBlockActor(::BlockPos const&);

    MCNAPI ::SculkSpreader& getSculkSpreader();
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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;

    MCNAPI void $onRemoved(::BlockSource&);

    MCNAPI void $tick(::BlockSource&);

    MCNAPI void $handleGameEvent(::GameEvent const&, ::GameEventContext const&, ::BlockSource&);

    MCNAPI ::GameEvents::PositionSource const& $getPositionSource() const;

    MCNAPI uint $getRange() const;

    MCNAPI ::IGameEventListener::DeliveryMode $getDeliveryMode() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
