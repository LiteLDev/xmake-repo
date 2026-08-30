#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Option;
class PauseScreenModel;
class PermissionsScreenController;
class PlayerListEntry;
class SocialButtonScreenController;
class UserDataScreenController;
namespace Json { class Value; }
namespace Realms { struct World; }
namespace mce { class UUID; }
// clang-format on

class PauseScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ActorUniqueID>>                    mClientIds;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SocialButtonScreenController>> mSocialButtonScreenController;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                mCurrentClientId;
    ::ll::TypedStorage<1, 1, bool>                                           mPlayerListInitialized;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UserDataScreenController>>       mUserDataScreenController;
    ::ll::TypedStorage<8, 16, std::weak_ptr<PermissionsScreenController>>    mPermissionsScreenController;
    ::ll::TypedStorage<8, 16, std::shared_ptr<PauseScreenModel>>             mPauseScreenModel;
    ::ll::TypedStorage<8, 56, ::Social::ProfileImageOptions>                 mProfileImage;
    ::ll::TypedStorage<1, 1, bool>                                           mOldPauseStatus;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mOnPlayerListEntryRemovedSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mPauseOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mTrialModeUpdateSubscription;
    ::ll::TypedStorage<1, 1, bool>                                           mScoreboardShowing;
    ::ll::TypedStorage<1, 1, bool>                                           mErrorButtonHovered;
    ::ll::TypedStorage<4, 4, int>                                            mPreviousMaxPlayerCount;
    ::ll::TypedStorage<4, 4, int>                                            mFeedUnreadCount;
    ::ll::TypedStorage<1, 1, bool>                                           mRefreshScreen;
    ::ll::TypedStorage<1, 1, bool>                                           mIsTrialModeEnabled;
    ::ll::TypedStorage<1, 1, bool>                                           mOverlaySocialDrawerOnce;
    ::ll::TypedStorage<1, 1, bool>                                           mOldUnreadMessagesStatus;
    // NOLINTEND

public:
    // prevent constructor by default
    PauseScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PauseScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onTerminate();

    virtual void onInit();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual void addStaticScreenVars(::Json::Value&);

    virtual ::ui::SceneType getSceneType() const;

    virtual void onEntered();

    virtual std::string _getButtonADescription();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PauseScreenController(std::shared_ptr<PauseScreenModel>, bool);

    MCNAPI bool _isInviteButtonEnabled() const;

    MCNAPI bool _isInviteButtonVisible() const;

    MCNAPI bool _isMultiplayerLocked() const;

    MCNAPI bool _isProfileButtonAEnabled() const;

    MCNAPI bool _isProfileButtonBEnabled() const;

    MCNAPI void _navigateToPermissions(::ActorUniqueID const&);

    MCNAPI void
    _onPlayerListEntryRemoved(::PlayerListEntry const&, std::unordered_map<mce::UUID, PlayerListEntry> const&);

    MCNAPI void _pauseToggleOptionCallback(::Option const&);

    MCNAPI void _populateClientIds();

    MCNAPI bool _showRealmsButtons() const;

    MCNAPI bool _useMovedInviteButton() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<PauseScreenModel>, bool);
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

    MCNAPI void $onOpen();

    MCNAPI void $onTerminate();

    MCNAPI void $onInit();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI void $onEntered();

    MCNAPI std::string $_getButtonADescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
