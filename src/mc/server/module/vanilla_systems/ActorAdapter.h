#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/ViewT.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/vanilla_systems/IActorAdapter.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
class ActorOwnerComponent;
class EntityRegistry;
#else // @header-generator platform
#endif // @header-generator platform
class StrictEntityContext;
// clang-format on

namespace VanillaSystems {

class ActorAdapter : public ::VanillaSystems::IActorAdapter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mActors;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkbb9f6f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ActorAdapter& operator=(ActorAdapter const&);
    ActorAdapter(ActorAdapter const&);
#endif // @header-generator platform
    ActorAdapter();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ActorAdapter();

    virtual void dropHangingActor(::StrictEntityContext const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void dropHangingActor(::StrictEntityContext const& entity) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dropHangingActor(::StrictEntityContext const&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $dropHangingActor(::StrictEntityContext const& entity);
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

} // namespace VanillaSystems
