#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/InboxIconFlightingState.h"
#include "mc/certificates/identity/edu/CredentialsObserver.h"
#include "mc/certificates/identity/edu/GenericCredentialsEvent.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/services/messaging/MessageData.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/client/social/UserListObserver.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/network/ExperiencePromotion.h"

// auto generated forward declare list
// clang-format off
class ButtonArtSurface;
class IEntitlementManager;
class InboxSurface;
class MainMenuScreenModel;
class SocialButtonScreenController;
namespace Json { class Value; }
namespace Social { class User; }
// clang-format on

class StartMenuScreenController : public ::MainMenuScreenController, public ::edu::auth::CredentialsObserver {
public:
    // StartMenuScreenController inner types declare
    // clang-format off
    class SignOutObserver;
    // clang-format on

    // StartMenuScreenController inner types define
    class SignOutObserver : public ::Social::UserListObserver {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::weak_ptr<StartMenuScreenController>> mStartMenuScreenController;
        // NOLINTEND

    public:
        // prevent constructor by default
        SignOutObserver();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~SignOutObserver();

        virtual void onUserRemoved(std::shared_ptr<Social::User> const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $onUserRemoved(std::shared_ptr<Social::User> const&);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<SocialButtonScreenController>> mSocialButtonScreenController;
    ::ll::UntypedStorage<8, 24> mEntitlementManager;
    ::ll::TypedStorage<1, 1, bool> mDirty;
    ::ll::TypedStorage<4, 4, int> mPendingInvites;
    ::ll::TypedStorage<1, 1, bool> mSigningIn;
    ::ll::TypedStorage<1, 1, bool> mNewStoreOffersAvailable;
    ::ll::TypedStorage<1, 1, bool> mErrorButtonHovered;
    ::ll::TypedStorage<4, 4, int> mAnimationCount;
    ::ll::TypedStorage<8, 24, std::string> mAnimatedMessage;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastSigningInAnimation;
    ::ll::TypedStorage<8, 8, long> mNextContentFetchTime;
    ::ll::TypedStorage<8, 8, long> mNextImportTime;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>> mExistenceTracker;
    ::ll::TypedStorage<8, 8, std::unique_ptr<StartMenuScreenController::SignOutObserver>> mSignOutObserver;
    ::ll::TypedStorage<8, 56, ::Social::ProfileImageOptions> mProfileImage;
    ::ll::TypedStorage<1, 1, bool> mProfileImageLoaded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mProfileImageChangedSubscription;
    ::ll::TypedStorage<1, 1, bool> mSetFocusToSignInButton;
    ::ll::TypedStorage<1, 1, bool> mCapabilitiesChanged;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::UntypedStorage<8, 24> mStoreButtonArtSurface;
    ::ll::UntypedStorage<8, 24> mPlayButtonArtSurface;
    ::ll::TypedStorage<8, 672, std::optional<MessageData>> mStoreButtonArtData;
    ::ll::TypedStorage<8, 672, std::optional<MessageData>> mPlayButtonArtData;
    ::ll::TypedStorage<1, 1, bool> mStoreButtonHovered;
    ::ll::TypedStorage<1, 1, bool> mPlayButtonHovered;
    ::ll::UntypedStorage<8, 24> mInboxSurface;
    ::ll::TypedStorage<4, 4, int> mUnreadInvites;
    ::ll::TypedStorage<1, 1, bool> mInitialInboxAnimationPlayed;
    ::ll::TypedStorage<1, 1, bool> mShowingNewPlayerFlowButtons;
    ::ll::TypedStorage<4, 4, ::InboxIconFlightingState> mInboxIconState;
    ::ll::TypedStorage<1, 1, bool> mNeedToPlayMainButtonsShowAnimation;
    ::ll::TypedStorage<8, 192, std::optional<ExperiencePromotion>> mActivePromotion;
    ::ll::TypedStorage<1, 1, bool> mOwnsRealmsSubscription;
    ::ll::TypedStorage<1, 1, bool> mRealmsFetched;
    ::ll::TypedStorage<4, 4, ::Realms::GenericStatus> mRealmsStatus;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPendingInviteCountSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPrimaryUserSignInSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mTrialModeUpdateSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mInboxIconStateSubscription;
    ::ll::TypedStorage<1, 1, bool> mIsTrialModeEnabled;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    StartMenuScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StartMenuScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void queueTitleNarration();

    virtual void onInit();

    virtual void onCreation();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual void handleLicenseChanged();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual ::ui::SceneType getSceneType() const;

    virtual void onEntered();

    virtual std::string _getButtonXDescription();

    virtual std::string _getButtonYDescription();

    virtual ::ui::ViewRequest promptConnect(bool, std::function<void(Social::UserPlatformConnectionResult)>);

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<edu::auth::CredsAuthComplete> const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StartMenuScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>
    );

    MCNAPI bool _YHelperVisible() const;

    MCNAPI void _fetchUserOrientedContent(bool const);

    MCNAPI bool _isProfileButtonAEnabled() const;

    MCNAPI bool _isProfileButtonBEnabled() const;

    MCNAPI bool _isSignInVisible();

    MCNAPI bool _realmsPromoEnabled() const;

    MCNAPI void _registerBindings();

    MCNAPI void _updateProfileImage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
        $ctor(std::shared_ptr<MainMenuScreenModel>, ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>);
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

    MCNAPI void $queueTitleNarration();

    MCNAPI void $onInit();

    MCNAPI void $onCreation();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);

    MCNAPI void $handleLicenseChanged();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI void $onEntered();

    MCNAPI std::string $_getButtonXDescription();

    MCNAPI std::string $_getButtonYDescription();

    MCNAPI ::ui::ViewRequest $promptConnect(bool, std::function<void(Social::UserPlatformConnectionResult)>);

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<edu::auth::CredsAuthComplete> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
