#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/commerce/PurchaseResult.h"

// auto generated forward declare list
// clang-format off
struct PurchaseInfo;
// clang-format on

struct PurchaseProductResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112>               mProduct;
    ::ll::TypedStorage<4, 4, ::PurchaseResult> mPurchaseResult;
    ::ll::TypedStorage<8, 24, std::string>     mErrorMessage;
    ::ll::TypedStorage<8, 8, long>             mErrorCode;
    ::ll::TypedStorage<1, 1, bool>             mSuccess;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
