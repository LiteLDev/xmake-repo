#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class AllowListProfileImage; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI::Detail { class IPropertyObject; }
namespace Social { struct XboxLiveUserProfileData; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class AddFriendObject : public ::OreUI::PropertyObject<OreUI::AddFriendObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mXuid;
    ::ll::UntypedStorage<8, 168> mGamertag;
    ::ll::UntypedStorage<8, 168> mGamerIcon;
    ::ll::UntypedStorage<8, 152> mIsOnline;
    ::ll::UntypedStorage<8, 152> mIsFollowingMe;
    ::ll::UntypedStorage<8, 152> mIsFollowedByMe;
    ::ll::UntypedStorage<8, 152> mIsFriend;
    ::ll::UntypedStorage<8, 152> mIsFriendRequestReceived;
    ::ll::UntypedStorage<8, 152> mIsFriendRequestSent;
    ::ll::UntypedStorage<8, 168> mDescription;
    // NOLINTEND

public:
    // prevent constructor by default
    AddFriendObject& operator=(AddFriendObject const&);
    AddFriendObject(AddFriendObject const&);
    AddFriendObject();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AddFriendObject();
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
#if defined(LL_PLAT_C) // @header-generator platform
class AddFriendObject : public ::OreUI::PropertyObject<::OreUI::AddFriendObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mXuid;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mGamertag;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mGamerIcon;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>          mIsOnline;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>          mIsFollowingMe;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>          mIsFollowedByMe;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>          mIsFriend;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>          mIsFriendRequestReceived;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>          mIsFriendRequestSent;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mDescription;
    // NOLINTEND
};
#else // @header-generator platform
class AddFriendObject {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
