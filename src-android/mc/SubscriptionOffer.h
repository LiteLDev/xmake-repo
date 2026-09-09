#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/edu/SubscriptionType.h"

struct SubscriptionOffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SubscriptionType> mType;
    ::ll::TypedStorage<8, 24, std::string>       mId;
    ::ll::TypedStorage<8, 24, std::string>       mPlatformStoreOfferId;
    ::ll::TypedStorage<8, 24, std::string>       mSku;
    ::ll::TypedStorage<8, 24, std::string>       mSubSku;
    ::ll::TypedStorage<8, 24, std::string>       mFriendlyId;
    ::ll::TypedStorage<1, 1, bool>               mIsTrialEligible;
    // NOLINTEND
};
