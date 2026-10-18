#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/store/iap/transactions/TransactionStatus.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace SDL {

#if defined(LL_PLAT_A) // @header-generator platform
struct ServiceResponseOfPurchaseCurrency {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TransactionStatus> mTransactionStatus;
    ::ll::TypedStorage<1, 1, bool>                mTransactionResult;
    ::ll::TypedStorage<8, 24, std::string>        mInventoryVersion;
    // NOLINTEND
};
#else // @header-generator platform
struct ServiceResponseOfPurchaseCurrency {};
#endif // @header-generator platform

} // namespace SDL
