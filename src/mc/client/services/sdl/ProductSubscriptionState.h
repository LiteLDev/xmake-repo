#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/sdl/ClientStateOfferInfo.h"
#include "mc/client/services/sdl/ClientStateSubscriptionInfo.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace SDL {

#if defined(LL_PLAT_A) // @header-generator platform
struct ProductSubscriptionState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                           mHasNextAvailableInfo;
    ::ll::TypedStorage<8, 128, ::SDL::ClientStateOfferInfo>                  mPrimaryOffer;
    ::ll::TypedStorage<1, 1, bool>                                           mHasFallbackOffer;
    ::ll::TypedStorage<8, 128, ::SDL::ClientStateOfferInfo>                  mFallbackOffer;
    ::ll::TypedStorage<8, 24, std::vector<SDL::ClientStateSubscriptionInfo>> mPlatformActiveSubs;
    ::ll::TypedStorage<8, 24, std::vector<SDL::ClientStateOfferInfo>>        mAvailableButNotActiveOffers;
    ::ll::TypedStorage<8, 24, std::vector<SDL::ClientStateSubscriptionInfo>> mGlobalActiveSubs;
    ::ll::TypedStorage<8, 24, std::vector<SDL::ClientStateSubscriptionInfo>> mExpiredSubs;
    // NOLINTEND
};
#else // @header-generator platform
struct ProductSubscriptionState {};
#endif // @header-generator platform

} // namespace SDL
