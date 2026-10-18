#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenActionScope.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenSimulation;
// clang-format on

class ContainerScreenTemporaryActionScope : public ::ContainerScreenActionScope {
#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    ContainerScreenTemporaryActionScope();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ContainerScreenTemporaryActionScope();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ContainerScreenTemporaryActionScope();
#else // @header-generator platform
    virtual ~ContainerScreenTemporaryActionScope() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ContainerScreenTemporaryActionScope(::ContainerScreenSimulation&, ::ContainerScreenActionScope*);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ContainerScreenTemporaryActionScope(
        ::ContainerScreenSimulation&  simulation,
        ::ContainerScreenActionScope* parentScope
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ContainerScreenSimulation&, ::ContainerScreenActionScope*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ContainerScreenSimulation& simulation, ::ContainerScreenActionScope* parentScope);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
