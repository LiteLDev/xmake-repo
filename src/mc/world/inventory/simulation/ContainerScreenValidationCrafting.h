#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenValidation.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/simulation/ContainerValidationCaller.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Container;
class ContainerScreenContext;
#else // @header-generator platform
#endif // @header-generator platform
struct ContainerValidationCraftInputs;
struct ContainerValidationCraftResult;
struct ContainerValidationResult;
#if defined(LL_PLAT_A) // @header-generator platform
struct FullContainerName;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ContainerScreenValidationCrafting : public ::ContainerScreenValidation {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ContainerScreenValidationCrafting();
#else // @header-generator platform
    virtual ::ContainerValidationResult
    tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const numCrafts) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerValidationResult tryCraft(std::unique_ptr<ContainerValidationCraftInputs>, uchar const);

    virtual ::ContainerValidationCraftResult getCraftResults(std::unique_ptr<ContainerValidationCraftInputs>, uchar const);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::ContainerValidationCraftResult getCraftResults(
        ::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs,
        uchar const                                         numCrafts
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerValidationResult $tryCraft(std::unique_ptr<ContainerValidationCraftInputs>, uchar const);
#else // @header-generator platform
    MCAPI ::ContainerValidationResult
    $tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const numCrafts);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerValidationCraftResult
    $getCraftResults(std::unique_ptr<ContainerValidationCraftInputs>, uchar const);
#else // @header-generator platform
    MCAPI ::ContainerValidationCraftResult
    $getCraftResults(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const numCrafts);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
