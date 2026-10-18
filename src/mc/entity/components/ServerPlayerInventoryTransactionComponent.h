#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/network/packet/InventoryPacketHandler.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class InventoryPacketHandler;
// clang-format on
#endif // @header-generator platform

struct ServerPlayerInventoryTransactionComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<InventoryPacketHandler>> mCurrentTransactions;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::InventoryPacketHandler>> mCurrentTransactions;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ServerPlayerInventoryTransactionComponent& operator=(ServerPlayerInventoryTransactionComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
