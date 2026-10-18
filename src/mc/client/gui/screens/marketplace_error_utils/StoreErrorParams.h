#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/store/StoreErrorCodes.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/store/StoreErrorCodes.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace MarketplaceErrorUtils {

#if defined(LL_PLAT_A) // @header-generator platform
struct StoreErrorParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>              isMarketplaceDisabled;
    ::ll::TypedStorage<1, 1, ::StoreErrorCodes> marketplaceDisabledErrorCode;
    ::ll::TypedStorage<8, 24, std::string>      marketplaceDisabledErrorText;
    ::ll::TypedStorage<1, 1, bool>              doesServicesManagerHaveErrorStatus;
    ::ll::TypedStorage<8, 24, std::string>      servicesManagerErrorStatusCode;
    ::ll::TypedStorage<1, 1, bool>              canAccessStoreScreen;
    ::ll::TypedStorage<1, 1, bool>              isNetworkAvailable;
    ::ll::TypedStorage<1, 1, bool>              requiresNetworkOutageMessaging;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct StoreErrorParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>              isMarketplaceDisabled;
    ::ll::TypedStorage<1, 1, ::StoreErrorCodes> marketplaceDisabledErrorCode;
    ::ll::TypedStorage<8, 32, ::std::string>    marketplaceDisabledErrorText;
    ::ll::TypedStorage<1, 1, bool>              doesServicesManagerHaveErrorStatus;
    ::ll::TypedStorage<8, 32, ::std::string>    servicesManagerErrorStatusCode;
    ::ll::TypedStorage<1, 1, bool>              canAccessStoreScreen;
    ::ll::TypedStorage<1, 1, bool>              isNetworkAvailable;
    ::ll::TypedStorage<1, 1, bool>              requiresNetworkOutageMessaging;
    // NOLINTEND
};
#else // @header-generator platform
struct StoreErrorParams {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace MarketplaceErrorUtils
