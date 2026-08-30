#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/entity/atomic_client_entity/atomic_client_entity/ComponentRegistry.h"

// auto generated forward declare list
// clang-format off
class AtomicClientEntityDefinition;
class AtomicClientEntityDefinitionGroup;
class EntityContext;
class EntityRegistry;
class IEntityRegistryOwner;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class AtomicClientEntityFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                        mEntityRegistryOwner;
    ::ll::TypedStorage<8, 8, ::AtomicClientEntityDefinitionGroup&>     mDefinitionGroup;
    ::ll::TypedStorage<8, 8, ::cereal::ReflectionCtx const&>           mCerealContext;
    ::ll::TypedStorage<8, 40, ::AtomicClientEntity::ComponentRegistry> mComponentRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    AtomicClientEntityFactory& operator=(AtomicClientEntityFactory const&);
    AtomicClientEntityFactory(AtomicClientEntityFactory const&);
    AtomicClientEntityFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AtomicClientEntityFactory();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
