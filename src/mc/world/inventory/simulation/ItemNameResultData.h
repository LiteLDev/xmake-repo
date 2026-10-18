#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenActionResultData.h"

// auto generated forward declare list
// clang-format off
struct ContainerScreenActionResult;
// clang-format on

struct ItemNameResultData : public ::ContainerScreenActionResultData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mItemName;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkd28ec8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ItemNameResultData& operator=(ItemNameResultData const&);
    ItemNameResultData(ItemNameResultData const&);
#endif // @header-generator platform
    ItemNameResultData();

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<std::string> getItemName(::ContainerScreenActionResult const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::std::optional<::std::string> getItemName(::ContainerScreenActionResult const& result);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
