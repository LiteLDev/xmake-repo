#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class EntityContext;
class EntityRegistry;
#endif // @header-generator platform
class EntitySystems;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class StrictEntityContext;
#endif // @header-generator platform
// clang-format on

namespace RunInitializersSystem {

struct RunInitializers : public ::ITickingSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::EntitySystems&> mSystems;
    // NOLINTEND

public:
    // prevent constructor by default
    RunInitializers& operator=(RunInitializers const&);
    RunInitializers(RunInitializers const&);
    RunInitializers();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::EntityRegistry& registry) /*override*/;

    virtual void singleTick(::EntityRegistry& registry, ::EntityContext& entity) /*override*/;

    virtual void singleTick(::EntityRegistry& registry, ::StrictEntityContext& entityContext) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::EntityRegistry& registry);

    MCFOLD void $singleTick(::EntityRegistry& registry, ::EntityContext& entity);

    MCFOLD void $singleTick(::EntityRegistry& registry, ::StrictEntityContext& entityContext);


    // NOLINTEND
#endif // @header-generator platform
};

} // namespace RunInitializersSystem
