#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenActionResultData.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ContainerScreenActionResult;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct AutoplaceResultData : public ::ContainerScreenActionResultData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mRemaining;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkf8ae2d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AutoplaceResultData& operator=(AutoplaceResultData const&);
    AutoplaceResultData(AutoplaceResultData const&);
#endif // @header-generator platform
    AutoplaceResultData();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<int> getRemaining(::ContainerScreenActionResult const&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
