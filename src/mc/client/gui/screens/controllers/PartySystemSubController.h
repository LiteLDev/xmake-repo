#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
// clang-format on

class PartySystemSubController : public ::MinecraftScreenController, public ::IToastEventListener {
#else // @header-generator platform
class PartySystemSubController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // PartySystemSubController inner types declare
    // clang-format off
    struct DestinationCookieToastRequest;
    // clang-format on

    // PartySystemSubController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct DestinationCookieToastRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::PartyDestinationCookieIntent> mIntent;
        ::ll::TypedStorage<8, 32, ::std::string>                 mDestinationName;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartyInviteUpdateSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartyEventSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartyTravelSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartyInvalidDestinationSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartyDestinationCookieUpdatedSubscription;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                    mTaskGroup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Parties::PartySystem>> mPartySystem;
    ::ll::TypedStorage<8, 8, ::ToastManager&>                                        mToastManager;
    ::ll::TypedStorage<4, 4, ::std::chrono::minutes>                                 mServerSlotReservationTime;
    ::ll::TypedStorage<8, 48, ::std::optional<::PartySystemSubController::DestinationCookieToastRequest>>
                                   mPendingDestinationCookieToast;
    ::ll::TypedStorage<1, 1, bool> mHasActiveDestinationCookieToast;
    // NOLINTEND

public:
    // prevent constructor by default
    PartySystemSubController& operator=(PartySystemSubController const&);
    PartySystemSubController(PartySystemSubController const&);
    PartySystemSubController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartySystemSubController() /*override*/ = default;

    virtual void
    handleToastEvent(::IToastEventListener::ToastEventType const eventType, ::ToastMessage const msg) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PartySystemSubController(
        ::std::shared_ptr<::MinecraftScreenModel>             minecraftScreenModel,
        ::Bedrock::NotNullNonOwnerPtr<::Parties::PartySystem> partySystem,
        ::ToastManager&                                       toastManager
    );

    MCAPI void _handleTravelToastDeclined();

    MCAPI void _showDestinationCookieToast(::PartySystemSubController::DestinationCookieToastRequest const& request);

    MCAPI void _showSnackbar(::std::string const locStringKey, ::std::string const localizationString);

    MCAPI void _showTravelToast(
        ::ToastMessageType   toastType,
        ::std::string const& toastTitle,
        ::std::string const& toastSubtitle,
        bool                 showWorldIcon
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>             minecraftScreenModel,
        ::Bedrock::NotNullNonOwnerPtr<::Parties::PartySystem> partySystem,
        ::ToastManager&                                       toastManager
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $handleToastEvent(::IToastEventListener::ToastEventType const eventType, ::ToastMessage const msg);
    // NOLINTEND
#else // @header-generator platform
    struct DestinationCookieToastRequest {};
#endif // @header-generator platform
#endif // @header-generator platform
};
