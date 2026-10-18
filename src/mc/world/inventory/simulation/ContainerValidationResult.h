#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenRequestActionType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/simulation/ContainerValidationOperation.h"
#include "mc/world/inventory/simulation/ContainerValidationOperationType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/inventory/simulation/ContainerValidationOutcome.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct ContainerValidationOperation;
// clang-format on
#endif // @header-generator platform

struct ContainerValidationResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ContainerValidationOperation>> mOperations;
    ::ll::TypedStorage<4, 4, ::ContainerValidationOutcome>               mOutcome;
    ::ll::TypedStorage<1, 1, ::ContainerScreenRequestActionType>         mRequestActionType;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerValidationResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isSuccess() const;

    MCNAPI ::ContainerValidationResult& operator=(::ContainerValidationResult&&);

    MCNAPI ::ContainerValidationOperation const* tryGetOperation(::ContainerValidationOperationType) const;

    MCNAPI ~ContainerValidationResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ContainerValidationOperation>> mOperations;
    ::ll::TypedStorage<4, 4, ::ContainerValidationOutcome>                   mOutcome;
    ::ll::TypedStorage<1, 1, ::ContainerScreenRequestActionType>             mRequestActionType;
#endif // @header-generator platform
    // NOLINTEND
};
