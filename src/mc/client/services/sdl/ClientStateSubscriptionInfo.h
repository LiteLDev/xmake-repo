#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SDL {

#if defined(LL_PLAT_A) // @header-generator platform
struct ClientStateSubscriptionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mId;
    ::ll::TypedStorage<8, 24, std::string> mSku;
    ::ll::TypedStorage<8, 24, std::string> mExpirationDate;
    ::ll::TypedStorage<8, 24, std::string> mFriendlyId;
    ::ll::TypedStorage<8, 24, std::string> mMarketplace;
    // NOLINTEND
};
#else // @header-generator platform
struct ClientStateSubscriptionInfo {};
#endif // @header-generator platform

} // namespace SDL
