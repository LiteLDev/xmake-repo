#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/network/realms/OptInState.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/network/realms/OptInState.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsStoriesActionsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsStoriesActionsFacet> {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RealmsStoriesActionsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsStoriesActionsFacet> {
#else // @header-generator platform
class RealmsStoriesActionsFacet {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // RealmsStoriesActionsFacet inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class OptInTelemetryUserState : int {
        CanNotChangeRealmOptIn = 0,
        CanChangeRealmOptIn    = 1,
        IsOwner                = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MainMenuScreenModel>>                mMainMenuScreenModel;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesActionsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesActionsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsStoriesActionsFacet(
        std::shared_ptr<Realms::Stories::FacetStateManager>,
        std::shared_ptr<MainMenuScreenModel>
    );

    MCNAPI void _clearDeleteStatus(std::string const&);

    MCNAPI void _clearEventsStatus();

    MCNAPI void _clearFetchMembersStatus();

    MCNAPI void _clearFetchSessionsStatus();

    MCNAPI void _clearPostCommentStatus();

    MCNAPI void _clearPostStoryStatus();

    MCNAPI void _clearReportToClubOwnerStatus(std::string const&);

    MCNAPI void _clearReportToXboxStatus(std::string const&);

    MCNAPI void _clearSetViewedStatus(std::string const&);

    MCNAPI void _clearSettingsStatus();

    MCNAPI void _clearStoryFeedStatus();

    MCNAPI void _clearToggleLikeStatus(std::string const&);

    MCNAPI void _delete(std::string const&, std::string const&);

    MCNAPI void _fetchEvents();

    MCNAPI void _fetchMembers();

    MCNAPI void _fetchSessions();

    MCNAPI void _fetchStories();

    MCNAPI void _fetchStoriesSettings(std::string const&);

    MCNAPI void _fetchStoryComments(std::string const&);

    MCNAPI void _fetchStoryImage(std::string const&);

    MCNAPI void _initProvider(std::string const&);

    MCNAPI void _joinRealmFromInvite();

    MCNAPI void _loadStoriesSlice(int, int);

    MCNAPI void _openManageMembersScreen();

    MCNAPI void _postComment();

    MCNAPI void _postStoriesSettings(std::string const&);

    MCNAPI void _postStoriesSettingsOnExit(std::string const&);

    MCNAPI void _postStory();

    MCNAPI void _reportFeedItemToXbox(std::string const&, std::string const&, std::string const&, std::string const&);

    MCNAPI void _reportGamertagToXbox(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&
    );

    MCNAPI void _reportToClubOwner(std::string const&, std::string const&);

    MCNAPI void _resetProvider();

    MCNAPI void _setPlayerOptInStatusAndPostWithOptInTelemetry(
        std::string const&,
        ::Realms::OptInState,
        std::string const&,
        std::string const&,
        ::OreUI::RealmsStoriesActionsFacet::OptInTelemetryUserState
    );

    MCNAPI void _setRealmEventsState(bool);

    MCNAPI void _setRealmsCoordinatesState(bool);

    MCNAPI void _setRealmsNotificationState(bool);

    MCNAPI void _setRealmsTimelineRequirementState(bool);

    MCNAPI void _setRealmsTimelineState(bool);

    MCNAPI void _setViewed(std::string const&, std::string const&);

    MCNAPI void _toggleLike(std::string const&, std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[30]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Realms::Stories::FacetStateManager>, std::shared_ptr<MainMenuScreenModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class OptInTelemetryUserState : int {
        CanNotChangeRealmOptIn = 0,
        CanChangeRealmOptIn    = 1,
        IsOwner                = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MainMenuScreenModel>>                mMainMenuScreenModel;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesActionsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesActionsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsStoriesActionsFacet(
        ::std::shared_ptr<::Realms::Stories::FacetStateManager> realmsStoriesProvider,
        ::std::shared_ptr<::MainMenuScreenModel>                mainMenuScreenModel
    );

    MCAPI void _clearDeleteStatus(::std::string const& feedItemId);

    MCAPI void _clearEventsStatus();

    MCAPI void _clearFetchMembersStatus();

    MCAPI void _clearFetchSessionsStatus();

    MCAPI void _clearPostCommentStatus();

    MCAPI void _clearPostStoryStatus();

    MCAPI void _clearReportToClubOwnerStatus(::std::string const& feedItemId);

    MCAPI void _clearReportToXboxStatus(::std::string const& feedItemId);

    MCAPI void _clearSetViewedStatus(::std::string const& feedItemId);

    MCAPI void _clearSettingsStatus();

    MCAPI void _clearStoryFeedStatus();

    MCAPI void _clearToggleLikeStatus(::std::string const& feedItemId);

    MCAPI void _delete(::std::string const& feedItemId, ::std::string const& feedItemRoot);

    MCAPI void _fetchEvents();

    MCAPI void _fetchMembers();

    MCAPI void _fetchSessions();

    MCAPI void _fetchStories();

    MCAPI void _fetchStoriesSettings(::std::string const& realmId);

    MCAPI void _fetchStoryComments(::std::string const& storyId);

    MCAPI void _fetchStoryImage(::std::string const& storyId);

    MCAPI void _initProvider(::std::string const& worldId);

    MCAPI void _joinRealmFromInvite();

    MCAPI void _loadStoriesSlice(int fromIndex, int toIndex);

    MCAPI void _openManageMembersScreen();

    MCAPI void _postComment();

    MCAPI void _postStoriesSettings(::std::string const& realmId);

    MCAPI void _postStoriesSettingsOnExit(::std::string const& realmId);

    MCAPI void _postStory();

    MCAPI void _reportFeedItemToXbox(
        ::std::string const& feedItemId,
        ::std::string const& feedItemRoot,
        ::std::string const& reportReason,
        ::std::string const& comment
    );

    MCAPI void _reportGamertagToXbox(
        ::std::string const& gamertag,
        ::std::string const& feedItemId,
        ::std::string const& feedItemRoot,
        ::std::string const& reportReason,
        ::std::string const& comment
    );

    MCAPI void _reportToClubOwner(::std::string const& feedItemId, ::std::string const& feedItemRoot);

    MCAPI void _resetProvider();

    MCAPI void _setPlayerOptInStatusAndPostWithOptInTelemetry(
        ::std::string const&                                        realmId,
        ::Realms::OptInState                                        state,
        ::std::string const&                                        correlationId,
        ::std::string const&                                        action,
        ::OreUI::RealmsStoriesActionsFacet::OptInTelemetryUserState userState
    );

    MCAPI void _setRealmEventsState(bool state);

    MCAPI void _setRealmsCoordinatesState(bool state);

    MCAPI void _setRealmsNotificationState(bool state);

    MCAPI void _setRealmsTimelineRequirementState(bool state);

    MCAPI void _setRealmsTimelineState(bool state);

    MCAPI void _setViewed(::std::string const& feedItemId, ::std::string const& feedItemRoot);

    MCAPI void _toggleLike(::std::string const& feedItemId, ::std::string const& feedItemRoot);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::Realms::Stories::FacetStateManager> realmsStoriesProvider,
        ::std::shared_ptr<::MainMenuScreenModel>                mainMenuScreenModel
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    enum class OptInTelemetryUserState : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
