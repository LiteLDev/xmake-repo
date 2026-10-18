#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class AgentCommandComponent;
class EntityContext;
class EntityRegistry;
namespace AgentComponents { class CommandCooldown; }
// clang-format on

class AgentCommandSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AgentCommandSystem();

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
    MCAPI static void cleanUp(::EntityContext& agent, float waitingPeriod);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void initialize(::EntityContext&);
#else // @header-generator platform
    MCAPI static void initialize(::EntityContext& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void tickLegacy(::EntityContext&, ::AgentCommandComponent&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI static void tickAgentCooldown(::EntityContext& entity, ::AgentComponents::CommandCooldown& waitComp);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void tickLegacy(::EntityContext& entity, ::AgentCommandComponent& agentComp);
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
