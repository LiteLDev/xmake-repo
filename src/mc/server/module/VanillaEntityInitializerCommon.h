#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/module/EntityHost.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class IEntityInitializer;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct VanillaEntityInitializerCommon {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<IEntityInitializer>
        createFromFunction(::gsl::not_null<void (*)(std::unique_ptr<Actor>, EntityContext&, const EntityContext&)>);

    MCNAPI static void
    initActorComponents(::EntityHost, std::unique_ptr<Actor>, ::EntityContext&, ::EntityContext const&);

    MCNAPI static void initLevelEntityDependentComponents(::EntityContext&, ::EntityContext const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static void initActorComponents(
        ::EntityHost               host,
        ::std::unique_ptr<::Actor> actor,
        ::EntityContext&           entity,
        ::EntityContext const&
    );

    MCNAPI static void initLevelEntityDependentComponents(::EntityContext& entity, ::EntityContext const& level);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
