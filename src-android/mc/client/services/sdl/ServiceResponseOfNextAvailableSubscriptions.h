#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/sdl/SubscriptionInfo.h"

namespace SDL {

struct ServiceResponseOfNextAvailableSubscriptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SDL::SubscriptionInfo>> mNextAvailableSubscriptions;
    ::ll::TypedStorage<8, 24, std::vector<SDL::SubscriptionInfo>> mSubscriptionPriceInfo;
    // NOLINTEND
};

} // namespace SDL
