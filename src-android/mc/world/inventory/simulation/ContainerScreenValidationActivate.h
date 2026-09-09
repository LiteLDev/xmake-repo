#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenValidation.h"
#include "mc/world/inventory/simulation/ContainerValidationCaller.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
struct ContainerValidationResult;
struct FullContainerName;
// clang-format on

class ContainerScreenValidationActivate : public ::ContainerScreenValidation {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerScreenValidationActivate();

    virtual ::ContainerValidationResult tryActivate();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ContainerValidationResult $tryActivate();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
