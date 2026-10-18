#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenActionResultData.h"
#include "mc/world/inventory/simulation/ContainerValidationResult.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ContainerScreenActionResultData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ContainerValidationResult;
#endif // @header-generator platform
// clang-format on

struct ContainerScreenActionResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                                           mActionSucceeded;
    ::ll::TypedStorage<8, 24, std::vector<ContainerValidationResult>>                        mValidationResults;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ContainerScreenActionResultData>>> mResultData;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                                                 mActionSucceeded;
    ::ll::TypedStorage<8, 24, ::std::vector<::ContainerValidationResult>>                          mValidationResults;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ContainerScreenActionResultData>>> mResultData;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ContainerScreenActionResult& operator=(ContainerScreenActionResult const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~ContainerScreenActionResult();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
