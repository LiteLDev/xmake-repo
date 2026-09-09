#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SDL {

struct ClientStateOfferInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mId;
    ::ll::TypedStorage<8, 24, std::string> mPlatformStoreOfferId;
    ::ll::TypedStorage<8, 24, std::string> mSku;
    ::ll::TypedStorage<8, 24, std::string> mSubSku;
    ::ll::TypedStorage<8, 24, std::string> mFriendlyId;
    ::ll::TypedStorage<1, 1, bool>         mIsTrial;
    // NOLINTEND
};

} // namespace SDL
