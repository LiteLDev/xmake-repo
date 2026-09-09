#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenActionScope.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenSimulation;
// clang-format on

class ContainerScreenTemporaryActionScope : public ::ContainerScreenActionScope {
public:
    // prevent constructor by default
    ContainerScreenTemporaryActionScope();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerScreenTemporaryActionScope();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerScreenTemporaryActionScope(::ContainerScreenSimulation&, ::ContainerScreenActionScope*);
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
