#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ISystem.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
class StrictEntityContext;
// clang-format on

class ITickingSystem : public ::ISystem {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ITickingSystem();
#else // @header-generator platform
    virtual ~ITickingSystem() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::EntityRegistry&) = 0;
#else // @header-generator platform
    virtual void tick(::EntityRegistry& registry) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void singleTick(::EntityRegistry&, ::StrictEntityContext&);
#else // @header-generator platform
    virtual void singleTick(::EntityRegistry& registry, ::EntityContext& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void singleTick(::EntityRegistry&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void singleTick(::EntityRegistry& registry, ::StrictEntityContext& entityContext);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $singleTick(::EntityRegistry&, ::StrictEntityContext&);
#else // @header-generator platform
    MCFOLD void $singleTick(::EntityRegistry& registry, ::EntityContext& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $singleTick(::EntityRegistry&, ::EntityContext&);
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void $singleTick(::EntityRegistry& registry, ::StrictEntityContext& entityContext);
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
