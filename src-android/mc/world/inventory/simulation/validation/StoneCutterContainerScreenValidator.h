#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ContainerScreenValidation;
class ItemInstance;
class ItemStack;
class Recipes;
struct ContainerValidationCraftInputs;
struct ContainerValidationCraftResult;
// clang-format on

class StoneCutterContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~StoneCutterContainerScreenValidator();

    virtual bool isCraftingImplemented();

    virtual ::ContainerValidationCraftResult getCraftResult(::ContainerScreenContext const&, ::ContainerScreenValidation&, std::unique_ptr<ContainerValidationCraftInputs>, uchar const);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StoneCutterContainerScreenValidator();
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isCraftingImplemented();

    MCNAPI ::ContainerValidationCraftResult $getCraftResult(
        ::ContainerScreenContext const&,
        ::ContainerScreenValidation&,
        std::unique_ptr<ContainerValidationCraftInputs>,
        uchar const
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
