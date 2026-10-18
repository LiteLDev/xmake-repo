#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenValidation.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/simulation/ContainerValidationCaller.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Container;
class ContainerScreenContext;
#else // @header-generator platform
#endif // @header-generator platform
struct ContainerValidationResult;
#if defined(LL_PLAT_A) // @header-generator platform
struct FullContainerName;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ContainerScreenValidationActivate : public ::ContainerScreenValidation {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ContainerScreenValidationActivate();

    virtual ::ContainerValidationResult tryActivate();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::ContainerValidationResult tryActivate() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerValidationResult $tryActivate();
#else // @header-generator platform
    MCFOLD ::ContainerValidationResult $tryActivate();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
