#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/IGameEventListener.h"
#include "mc/world/events/gameevents/PositionSource.h"
#include "mc/world/level/block/SculkSpreader.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class GameEvent;
class ILevel;
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
#else // @header-generator platform
#endif // @header-generator platform
class SaveContext;
struct GameEventContext;
// clang-format on

class SculkCatalystBlockActor : public ::VanillaBlockActor, public ::IGameEventListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 80>                             mListenerRegistration;
    ::ll::TypedStorage<8, 24, ::GameEvents::PositionSource> mPositionSource;
    ::ll::TypedStorage<8, 72, ::SculkSpreader>              mSculkSpreader;
#else // @header-generator platform
    ::ll::TypedStorage<8, 80, ::std::optional<::gsl::final_action<::std::function<void()>>>> mListenerRegistration;
    ::ll::TypedStorage<8, 24, ::GameEvents::PositionSource>                                  mPositionSource;
    ::ll::TypedStorage<8, 64, ::SculkSpreader>                                               mSculkSpreader;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SculkCatalystBlockActor();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SculkCatalystBlockActor();
#else // @header-generator platform
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    virtual void tick(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onRemoved(::BlockSource&);
#else // @header-generator platform
    virtual void onRemoved(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::BlockSource&);
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
    virtual ::GameEvents::PositionSource const& getPositionSource() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::GameEvents::PositionSource const& getPositionSource() const;
#else // @header-generator platform
    virtual uint getRange() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::IGameEventListener::DeliveryMode getDeliveryMode() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onRemoved(::BlockSource&);
#else // @header-generator platform
    MCAPI void $tick(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::BlockSource&);
#else // @header-generator platform
    MCAPI void $onRemoved(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleGameEvent(::GameEvent const&, ::GameEventContext const&, ::BlockSource&);
#else // @header-generator platform
    MCAPI void
    $handleGameEvent(::GameEvent const& gameEvent, ::GameEventContext const& gameEventContext, ::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameEvents::PositionSource const& $getPositionSource() const;
#else // @header-generator platform
    MCFOLD ::GameEvents::PositionSource const& $getPositionSource() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $getRange() const;
#else // @header-generator platform
    MCFOLD uint $getRange() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IGameEventListener::DeliveryMode $getDeliveryMode() const;
#else // @header-generator platform
    MCFOLD ::IGameEventListener::DeliveryMode $getDeliveryMode() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCAPI static void** $vftableForBlockActor();

#endif // @header-generator platform
    MCNAPI static void** $vftable();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();
#endif // @header-generator platform
    // NOLINTEND
};
