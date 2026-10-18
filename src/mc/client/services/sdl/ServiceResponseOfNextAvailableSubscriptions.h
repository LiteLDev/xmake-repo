#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/sdl/SubscriptionInfo.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace SDL {

#if defined(LL_PLAT_A) // @header-generator platform
struct ServiceResponseOfNextAvailableSubscriptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SDL::SubscriptionInfo>> mNextAvailableSubscriptions;
    ::ll::TypedStorage<8, 24, std::vector<SDL::SubscriptionInfo>> mSubscriptionPriceInfo;
    // NOLINTEND
};
#else // @header-generator platform
struct ServiceResponseOfNextAvailableSubscriptions {};
#endif // @header-generator platform

} // namespace SDL
