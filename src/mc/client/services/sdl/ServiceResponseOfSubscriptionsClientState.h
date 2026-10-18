#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/sdl/ProductSubscriptionState.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace SDL {

#if defined(LL_PLAT_A) // @header-generator platform
struct ServiceResponseOfSubscriptionsClientState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SDL::ProductSubscriptionState>> mSubscriptionOverviewMap;
    // NOLINTEND
};
#else // @header-generator platform
struct ServiceResponseOfSubscriptionsClientState {};
#endif // @header-generator platform

} // namespace SDL
