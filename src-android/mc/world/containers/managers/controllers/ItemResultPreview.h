#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/ItemInstance.h"

struct ItemResultPreview {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mItem;
    ::ll::UntypedStorage<4, 8>                 mRecipeNetId;
    // NOLINTEND
};
