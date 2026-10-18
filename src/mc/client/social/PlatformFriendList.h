#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/BasePlatformFriendsList.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class TaskGroup;
namespace Social { class IUserManager; }
namespace Social { struct PlatformUserProfileData; }
namespace World { class FriendServerWorldList; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class PlatformFriendList : public ::Social::BasePlatformFriendsList,
                           public ::std::enable_shared_from_this<Social::PlatformFriendList> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlatformFriendList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class PlatformFriendList {};
#endif // @header-generator platform

} // namespace Social
