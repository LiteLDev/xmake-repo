#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Social { struct XboxLiveUserProfileData; }
// clang-format on

namespace OreUI {

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

} // namespace OreUI
