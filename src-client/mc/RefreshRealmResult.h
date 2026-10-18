#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/RealmsFulfillmentResult.h"

struct RefreshRealmResult : public ::RealmsFulfillmentResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mRefreshed;
    ::ll::TypedStorage<4, 4, int>          mDaysLeft;
    ::ll::TypedStorage<1, 1, bool>         mExpired;
    ::ll::TypedStorage<8, 24, std::string> mExpirationAt;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
