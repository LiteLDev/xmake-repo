#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Social { struct XboxLiveUserProfileData; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Social { struct XboxLiveUserProfileData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct AddFriendUserItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                     xuid;
    ::ll::TypedStorage<8, 24, std::string>                     gamertag;
    ::ll::TypedStorage<8, 112, ::OreUI::AllowListProfileImage> profileImage;
    ::ll::TypedStorage<1, 1, bool>                             isOnline;
    ::ll::TypedStorage<1, 1, bool>                             isFollowingMe;
    ::ll::TypedStorage<1, 1, bool>                             isFollowedByMe;
    ::ll::TypedStorage<1, 1, bool>                             isFriend;
    ::ll::TypedStorage<1, 1, bool>                             isFriendRequestReceived;
    ::ll::TypedStorage<1, 1, bool>                             isFriendRequestSent;
    ::ll::TypedStorage<8, 24, std::string>                     description;
    // NOLINTEND

public:
    // prevent constructor by default
    AddFriendUserItem& operator=(AddFriendUserItem const&);
    AddFriendUserItem(AddFriendUserItem const&);
    AddFriendUserItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AddFriendUserItem(
        ::Social::XboxLiveUserProfileData const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );

    MCNAPI AddFriendUserItem(
        std::string const&,
        std::string const&,
        ::OreUI::AllowListProfileImage const&,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        std::string const&
    );

    MCNAPI ~AddFriendUserItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Social::XboxLiveUserProfileData const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );

    MCNAPI void* $ctor(
        std::string const&,
        std::string const&,
        ::OreUI::AllowListProfileImage const&,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        std::string const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct AddFriendUserItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                   xuid;
    ::ll::TypedStorage<8, 32, ::std::string>                   gamertag;
    ::ll::TypedStorage<8, 144, ::OreUI::AllowListProfileImage> profileImage;
    ::ll::TypedStorage<1, 1, bool>                             isOnline;
    ::ll::TypedStorage<1, 1, bool>                             isFollowingMe;
    ::ll::TypedStorage<1, 1, bool>                             isFollowedByMe;
    ::ll::TypedStorage<1, 1, bool>                             isFriend;
    ::ll::TypedStorage<1, 1, bool>                             isFriendRequestReceived;
    ::ll::TypedStorage<1, 1, bool>                             isFriendRequestSent;
    ::ll::TypedStorage<8, 32, ::std::string>                   description;
    // NOLINTEND

public:
    // prevent constructor by default
    AddFriendUserItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AddFriendUserItem(
        ::Social::XboxLiveUserProfileData const&                   profileData,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI AddFriendUserItem(
        ::std::string const&                  xuid,
        ::std::string const&                  gamertag,
        ::OreUI::AllowListProfileImage const& profileImage,
        bool                                  isOnline,
        bool                                  isFollowingMe,
        bool                                  isFollowedByMe,
        bool                                  isFriend,
        bool                                  isFriendRequestReceived,
        bool                                  isFriendRequestSent,
        ::std::string const&                  description
    );

    MCAPI ~AddFriendUserItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Social::XboxLiveUserProfileData const&                   profileData,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI void* $ctor(
        ::std::string const&                  xuid,
        ::std::string const&                  gamertag,
        ::OreUI::AllowListProfileImage const& profileImage,
        bool                                  isOnline,
        bool                                  isFollowingMe,
        bool                                  isFollowedByMe,
        bool                                  isFriend,
        bool                                  isFriendRequestReceived,
        bool                                  isFriendRequestSent,
        ::std::string const&                  description
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct AddFriendUserItem {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
