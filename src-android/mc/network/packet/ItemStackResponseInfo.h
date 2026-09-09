#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ItemStackResponseContainerInfo.h"
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

struct ItemStackResponseInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ItemStackNetResult>                         mResult;
    ::ll::UntypedStorage<8, 16>                                            mClientRequestId;
    ::ll::TypedStorage<8, 24, std::vector<ItemStackResponseContainerInfo>> mContainers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ItemStackResponseInfo& operator=(::ItemStackResponseInfo&&);
    // NOLINTEND
};
