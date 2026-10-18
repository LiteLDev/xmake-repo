#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/store/iap/transactions/TransactionStatus.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace SDL {

#if defined(LL_PLAT_A) // @header-generator platform
struct ServiceResponseOfPurchaseOffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TransactionStatus> mTransactionStatus;
    // NOLINTEND
};
#else // @header-generator platform
struct ServiceResponseOfPurchaseOffer {};
#endif // @header-generator platform

} // namespace SDL
