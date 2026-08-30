#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"

struct ActorDefinitionIdentifierComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier> mIdentifier;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionIdentifierComponent& operator=(ActorDefinitionIdentifierComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorDefinitionIdentifierComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
