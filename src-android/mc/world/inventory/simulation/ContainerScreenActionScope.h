#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/inventory/simulation/ContainerScreenActionResult.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenSimulation;
struct ContainerValidationResult;
// clang-format on

class ContainerScreenActionScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                           mTemporaryScope;
    ::ll::TypedStorage<8, 8, ::ContainerScreenActionScope*>  mParentScope;
    ::ll::UntypedStorage<8, 24>                              mSimulation;
    ::ll::TypedStorage<8, 56, ::ContainerScreenActionResult> mScreenSimulationResult;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenActionScope& operator=(ContainerScreenActionScope const&);
    ContainerScreenActionScope(ContainerScreenActionScope const&);
    ContainerScreenActionScope();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerScreenActionScope();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerScreenActionScope(::ContainerScreenSimulation&, ::ContainerScreenActionScope*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
    // NOLINTEND
};
