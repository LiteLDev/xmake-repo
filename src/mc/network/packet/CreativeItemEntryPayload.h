#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/NetworkItemInstanceDescriptor.h"

// auto generated forward declare list
// clang-format off
struct CreativeItemNetIdTag;
// clang-format on

struct CreativeItemEntryPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CreativeItemNetId>              mCreativeItemNetId;
    ::ll::TypedStorage<8, 64, ::NetworkItemInstanceDescriptor> mItemDescriptor;
    ::ll::TypedStorage<4, 4, uint>                             mGroupIndex;
    // NOLINTEND
};
#endif // @header-generator platform
