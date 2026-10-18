#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/UserPlatformBanType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct UserBanDetails {};
#endif // @header-generator platform

} // namespace Social
