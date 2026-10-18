#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorEventCoordinator;
class ActorHeldItemUpdater;
class KnockbackArmorUpdater;
class NetheriteArmorEquippedListener;
// clang-format on

class VanillaActorEventListenerManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<KnockbackArmorUpdater>>> mKnockbackArmorUpdater;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<NetheriteArmorEquippedListener>>> mNetheriteArmorEquippedListener;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<ActorHeldItemUpdater>>> mActorHeldItemUpdater;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::KnockbackArmorUpdater>>> mKnockbackArmorUpdater;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::NetheriteArmorEquippedListener>>>
        mNetheriteArmorEquippedListener;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ActorHeldItemUpdater>>> mActorHeldItemUpdater;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VanillaActorEventListenerManager();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerWithActorEventCoordinator(::ActorEventCoordinator&);

    MCNAPI ~VanillaActorEventListenerManager();
#else // @header-generator platform
    MCNAPI void registerWithActorEventCoordinator(::ActorEventCoordinator& actorEventCoordinator);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
