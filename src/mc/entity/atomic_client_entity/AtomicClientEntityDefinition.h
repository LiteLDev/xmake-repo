#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/cereal/ComponentStorage.h"
#include "mc/deps/shared_types/beta/atomic_client_entity/RenderDescription.h"
#include "mc/entity/atomic_client_entity/AtomicClientEntityDefinitionDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform

class AtomicClientEntityDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 96, ::AtomicClientEntityDefinitionDescriptor>                                 mDescriptor;
    ::ll::TypedStorage<8, 48, ::cereal::ComponentStorage>                                               mComponents;
    ::ll::TypedStorage<8, 24, std::string>                                                              mIdentifier;
    ::ll::TypedStorage<8, 248, std::optional<SharedTypes::Beta::AtomicClientEntity::RenderDescription>> mRender;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 136> mUnk4263e1;
    ::ll::UntypedStorage<8, 48>  mUnk9cdcdb;
    ::ll::UntypedStorage<8, 32>  mUnk5fd314;
    ::ll::UntypedStorage<8, 200> mUnk549a20;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AtomicClientEntityDefinition& operator=(AtomicClientEntityDefinition const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AtomicClientEntityDefinition(AtomicClientEntityDefinition const&);
#endif // @header-generator platform
    AtomicClientEntityDefinition();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AtomicClientEntityDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
