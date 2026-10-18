#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/entity/atomic_client_entity/atomic_client_entity/ComponentRegistry.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AtomicClientEntityDefinition;
#else // @header-generator platform
#endif // @header-generator platform
class AtomicClientEntityDefinitionGroup;
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
class EntityRegistry;
#else // @header-generator platform
#endif // @header-generator platform
class IEntityRegistryOwner;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class AtomicClientEntityFactory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                        mEntityRegistryOwner;
    ::ll::TypedStorage<8, 8, ::AtomicClientEntityDefinitionGroup&>     mDefinitionGroup;
    ::ll::TypedStorage<8, 8, ::cereal::ReflectionCtx const&>           mCerealContext;
    ::ll::TypedStorage<8, 40, ::AtomicClientEntity::ComponentRegistry> mComponentRegistry;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk3d204a;
    ::ll::UntypedStorage<8, 8>  mUnkf424a0;
    ::ll::UntypedStorage<8, 8>  mUnk86e221;
    ::ll::UntypedStorage<8, 64> mUnkeb905f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AtomicClientEntityFactory& operator=(AtomicClientEntityFactory const&);
    AtomicClientEntityFactory(AtomicClientEntityFactory const&);
    AtomicClientEntityFactory();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~AtomicClientEntityFactory();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI AtomicClientEntityFactory(
        ::Bedrock::NotNullNonOwnerPtr<::IEntityRegistryOwner> entityRegistryOwner,
        ::AtomicClientEntityDefinitionGroup&                  definitionGroup,
        ::cereal::ReflectionCtx const&                        ctx
    );

    MCNAPI ~AtomicClientEntityFactory();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IEntityRegistryOwner> entityRegistryOwner,
        ::AtomicClientEntityDefinitionGroup&                  definitionGroup,
        ::cereal::ReflectionCtx const&                        ctx
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
