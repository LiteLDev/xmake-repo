#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
