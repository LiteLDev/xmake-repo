#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
namespace AgentComponents { class Move; }
namespace AgentComponents { struct ActionDetails; }
// clang-format on

class AgentMoveCommandSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AgentMoveCommandSystem();

    virtual void tick(::EntityRegistry&);
#else // @header-generator platform
    virtual void tick(::EntityRegistry& registry) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void cleanUp(::EntityContext&, float);
#else // @header-generator platform
    MCAPI static void cleanUp(::EntityContext& agent, float cooldownTime);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void initialize(::EntityContext&, ::AgentComponents::ActionDetails&, ::AgentComponents::Move&);
#else // @header-generator platform
    MCAPI static void
    initialize(::EntityContext& entity, ::AgentComponents::ActionDetails& details, ::AgentComponents::Move& moveComp);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void tickMove(::EntityContext&, ::AgentComponents::ActionDetails&, ::AgentComponents::Move&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void
    tickMove(::EntityContext& entity, ::AgentComponents::ActionDetails& details, ::AgentComponents::Move& moveComp);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::EntityRegistry&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $tick(::EntityRegistry& registry);
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
