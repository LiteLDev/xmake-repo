#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/network/realms/OptInState.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

namespace OreUI {

class RealmsStoriesActionsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsStoriesActionsFacet> {
public:
    // RealmsStoriesActionsFacet inner types define
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
};

} // namespace OreUI
