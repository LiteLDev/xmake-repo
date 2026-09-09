#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"

namespace ItemStackRequestCereal {

struct CraftRecipeOptionalActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>    mRecipeNetId;
    ::ll::TypedStorage<4, 4, int> mFilteredStringIndex;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
