#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs_module/IECSModule.h"
#include "mc/deps/vanilla_systems/ActorMoveArgs.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class IEntitySystems;
namespace ECSModule { struct ModuleInitArgs; }
// clang-format on

namespace VanillaSystems {

struct ActorMoveModule : public ::ECSModule::IECSModule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::VanillaSystems::ActorMoveArgs> mArgs;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ActorMoveModule();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ActorMoveModule();
#else // @header-generator platform
    virtual void initRegistry(::EntityRegistry& registry) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initRegistry(::EntityRegistry&);

    virtual void registerSystems(::IEntitySystems&, ::ECSModule::ModuleInitArgs const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void registerSystems(::IEntitySystems& systems, ::ECSModule::ModuleInitArgs const& args) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initRegistry(::EntityRegistry&);
#else // @header-generator platform
    MCAPI void $initRegistry(::EntityRegistry& registry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $registerSystems(::IEntitySystems&, ::ECSModule::ModuleInitArgs const&);
#else // @header-generator platform
    MCAPI void $registerSystems(::IEntitySystems& systems, ::ECSModule::ModuleInitArgs const& args);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSystems
