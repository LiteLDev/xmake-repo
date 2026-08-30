#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SDL {

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

} // namespace SDL
