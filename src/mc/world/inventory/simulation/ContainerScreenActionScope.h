#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/inventory/simulation/ContainerScreenActionResult.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenSimulation;
#if defined(LL_PLAT_A) // @header-generator platform
struct ContainerValidationResult;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ContainerScreenActionScope {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                           mTemporaryScope;
    ::ll::TypedStorage<8, 8, ::ContainerScreenActionScope*>  mParentScope;
    ::ll::UntypedStorage<8, 24>                              mSimulation;
    ::ll::TypedStorage<8, 56, ::ContainerScreenActionResult> mScreenSimulationResult;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                                        mTemporaryScope;
    ::ll::TypedStorage<8, 8, ::ContainerScreenActionScope*>                               mParentScope;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ContainerScreenSimulation>> mSimulation;
    ::ll::TypedStorage<8, 56, ::ContainerScreenActionResult>                              mScreenSimulationResult;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    ContainerScreenActionScope& operator=(ContainerScreenActionScope const&);
    ContainerScreenActionScope(ContainerScreenActionScope const&);
    ContainerScreenActionScope();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ContainerScreenActionScope();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ContainerScreenActionScope();
#else // @header-generator platform
    virtual ~ContainerScreenActionScope() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ContainerScreenActionScope(::ContainerScreenSimulation&, ::ContainerScreenActionScope*);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI
    ContainerScreenActionScope(::ContainerScreenSimulation& simulation, ::ContainerScreenActionScope* parentScope);
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
