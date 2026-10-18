#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/transaction/InventoryTransaction.h"

struct NormalTransactionData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, ::InventoryTransaction> mTransaction;
#else // @header-generator platform
    ::ll::TypedStorage<8, 88, ::InventoryTransaction> mTransaction;
#endif // @header-generator platform
    // NOLINTEND
};
