#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/interactions/IActorEventCoordinatorDependencies.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class ActorEventCoordinator;
class EntityContext;
class ItemStack;
// clang-format on

namespace Interactions {

class ActorEventCoordinatorDependencies : public ::Interactions::IActorEventCoordinatorDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorEventCoordinator&> mImpl;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorEventCoordinatorDependencies& operator=(ActorEventCoordinatorDependencies const&);
    ActorEventCoordinatorDependencies(ActorEventCoordinatorDependencies const&);
    ActorEventCoordinatorDependencies();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorEventCoordinatorDependencies();

    virtual void sendActorUseItemEvent(::EntityContext&, ::ItemStack&, ::ItemUseMethod);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $sendActorUseItemEvent(::EntityContext&, ::ItemStack&, ::ItemUseMethod);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Interactions
