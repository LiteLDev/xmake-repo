#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/InventoryPacketHandler.h"

struct ServerPlayerInventoryTransactionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<InventoryPacketHandler>> mCurrentTransactions;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayerInventoryTransactionComponent& operator=(ServerPlayerInventoryTransactionComponent const&);
};
