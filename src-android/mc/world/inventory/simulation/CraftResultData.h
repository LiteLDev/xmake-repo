#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/simulation/ContainerScreenActionResultData.h"

// auto generated forward declare list
// clang-format off
struct ContainerScreenActionResult;
// clang-format on

struct CraftResultData : public ::ContainerScreenActionResultData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mRecipeNetId;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftResultData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<TypedServerNetId<RecipeNetIdTag, uint, 0>>
    getRecipeId(::ContainerScreenActionResult const&);
    // NOLINTEND
};
