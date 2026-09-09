#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/NetworkItemInstanceDescriptor.h"

struct CreativeItemEntryPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>                                 mCreativeItemNetId;
    ::ll::TypedStorage<8, 48, ::NetworkItemInstanceDescriptor> mItemDescriptor;
    ::ll::TypedStorage<4, 4, uint>                             mGroupIndex;
    // NOLINTEND
};
