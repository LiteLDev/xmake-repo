#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenValidation.h"
#include "mc/world/inventory/simulation/ContainerValidationCaller.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
struct ContainerValidationCraftInputs;
struct ContainerValidationCraftResult;
struct ContainerValidationResult;
struct FullContainerName;
// clang-format on

class ContainerScreenValidationCrafting : public ::ContainerScreenValidation {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ContainerScreenValidationCrafting();

    virtual ::ContainerValidationResult tryCraft(std::unique_ptr<ContainerValidationCraftInputs>, uchar const);

    virtual ::ContainerValidationCraftResult getCraftResults(std::unique_ptr<ContainerValidationCraftInputs>, uchar const);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ContainerValidationResult $tryCraft(std::unique_ptr<ContainerValidationCraftInputs>, uchar const);

    MCNAPI ::ContainerValidationCraftResult
    $getCraftResults(std::unique_ptr<ContainerValidationCraftInputs>, uchar const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
