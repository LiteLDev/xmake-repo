#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/interactions/IActorEventCoordinatorDependencies.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ActorEventCoordinator;
#else // @header-generator platform
#endif // @header-generator platform
class EntityContext;
class ItemStack;
// clang-format on

namespace Interactions {

class ActorEventCoordinatorDependencies : public ::Interactions::IActorEventCoordinatorDependencies {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorEventCoordinator&> mImpl;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkd92843;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActorEventCoordinatorDependencies& operator=(ActorEventCoordinatorDependencies const&);
    ActorEventCoordinatorDependencies(ActorEventCoordinatorDependencies const&);
    ActorEventCoordinatorDependencies();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ActorEventCoordinatorDependencies();

    virtual void sendActorUseItemEvent(::EntityContext&, ::ItemStack&, ::ItemUseMethod);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void
    sendActorUseItemEvent(::EntityContext& actor, ::ItemStack& item, ::ItemUseMethod useMethod) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendActorUseItemEvent(::EntityContext&, ::ItemStack&, ::ItemUseMethod);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $sendActorUseItemEvent(::EntityContext& actor, ::ItemStack& item, ::ItemUseMethod useMethod);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Interactions
