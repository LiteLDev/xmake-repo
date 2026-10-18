#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"

struct ActorDefinitionIdentifierComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mIdentifier;
#endif // @header-generator platform
    // NOLINTEND
};
