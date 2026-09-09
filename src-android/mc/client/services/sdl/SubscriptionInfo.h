#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SDL {

struct SubscriptionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mType;
    ::ll::TypedStorage<1, 1, bool>         mIsTrialEligible;
    ::ll::TypedStorage<8, 24, std::string> mSubSku;
    ::ll::TypedStorage<8, 24, std::string> mProductSku;
    ::ll::TypedStorage<8, 24, std::string> mId;
    ::ll::TypedStorage<8, 24, std::string> mPlatformStoreId;
    ::ll::TypedStorage<8, 24, std::string> mFriendlyId;
    // NOLINTEND

public:
    // prevent constructor by default
    SubscriptionInfo& operator=(SubscriptionInfo const&);
    SubscriptionInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SubscriptionInfo(::SDL::SubscriptionInfo const&);

    MCNAPI ~SubscriptionInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SDL::SubscriptionInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SDL
