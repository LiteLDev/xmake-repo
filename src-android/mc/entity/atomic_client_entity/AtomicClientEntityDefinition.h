#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ComponentStorage.h"
#include "mc/deps/shared_types/beta/atomic_client_entity/RenderDescription.h"
#include "mc/entity/atomic_client_entity/AtomicClientEntityDefinitionDescriptor.h"

class AtomicClientEntityDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::AtomicClientEntityDefinitionDescriptor>                                 mDescriptor;
    ::ll::TypedStorage<8, 48, ::cereal::ComponentStorage>                                               mComponents;
    ::ll::TypedStorage<8, 24, std::string>                                                              mIdentifier;
    ::ll::TypedStorage<8, 248, std::optional<SharedTypes::Beta::AtomicClientEntity::RenderDescription>> mRender;
    // NOLINTEND

public:
    // prevent constructor by default
    AtomicClientEntityDefinition& operator=(AtomicClientEntityDefinition const&);
    AtomicClientEntityDefinition();

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
};
