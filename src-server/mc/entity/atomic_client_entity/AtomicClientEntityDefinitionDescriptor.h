#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AtomicClientEntityDefinitionDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk994f56;
    ::ll::UntypedStorage<8, 64> mUnk94902a;
    // NOLINTEND

public:
    // prevent constructor by default
    AtomicClientEntityDefinitionDescriptor& operator=(AtomicClientEntityDefinitionDescriptor const&);
    AtomicClientEntityDefinitionDescriptor(AtomicClientEntityDefinitionDescriptor const&);
    AtomicClientEntityDefinitionDescriptor();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~AtomicClientEntityDefinitionDescriptor();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
