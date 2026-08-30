#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenActionResultData.h"
#include "mc/world/inventory/simulation/ContainerValidationResult.h"

// auto generated forward declare list
// clang-format off
struct ContainerScreenActionResultData;
// clang-format on

struct ContainerScreenActionResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                           mActionSucceeded;
    ::ll::TypedStorage<8, 24, std::vector<ContainerValidationResult>>                        mValidationResults;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ContainerScreenActionResultData>>> mResultData;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenActionResult& operator=(ContainerScreenActionResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerScreenActionResult();

    MCNAPI explicit ContainerScreenActionResult(::ContainerValidationResult const&);

    MCNAPI ContainerScreenActionResult(::ContainerScreenActionResult const&);

    MCNAPI std::shared_ptr<const ContainerScreenActionResultData>
           tryGetResultData(::ContainerScreenActionResultData::Type) const;

    MCNAPI ~ContainerScreenActionResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ContainerValidationResult const&);

    MCNAPI void* $ctor(::ContainerScreenActionResult const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
