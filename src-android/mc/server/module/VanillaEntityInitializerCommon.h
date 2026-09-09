#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/module/EntityHost.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class IEntityInitializer;
// clang-format on

struct VanillaEntityInitializerCommon {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<IEntityInitializer>
        createFromFunction(::gsl::not_null<void (*)(std::unique_ptr<Actor>, EntityContext&, const EntityContext&)>);

    MCNAPI static void
    initActorComponents(::EntityHost, std::unique_ptr<Actor>, ::EntityContext&, ::EntityContext const&);

    MCNAPI static void initLevelEntityDependentComponents(::EntityContext&, ::EntityContext const&);
    // NOLINTEND
};
