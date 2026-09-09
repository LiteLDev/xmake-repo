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
    ::ll::TypedStorage<8, 24, std::string> mItemName;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemNameResultData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<std::string> getItemName(::ContainerScreenActionResult const&);
    // NOLINTEND
};
