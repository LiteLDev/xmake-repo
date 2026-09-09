#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

struct MultiRecipePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID> mUuid;
    ::ll::UntypedStorage<4, 8>             mNetId;
    // NOLINTEND
};
