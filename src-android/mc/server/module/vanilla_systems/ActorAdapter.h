#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/vanilla_systems/IActorAdapter.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class EntityRegistry;
class StrictEntityContext;
// clang-format on

namespace VanillaSystems {

class ActorAdapter : public ::VanillaSystems::IActorAdapter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mActors;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAdapter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorAdapter();

    virtual void dropHangingActor(::StrictEntityContext const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $dropHangingActor(::StrictEntityContext const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSystems
