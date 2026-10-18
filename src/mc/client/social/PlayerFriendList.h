#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/XboxLivePeopleHubList.h"
#include "mc/identity/XUID.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class PlayerFriendList : public ::Social::XboxLivePeopleHubList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Social::XUID> mXuid;
    // NOLINTEND
};
#else // @header-generator platform
class PlayerFriendList {};
#endif // @header-generator platform

} // namespace Social
