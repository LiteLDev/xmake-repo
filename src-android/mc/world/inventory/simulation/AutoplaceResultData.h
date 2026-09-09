#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenActionResultData.h"

// auto generated forward declare list
// clang-format off
struct ContainerScreenActionResult;
// clang-format on

struct AutoplaceResultData : public ::ContainerScreenActionResultData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mRemaining;
    // NOLINTEND

public:
    // prevent constructor by default
    AutoplaceResultData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<int> getRemaining(::ContainerScreenActionResult const&);
    // NOLINTEND
};
