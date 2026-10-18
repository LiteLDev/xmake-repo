#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/entity/factory/DefinitionInstanceGroup.h"
#else // @header-generator platform
#endif // @header-generator platform

class AtomicClientEntityDefinitionDescriptor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 56, ::DefinitionInstanceGroup>        mDefinitionGroup;
    ::ll::TypedStorage<8, 40, std::unordered_set<HashedString>> mComponentNames;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72> mUnk994f56;
    ::ll::UntypedStorage<8, 64> mUnk94902a;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AtomicClientEntityDefinitionDescriptor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    AtomicClientEntityDefinitionDescriptor& operator=(AtomicClientEntityDefinitionDescriptor const&);
    AtomicClientEntityDefinitionDescriptor(AtomicClientEntityDefinitionDescriptor const&);
    AtomicClientEntityDefinitionDescriptor();
#endif // @header-generator platform
};
