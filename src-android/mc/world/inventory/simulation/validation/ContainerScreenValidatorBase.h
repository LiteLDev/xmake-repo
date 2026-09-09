#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ContainerScreenValidation;
class ContainerValidationCommitObject;
class ItemStack;
struct ContainerValidationCraftInputs;
struct ContainerValidationCraftResult;
// clang-format on

class ContainerScreenValidatorBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_set<ContainerEnumName>> mValidContainerEnumNames;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ContainerScreenValidatorBase();

    virtual std::shared_ptr<ContainerValidationCommitObject> postCommitItemRemoved(::ContainerEnumName const, int const, ::ItemStack const&);

    virtual bool isCraftingImplemented();

    virtual ::ContainerValidationCraftResult getCraftResult(::ContainerScreenContext const&, ::ContainerScreenValidation&, std::unique_ptr<ContainerValidationCraftInputs>, uchar const);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isValidContainerForScreen(::ContainerEnumName) const;
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
