#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/item/ItemStack.h"

struct ExpectedSlotConsume {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::FullContainerName> mOpenContainerNetId;
    ::ll::TypedStorage<1, 1, uchar>                mSlot;
    ::ll::TypedStorage<8, 152, ::ItemStack>        mItem;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpectedSlotConsume& operator=(ExpectedSlotConsume const&);
    ExpectedSlotConsume();
};
