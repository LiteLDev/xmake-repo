#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageButton.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageGamedrop.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageImage.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageItem.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SentimentQuestion.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/services/messaging/player_messaging/MessageStyle.h"
#include "mc/client/social/invites/Invite.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class IClientInstance;
class IEntitlementManager;
class PlayerMessagingService;
class RealmsAPI;
struct MessageData;
namespace Invites { struct Invite; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class InboxSession; }
namespace Realms { class InvitesService; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageButton.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageGamedrop.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SentimentQuestion.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/services/messaging/player_messaging/MessageStyle.h"
#include "mc/client/social/invites/Invite.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IEntitlementManager;
class PlayerMessagingService;
class RealmsAPI;
namespace Invites { struct Invite; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class InboxSession; }
namespace OreUI { struct MessageImage; }
namespace OreUI { struct MessageItem; }
namespace Realms { class InvitesService; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class InboxFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::InboxFacet> {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class InboxFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::InboxFacet> {
#else // @header-generator platform
class InboxFacet {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // InboxFacet inner types declare
    // clang-format off
    struct InboxMessageData;
#if defined(LL_PLAT_A) // @header-generator platform
    struct InboxSettings;
#else // @header-generator platform
#endif // @header-generator platform
    struct FacetInboxCategoryData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct InboxSettings;
#endif // @header-generator platform
    // clang-format on

    // InboxFacet inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct InboxMessageData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                             mId;
        ::ll::TypedStorage<8, 24, std::string>                             mWorldId;
        ::ll::TypedStorage<8, 8, long>                                     mDateReceived;
        ::ll::TypedStorage<8, 24, std::string>                             mDateString;
        ::ll::TypedStorage<8, 24, std::string>                             mTitle;
        ::ll::TypedStorage<8, 32, std::optional<std::string>>              mSubtitle;
        ::ll::TypedStorage<8, 24, std::string>                             mWorldName;
        ::ll::TypedStorage<8, 24, std::string>                             mSender;
        ::ll::TypedStorage<8, 24, std::string>                             mSenderXuid;
        ::ll::TypedStorage<8, 24, std::string>                             mContent;
        ::ll::TypedStorage<8, 24, std::string>                             mInvitationId;
        ::ll::TypedStorage<8, 24, std::string>                             mInstanceId;
        ::ll::TypedStorage<8, 24, std::string>                             mInboxCategory;
        ::ll::TypedStorage<8, 24, std::string>                             mReportId;
        ::ll::TypedStorage<8, 24, std::string>                             mSurface;
        ::ll::TypedStorage<8, 24, std::string>                             mTemplate;
        ::ll::TypedStorage<8, 16, std::optional<double>>                   mDaysLeft;
        ::ll::TypedStorage<1, 1, bool>                                     mRead;
        ::ll::TypedStorage<8, 24, std::vector<OreUI::MessageImage>>        mImages;
        ::ll::TypedStorage<8, 24, std::vector<OreUI::MessageButton>>       mButtons;
        ::ll::TypedStorage<8, 24, std::vector<OreUI::MessageItem>>         mItems;
        ::ll::TypedStorage<8, 184, std::optional<OreUI::MessageGamedrop>>  mGamedrop;
        ::ll::TypedStorage<8, 40, std::optional<OreUI::SentimentQuestion>> mSentimentQuestion;
        ::ll::UntypedStorage<4, 4>                                         mInvitationType;
        ::ll::UntypedStorage<4, 4>                                         mInvitationStatus;
        ::ll::TypedStorage<1, 1, ::PlayerMessaging::MessageStyle>          mStyle;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct InboxMessageData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                               mId;
        ::ll::TypedStorage<8, 32, ::std::string>                               mWorldId;
        ::ll::TypedStorage<8, 8, int64>                                        mDateReceived;
        ::ll::TypedStorage<8, 32, ::std::string>                               mDateString;
        ::ll::TypedStorage<8, 32, ::std::string>                               mTitle;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>              mSubtitle;
        ::ll::TypedStorage<8, 32, ::std::string>                               mWorldName;
        ::ll::TypedStorage<8, 32, ::std::string>                               mSender;
        ::ll::TypedStorage<8, 32, ::std::string>                               mSenderXuid;
        ::ll::TypedStorage<8, 32, ::std::string>                               mContent;
        ::ll::TypedStorage<8, 32, ::std::string>                               mInvitationId;
        ::ll::TypedStorage<8, 32, ::std::string>                               mInstanceId;
        ::ll::TypedStorage<8, 32, ::std::string>                               mInboxCategory;
        ::ll::TypedStorage<8, 32, ::std::string>                               mReportId;
        ::ll::TypedStorage<8, 32, ::std::string>                               mSurface;
        ::ll::TypedStorage<8, 32, ::std::string>                               mTemplate;
        ::ll::TypedStorage<8, 16, ::std::optional<double>>                     mDaysLeft;
        ::ll::TypedStorage<1, 1, bool>                                         mRead;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::MessageImage>>        mImages;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::MessageButton>>       mButtons;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::MessageItem>>         mItems;
        ::ll::TypedStorage<8, 232, ::std::optional<::OreUI::MessageGamedrop>>  mGamedrop;
        ::ll::TypedStorage<8, 40, ::std::optional<::OreUI::SentimentQuestion>> mSentimentQuestion;
        ::ll::TypedStorage<4, 4, ::Invites::Invite::InvitationType>            mInvitationType;
        ::ll::TypedStorage<4, 4, ::Invites::Invite::InvitationStatus>          mInvitationStatus;
        ::ll::TypedStorage<1, 1, ::PlayerMessaging::MessageStyle>              mStyle;
        // NOLINTEND
#else // @header-generator platform
    struct InboxMessageData {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        InboxMessageData& operator=(InboxMessageData const&);
        InboxMessageData();
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    public:
        // prevent constructor by default
        InboxMessageData();
#else // @header-generator platform
    struct FacetInboxCategoryData {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit InboxMessageData(::Invites::Invite const&);

        MCNAPI InboxMessageData(::OreUI::InboxFacet::InboxMessageData const&);

        MCNAPI InboxMessageData(::OreUI::InboxFacet::InboxMessageData&&);

        MCNAPI ::OreUI::InboxFacet::InboxMessageData& operator=(::OreUI::InboxFacet::InboxMessageData&&);

        MCNAPI ~InboxMessageData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Invites::Invite const&);

        MCNAPI void* $ctor(::OreUI::InboxFacet::InboxMessageData const&);

        MCNAPI void* $ctor(::OreUI::InboxFacet::InboxMessageData&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct InboxSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mShowMessageBadges;
        ::ll::TypedStorage<1, 1, bool> mShowInvitesBadges;
        ::ll::TypedStorage<1, 1, bool> mShowOnlyFriendInvites;
        ::ll::TypedStorage<1, 1, bool> mDirty;
        ::ll::TypedStorage<1, 1, bool> mSaved;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void toggleInvitesBadges();

        MCNAPI void toggleMessageBadges();

        MCNAPI void toggleOnlyFriendInvites();
        // NOLINTEND
    };

    struct FacetInboxCategoryData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mName;
        ::ll::TypedStorage<8, 24, std::string> mNameLoc;
        ::ll::TypedStorage<8, 8, ulong>        mUnreadCount;
        ::ll::UntypedStorage<8, 72>            mImageUrl;
        // NOLINTEND

    public:
        // prevent constructor by default
        FacetInboxCategoryData& operator=(FacetInboxCategoryData const&);
        FacetInboxCategoryData(FacetInboxCategoryData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~FacetInboxCategoryData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<OreUI::InboxSession>> mInboxSession;
    ::ll::TypedStorage<1, 1, bool>                                  mMarketplacePassSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    InboxFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InboxFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InboxFacet(
        ::IClientInstance&,
        std::weak_ptr<RealmsAPI>,
        ::PlayerMessagingService&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::InvitesService>>
    );

    MCNAPI void acceptInvitation(std::string const&);

    MCNAPI void deleteAllRead();

    MCNAPI void deleteNotification(std::string const&, std::string const&);

    MCNAPI std::vector<OreUI::InboxFacet::FacetInboxCategoryData> const& getCategoryData();

    MCNAPI std::vector<OreUI::InboxFacet::InboxMessageData> const& getData() const;

    MCNAPI bool getRealmsSubscriber() const;

    MCNAPI ::OreUI::InboxFacet::InboxSettings const& getSettings() const;

    MCNAPI bool isMarketplacePassSubscriber();

    MCNAPI void markAllRead();

    MCNAPI bool messagingServiceFailed() const;

    MCNAPI void rejectInvitation(std::string const&);

    MCNAPI void reloadInvites();

    MCNAPI void reportClick(std::string const&, std::string const&, std::string const&);

    MCNAPI void requestMessages(std::string const&);

    MCNAPI void saveSettings();

    MCNAPI void setNotificationRead(std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    InviteSort(::OreUI::InboxFacet::InboxMessageData const&, ::OreUI::InboxFacet::InboxMessageData const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[14]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IClientInstance&,
        std::weak_ptr<RealmsAPI>,
        ::PlayerMessagingService&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::InvitesService>>
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
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit InboxMessageData(::Invites::Invite const& invite);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::Invites::Invite const& invite);
        // NOLINTEND
    };

    struct FacetInboxCategoryData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>          mName;
        ::ll::TypedStorage<8, 32, ::std::string>          mNameLoc;
        ::ll::TypedStorage<8, 8, uint64>                  mUnreadCount;
        ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath> mImageUrl;
        // NOLINTEND
    };

    struct InboxSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mShowMessageBadges;
        ::ll::TypedStorage<1, 1, bool> mShowInvitesBadges;
        ::ll::TypedStorage<1, 1, bool> mShowOnlyFriendInvites;
        ::ll::TypedStorage<1, 1, bool> mDirty;
        ::ll::TypedStorage<1, 1, bool> mSaved;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void toggleInvitesBadges();

        MCAPI void toggleMessageBadges();

        MCAPI void toggleOnlyFriendInvites();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::InboxSession>> mInboxSession;
    ::ll::TypedStorage<1, 1, bool>                                      mMarketplacePassSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    InboxFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InboxFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InboxFacet(
        ::IClientInstance&                                         client,
        ::std::weak_ptr<::RealmsAPI>                               realmsApi,
        ::PlayerMessagingService&                                  service,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>       entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::Realms::InvitesService>    invitesService
    );

    MCAPI void acceptInvitation(::std::string const& instanceId);

    MCAPI void deleteAllRead();

    MCAPI void deleteNotification(::std::string const& messageId, ::std::string const& instanceId);

    MCAPI ::std::vector<::OreUI::InboxFacet::FacetInboxCategoryData> const& getCategoryData();

    MCAPI ::std::vector<::OreUI::InboxFacet::InboxMessageData> const& getData() const;

    MCAPI bool getRealmsSubscriber() const;

    MCAPI ::OreUI::InboxFacet::InboxSettings const& getSettings() const;

    MCFOLD bool isMarketplacePassSubscriber();

    MCAPI void markAllRead();

    MCAPI bool messagingServiceFailed() const;

    MCAPI void rejectInvitation(::std::string const& instanceId);

    MCAPI void reloadInvites();

    MCAPI void
    reportClick(::std::string const& messageId, ::std::string const& instanceId, ::std::string const& buttonId);

    MCAPI void requestMessages(::std::string const& categoryId);

    MCAPI void saveSettings();

    MCAPI void setNotificationRead(::std::string const& instanceId);
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
        ::IClientInstance&                                         client,
        ::std::weak_ptr<::RealmsAPI>                               realmsApi,
        ::PlayerMessagingService&                                  service,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>       entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::Realms::InvitesService>    invitesService
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
#else // @header-generator platform
    struct InboxSettings {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
