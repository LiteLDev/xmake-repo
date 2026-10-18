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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~AnvilContainerScreenValidator();
#else // @header-generator platform
    virtual bool isCraftingImplemented() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<ContainerValidationCommitObject> postCommitItemRemoved(::ContainerEnumName const, int const, ::ItemStack const&);
#else // @header-generator platform
    virtual ::ContainerValidationCraftResult getCraftResult(
        ::ContainerScreenContext const&                     screenContext,
        ::ContainerScreenValidation&                        screenValidation,
        ::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs,
        uchar const                                         numCrafts
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isCraftingImplemented();

    virtual ::ContainerValidationCraftResult getCraftResult(::ContainerScreenContext const&, ::ContainerScreenValidation&, std::unique_ptr<ContainerValidationCraftInputs>, uchar const);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::shared_ptr<::ContainerValidationCommitObject>
    postCommitItemRemoved(::ContainerEnumName const containerEnumName, int const slot, ::ItemStack const&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<ContainerValidationCommitObject>
           $postCommitItemRemoved(::ContainerEnumName const, int const, ::ItemStack const&);
#else // @header-generator platform
    MCFOLD bool $isCraftingImplemented();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isCraftingImplemented();

    MCNAPI ::ContainerValidationCraftResult $getCraftResult(
        ::ContainerScreenContext const&,
        ::ContainerScreenValidation&,
        std::unique_ptr<ContainerValidationCraftInputs>,
        uchar const
#else // @header-generator platform
    MCAPI ::ContainerValidationCraftResult $getCraftResult(
        ::ContainerScreenContext const&                     screenContext,
        ::ContainerScreenValidation&                        screenValidation,
        ::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs,
        uchar const                                         numCrafts
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::ContainerValidationCommitObject>
    $postCommitItemRemoved(::ContainerEnumName const containerEnumName, int const slot, ::ItemStack const&);


#endif // @header-generator platform
    // NOLINTEND
};
