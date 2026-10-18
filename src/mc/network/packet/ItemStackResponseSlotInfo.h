#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ItemStackNetIdTag;
// clang-format on

#endif // @header-generator platform
struct ItemStackResponseSlotInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                                mRequestedSlot;
    ::ll::TypedStorage<1, 1, uchar>                                mSlot;
    ::ll::TypedStorage<1, 1, uchar>                                mAmount;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 0>                                     mItemStackNetId;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mCustomName;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ItemStackNetId>                     mItemStackNetId;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mCustomName;
#endif // @header-generator platform
    ::ll::TypedStorage<2, 2, short>                                mDurabilityCorrection;
    // NOLINTEND
};
