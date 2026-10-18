#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/network/TypedServerNetId.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/inventory/simulation/ContainerScreenActionResultData.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct ContainerScreenActionResult;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct CraftResultData : public ::ContainerScreenActionResultData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 4> mRecipeNetId;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkdeb516;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CraftResultData& operator=(CraftResultData const&);
    CraftResultData(CraftResultData const&);
#endif // @header-generator platform
    CraftResultData();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<TypedServerNetId<RecipeNetIdTag, uint, 0>>
    getRecipeId(::ContainerScreenActionResult const&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
