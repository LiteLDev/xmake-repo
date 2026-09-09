#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/iap/transactions/TransactionStatus.h"

namespace SDL {

struct ServiceResponseOfPurchaseCurrency {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TransactionStatus> mTransactionStatus;
    ::ll::TypedStorage<1, 1, bool>                mTransactionResult;
    ::ll::TypedStorage<8, 24, std::string>        mInventoryVersion;
    // NOLINTEND
};

} // namespace SDL
