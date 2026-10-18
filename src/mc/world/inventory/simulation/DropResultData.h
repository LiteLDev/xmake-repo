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
struct DropResultData : public ::ContainerScreenActionResultData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mDropRandomly;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk425ca4;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DropResultData& operator=(DropResultData const&);
    DropResultData(DropResultData const&);
#endif // @header-generator platform
    DropResultData();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<bool> getDropRandomly(::ContainerScreenActionResult const&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
