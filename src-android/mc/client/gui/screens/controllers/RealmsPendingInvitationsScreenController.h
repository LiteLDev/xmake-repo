#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/social/invites/Invite.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class UIPropertyBag;
struct ToggleChangeEventData;
// clang-format on

class RealmsPendingInvitationsScreenController : public ::MainMenuScreenController {
public:
    // RealmsPendingInvitationsScreenController inner types define
    using InviteList = std::vector<Invites::Invite>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mDirty;
    ::ll::TypedStorage<8, 24, std::vector<Invites::Invite>> mPendingInvitesList;
    ::ll::TypedStorage<1, 1, bool> mPendingAsyncOperation;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastUpdate;
    ::ll::TypedStorage<1, 1, bool> mHasPendingInvites;
    ::ll::TypedStorage<1, 1, bool> mShowOnlyFriendInvites;
    ::ll::TypedStorage<4, 4, int> mFriendInvites;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPendingInvitationsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPendingInvitationsScreenController();

    virtual ::ui::DirtyFlag tick();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsPendingInvitationsScreenController(std::shared_ptr<MainMenuScreenModel>, bool);

    MCNAPI void _checkAllInvitesHandled(int);

    MCNAPI void _fetchPendingInvites();

    MCNAPI ::ui::ViewRequest _handleInvitationDecline(::UIPropertyBag*);

    MCNAPI void _registerBindings();

    MCNAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
