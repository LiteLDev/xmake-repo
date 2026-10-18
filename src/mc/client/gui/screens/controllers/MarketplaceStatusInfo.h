#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct MarketplaceStatusInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsMarketplaceDisabled;
    ::ll::TypedStorage<1, 1, bool> mIsOffline;
    ::ll::TypedStorage<1, 1, bool> mIsSessionConfigInProgress;
    ::ll::TypedStorage<1, 1, bool> mIsServicesManagerReady;
    ::ll::TypedStorage<1, 1, bool> mIsPersonaOfflineEnabled;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct MarketplaceStatusInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsMarketplaceDisabled;
    ::ll::TypedStorage<1, 1, bool> mIsOffline;
    ::ll::TypedStorage<1, 1, bool> mIsSessionConfigInProgress;
    ::ll::TypedStorage<1, 1, bool> mIsServicesManagerReady;
    ::ll::TypedStorage<1, 1, bool> mIsPersonaOfflineEnabled;
    // NOLINTEND
};
#else // @header-generator platform
struct MarketplaceStatusInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
