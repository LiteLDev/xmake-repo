#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/RealmPlayer.h"
#include "mc/client/network/realms/RealmsAPI.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/social/PlatformUserProfileData.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class DropdownScreenController;
class MainMenuScreenModel;
class PlatformMultiplayerRestrictions;
class ProgressHandler;
class UIPropertyBag;
struct ToggleChangeEventData;
namespace Json { class Value; }
namespace Realms { struct Player; }
// clang-format on

class RealmsAllowListScreenController : public ::MainMenuScreenController {
public:
    // RealmsAllowListScreenController inner types define
    enum class RealmPlayerList : int {
        InvalidMemberList    = -1,
        MembersList          = 0,
        InvitedFriendsList   = 1,
        UninvitedFriendsList = 2,
        BlockedPlayersList   = 3,
    };

    using InviteList = std::map<std::string, RealmsAPI::InviteAction>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 168, ::RealmPlayer> EMPTY_PLAYER;
    ::ll::TypedStorage<1, 1, bool> mLoading;
    ::ll::TypedStorage<1, 1, bool> mListsLoaded;
    ::ll::UntypedStorage<1, 14> mFromExistingWorld;
    ::ll::UntypedStorage<8, 48> mFollowUpActionAfterCreation;
    ::ll::TypedStorage<1, 1, bool> mRefreshUI;
    ::ll::TypedStorage<1, 1, bool> mClickedRefresh;
    ::ll::TypedStorage<8, 608, ::Realms::World> mWorld;
    ::ll::TypedStorage<1, 1, bool> mInvitesSent;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastRefreshUpdate;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastFriendListUpdate;
    ::ll::TypedStorage<1, 1, bool> mNewWorld;
    ::ll::TypedStorage<1, 1, bool> mPermissionsDirty;
    ::ll::TypedStorage<1, 1, bool> mMembersListDirty;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastTryJoin;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ProgressHandler>> mProgressHandler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<8, 16, std::shared_ptr<DropdownScreenController>> mMembersDropdownController;
    ::ll::TypedStorage<8, 16, std::shared_ptr<DropdownScreenController>> mInvitedFriendsDropdownController;
    ::ll::TypedStorage<4, 4, int> mUninvitedFriendsPageIndex;
    ::ll::TypedStorage<4, 4, int> mInvitedFriendsPageIndex;
    ::ll::TypedStorage<4, 4, int> mMembersPageIndex;
    ::ll::TypedStorage<4, 4, int> mBlockedPlayersPageIndex;
    ::ll::TypedStorage<1, 1, ::PlayerPermissionLevel> mDefaultPermission;
    ::ll::TypedStorage<1, 1, ::PlayerPermissionLevel> mDefaultPermissionOld;
    ::ll::TypedStorage<8, 24, std::string> mUninvitedFriendsLastFilter;
    ::ll::TypedStorage<8, 24, std::string> mInvitedFriendsLastFilter;
    ::ll::TypedStorage<8, 24, std::string> mMembersLastFilter;
    ::ll::TypedStorage<8, 24, std::string> mBlockedPlayersLastFilter;
    ::ll::TypedStorage<4, 4, int> mPreviousMembersPageIndex;
    ::ll::TypedStorage<4, 4, int> mPreviousInvitedFriendsPageIndex;
    ::ll::TypedStorage<4, 4, int> mPreviousUninvitedFriendsPageIndex;
    ::ll::TypedStorage<4, 4, int> mPreviousBlockedPlayersPageIndex;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, RealmPlayer>> mCompleteWorldPlayerList;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, Social::PlatformUserProfileData>> mLinkedPlatformAccounts;
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mLinkedAccountLoadCounter;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mCurrentMembersList;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mFullMembersList;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mFilteredMembersList;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mCurrentInvitedFriendsList;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mFullInvitedFriendsList;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mFilteredInvitedFriendsList;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mCurrentUninvitedFriendsList;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mFullUninvitedFriendsList;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mFilteredUninvitedFriendsList;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mCurrentBlockedPlayersList;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mFullBlockedPlayersList;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mFilteredBlockedPlayersList;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mPendingXuidsForLinkedAccounts;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>> mPreviouslyObservedXboxLiveFriends;
    ::ll::TypedStorage<8, 24, std::string> mSharePopupBButtonDescription;
    ::ll::TypedStorage<4, 4, uint> mCurrentUpdatedPlayers;
    ::ll::TypedStorage<1, 1, bool> mShowLinkedAccounts;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsAllowListScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsAllowListScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onLeave();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual bool _getGamepadHelperVisible() const;

    virtual std::string _getButtonBDescription();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsAllowListScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        ::Realms::World const&,
        bool const&,
        std::function<void()>,
        bool
    );

    MCNAPI void _buildPlayerList();

    MCNAPI void _clearFromFriendLists(std::string const&);

    MCNAPI void _finalizeLinkedAccountLoading();

    MCNAPI std::map<std::string, RealmsAPI::InviteAction> _getInvitesToSend() const;

    MCNAPI ::RealmPlayer* _getRealmPlayerAtIndex(int const, ::RealmsAllowListScreenController::RealmPlayerList const);

    MCNAPI ::RealmsAllowListScreenController::RealmPlayerList const
    _getRealmPlayerListFromCollection(::UIPropertyBag const*) const;

    MCNAPI void _handleDoesNotHavePermission(std::function<void()>);

    MCNAPI void _handlePlayerInvite(::RealmPlayer&);

    MCNAPI void _initializePlayerList(std::function<void()>);

    MCNAPI void _joinRealm();

    MCNAPI void _registerBindings();

    MCNAPI void _requestPlatformGamerpic(::Social::PlatformUserProfileData const&);

    MCNAPI void _sendInvites(std::function<void()>);

    MCNAPI void _sortPlayerList();

    MCNAPI void _updateLinkedAccountLoading();

    MCNAPI void _updatePlayerList(std::vector<Realms::Player> const&, std::vector<Realms::Player> const&);

    MCNAPI void _updatePlayerlistModel(std::string const&, ::RealmsAllowListScreenController::RealmPlayerList, bool);

    MCNAPI void sendInvitesWithProgress(std::function<void()>);

    MCNAPI void sendUserPermission(std::string const&, ::PlayerPermissionLevel const, ::PlayerPermissionLevel const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int& mRetryTimeout();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(std::shared_ptr<MainMenuScreenModel>, ::Realms::World const&, bool const&, std::function<void()>, bool);
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

    MCNAPI void $onLeave();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI bool $_getGamepadHelperVisible() const;

    MCNAPI std::string $_getButtonBDescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
