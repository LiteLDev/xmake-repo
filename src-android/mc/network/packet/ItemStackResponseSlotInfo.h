#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

struct ItemStackResponseSlotInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                                mRequestedSlot;
    ::ll::TypedStorage<1, 1, uchar>                                mSlot;
    ::ll::TypedStorage<1, 1, uchar>                                mAmount;
    ::ll::UntypedStorage<4, 0>                                     mItemStackNetId;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mCustomName;
    ::ll::TypedStorage<2, 2, short>                                mDurabilityCorrection;
    // NOLINTEND
};
