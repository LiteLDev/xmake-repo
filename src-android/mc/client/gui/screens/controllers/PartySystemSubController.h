#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/social/IToastEventListener.h"
#include "mc/client/social/ToastMessageType.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/network/packet/PartyDestinationCookieIntent.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class ToastManager;
class ToastMessage;
namespace Parties { class PartySystem; }
namespace Parties { struct PartyDestinationExternal; }
namespace Parties { struct PartyDestinationGathering; }
namespace Parties { struct PartyDestinationMenus; }
namespace Parties { struct PartyDestinationRealm; }
namespace Parties { struct PartyDestinationXblP2P; }
namespace Parties { struct PartyEventAcceptInviteFailed; }
namespace Parties { struct PartyEventCreateFailed; }
namespace Parties { struct PartyEventInviteExpired; }
namespace Parties { struct PartyEventJoinFailed; }
namespace Parties { struct PartyEventJoinablePartyExpired; }
namespace Parties { struct PartyEventJoinedParty; }
namespace Parties { struct PartyEventLeaderChanged; }
namespace Parties { struct PartyEventLeaveFailed; }
namespace Parties { struct PartyEventLeftParty; }
namespace Parties { struct PartyEventMemberJoined; }
namespace Parties { struct PartyEventMemberLeft; }
namespace Parties { struct PartyEventRemoveMemberFailed; }
namespace Parties { struct PartyEventSendInviteFailed; }
namespace Parties { struct PartyEventSetLeaderFailed; }
namespace Parties { struct PartyReceivedInvite; }
// clang-format on

class PartySystemSubController : public ::MinecraftScreenController, public ::IToastEventListener {
public:
    // PartySystemSubController inner types declare
    // clang-format off
    struct DestinationCookieToastRequest;
    // clang-format on

    // PartySystemSubController inner types define
    struct DestinationCookieToastRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::PartyDestinationCookieIntent> mIntent;
        ::ll::TypedStorage<8, 24, std::string>                   mDestinationName;
        // NOLINTEND

    public:
        // prevent constructor by default
        DestinationCookieToastRequest& operator=(DestinationCookieToastRequest const&);
        DestinationCookieToastRequest(DestinationCookieToastRequest const&);
        DestinationCookieToastRequest();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartyInviteUpdateSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartyEventSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartyTravelSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartyInvalidDestinationSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartyDestinationCookieUpdatedSubscription;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::UntypedStorage<8, 24> mPartySystem;
    ::ll::TypedStorage<8, 8, ::ToastManager&> mToastManager;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long, std::ratio<60, 1>>> mServerSlotReservationTime;
    ::ll::TypedStorage<8, 40, std::optional<PartySystemSubController::DestinationCookieToastRequest>> mPendingDestinationCookieToast;
    ::ll::TypedStorage<1, 1, bool> mHasActiveDestinationCookieToast;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PartySystemSubController& operator=(PartySystemSubController const&);
    PartySystemSubController(PartySystemSubController const&);
    PartySystemSubController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartySystemSubController();

    virtual void handleToastEvent(::IToastEventListener::ToastEventType const, ::ToastMessage const);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PartySystemSubController(
        std::shared_ptr<MinecraftScreenModel>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Parties::PartySystem>>,
        ::ToastManager&
    );

    MCNAPI void _handleTravelToastDeclined();

    MCNAPI void _showDestinationCookieToast(::PartySystemSubController::DestinationCookieToastRequest const&);

    MCNAPI void _showSnackbar(std::string const, std::string const);

    MCNAPI void _showTravelToast(::ToastMessageType, std::string const&, std::string const&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MinecraftScreenModel>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Parties::PartySystem>>,
        ::ToastManager&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $handleToastEvent(::IToastEventListener::ToastEventType const, ::ToastMessage const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
