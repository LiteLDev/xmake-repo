#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/entity/factory/DefinitionInstanceGroup.h"

class AtomicClientEntityDefinitionDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::DefinitionInstanceGroup>        mDefinitionGroup;
    ::ll::TypedStorage<8, 40, std::unordered_set<HashedString>> mComponentNames;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AtomicClientEntityDefinitionDescriptor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
