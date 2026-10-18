#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/client/social/FriendInviteType.h"
#include "mc/client/social/UserPresenceResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Social { struct FriendData; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/client/social/FriendInviteType.h"
#include "mc/client/social/UserPresenceResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Social { struct FriendData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct InvitableFriendBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Social::FriendInviteType>       mFriendInviteType;
    ::ll::TypedStorage<8, 24, std::string>                     mUserId;
    ::ll::TypedStorage<8, 24, std::string>                     mPlayerName;
    ::ll::TypedStorage<4, 4, ::Social::UserPresenceResult>     mPresence;
    ::ll::TypedStorage<8, 112, ::OreUI::AllowListProfileImage> mProfileImage;
    ::ll::UntypedStorage<8, 72>                                mPlatformImage;
    // NOLINTEND

public:
    // prevent constructor by default
    InvitableFriendBindings& operator=(InvitableFriendBindings const&);
    InvitableFriendBindings(InvitableFriendBindings const&);
    InvitableFriendBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InvitableFriendBindings(
        ::Social::FriendData const&,
        ::Social::FriendInviteType,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );

    MCNAPI std::string const& getActiveProfileImage() const;

    MCNAPI ~InvitableFriendBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Social::FriendData const&,
        ::Social::FriendInviteType,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
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
struct InvitableFriendBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Social::FriendInviteType>       mFriendInviteType;
    ::ll::TypedStorage<8, 32, ::std::string>                   mUserId;
    ::ll::TypedStorage<8, 32, ::std::string>                   mPlayerName;
    ::ll::TypedStorage<4, 4, ::Social::UserPresenceResult>     mPresence;
    ::ll::TypedStorage<8, 144, ::OreUI::AllowListProfileImage> mProfileImage;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>          mPlatformImage;
    // NOLINTEND

public:
    // prevent constructor by default
    InvitableFriendBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InvitableFriendBindings(
        ::Social::FriendData const&                                friendData,
        ::Social::FriendInviteType                                 inviteEntryType,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI ::std::string const& getActiveProfileImage() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Social::FriendData const&                                friendData,
        ::Social::FriendInviteType                                 inviteEntryType,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND
};
#else // @header-generator platform
struct InvitableFriendBindings {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
