#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenActionResultData.h"

// auto generated forward declare list
// clang-format off
struct ContainerScreenActionResult;
// clang-format on

struct DropResultData : public ::ContainerScreenActionResultData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mDropRandomly;
    // NOLINTEND

public:
    // prevent constructor by default
    DropResultData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<bool> getDropRandomly(::ContainerScreenActionResult const&);
    // NOLINTEND
};
