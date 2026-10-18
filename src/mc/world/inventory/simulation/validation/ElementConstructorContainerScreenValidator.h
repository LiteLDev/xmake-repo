#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class ElementConstructorContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~ElementConstructorContainerScreenValidator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ElementConstructorContainerScreenValidator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
