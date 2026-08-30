#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/UserPlatformBanType.h"

namespace Social {

struct UserBanDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Social::UserPlatformBanType> mBanType;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>   mReason;
    ::ll::TypedStorage<8, 16, std::optional<long>>          mExpiration;
    // NOLINTEND

public:
    // prevent constructor by default
    UserBanDetails& operator=(UserBanDetails const&);
    UserBanDetails(UserBanDetails const&);
    UserBanDetails();
};

} // namespace Social
