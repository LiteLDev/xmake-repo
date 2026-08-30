#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/sdl/ClientStateOfferInfo.h"
#include "mc/client/services/sdl/ClientStateSubscriptionInfo.h"

namespace SDL {

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

} // namespace SDL
