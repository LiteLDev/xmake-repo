#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ContainerScreenValidation;
class ContainerValidationCommitObject;
class ItemStack;
struct ContainerValidationCraftInputs;
struct ContainerValidationCraftResult;
// clang-format on

class AnvilContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~AnvilContainerScreenValidator();

    virtual std::shared_ptr<ContainerValidationCommitObject> postCommitItemRemoved(::ContainerEnumName const, int const, ::ItemStack const&);

    virtual bool isCraftingImplemented();

    virtual ::ContainerValidationCraftResult getCraftResult(::ContainerScreenContext const&, ::ContainerScreenValidation&, std::unique_ptr<ContainerValidationCraftInputs>, uchar const);
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
    MCNAPI std::shared_ptr<ContainerValidationCommitObject>
           $postCommitItemRemoved(::ContainerEnumName const, int const, ::ItemStack const&);

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
