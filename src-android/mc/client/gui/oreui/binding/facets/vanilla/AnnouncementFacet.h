#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageButton.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageGamedrop.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageImage.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/services/messaging/player_messaging/MessageStyle.h"
#include "mc/client/services/messaging/player_messaging/MessagingFacetStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class PlayerMessagingService;
struct MessageData;
namespace OreUI { class IResourceAllowList; }
// clang-format on

namespace OreUI {

class AnnouncementFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::AnnouncementFacet> {
public:
    // AnnouncementFacet inner types declare
    // clang-format off
    struct FacetMessage;
    struct FacetMessageList;
    // clang-format on

    // AnnouncementFacet inner types define
    struct FacetMessage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                            mId;
        ::ll::TypedStorage<8, 24, std::string>                            mInstanceId;
        ::ll::TypedStorage<8, 24, std::string>                            mSurface;
        ::ll::TypedStorage<8, 24, std::string>                            mTemplate;
        ::ll::TypedStorage<8, 24, std::string>                            mHeader;
        ::ll::TypedStorage<8, 32, std::optional<std::string>>             mSubtitle;
        ::ll::TypedStorage<8, 24, std::string>                            mBody;
        ::ll::TypedStorage<8, 24, std::vector<OreUI::MessageImage>>       mImages;
        ::ll::TypedStorage<8, 24, std::vector<OreUI::MessageButton>>      mButtons;
        ::ll::TypedStorage<8, 184, std::optional<OreUI::MessageGamedrop>> mGamedrop;
        ::ll::TypedStorage<1, 1, ::PlayerMessaging::MessageStyle>         mStyle;
        // NOLINTEND

    public:
        // prevent constructor by default
        FacetMessage& operator=(FacetMessage const&);
        FacetMessage(FacetMessage const&);
        FacetMessage();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~FacetMessage();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct FacetMessageList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<OreUI::AnnouncementFacet::FacetMessage>> mMessages;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::PlayerMessagingService&> mMessageService;
    ::ll::UntypedStorage<8, 24> mResourceAllowList;
    ::ll::TypedStorage<1, 1, ::PlayerMessaging::MessagingFacetStatus> mStatus;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastRefresh;
    ::ll::TypedStorage<8, 24, ::OreUI::AnnouncementFacet::FacetMessageList> mFacetMessageData;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    AnnouncementFacet& operator=(AnnouncementFacet const&);
    AnnouncementFacet(AnnouncementFacet const&);
    AnnouncementFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnnouncementFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AnnouncementFacet(
        ::PlayerMessagingService&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>> const&
    );

    MCNAPI void reportClick(std::string const&, std::string const&, std::string const&, std::string const&);

    MCNAPI void reportDismiss(std::string const&, std::string const&, std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[31]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::PlayerMessagingService&, ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>> const&);
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
