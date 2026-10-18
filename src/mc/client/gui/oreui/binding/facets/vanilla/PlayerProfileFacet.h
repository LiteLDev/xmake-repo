#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/PartyPresence.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPresence.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/gui/oreui/interface/ProfileImageState.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/client/gui/oreui/resources/AllowListQRCode.h"
#include "mc/client/social/PlayerProfileData.h"
#include "mc/client/social/PlayerProfileState.h"
#include "mc/client/social/RelationToCurrentUser.h"
#include "mc/client/social/RelationshipStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Parties { class IPartyProvider; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class ProfileSystem; }
namespace Social { struct PlayerProfile; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/PartyPresence.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPresence.h"
#include "mc/client/gui/oreui/interface/ProfileImageState.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/client/gui/oreui/resources/AllowListQRCode.h"
#include "mc/client/social/PlayerProfileData.h"
#include "mc/client/social/PlayerProfileState.h"
#include "mc/client/social/RelationToCurrentUser.h"
#include "mc/client/social/RelationshipStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Parties { class IPartyProvider; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class ProfileSystem; }
namespace Social { struct PlayerProfile; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class PlayerProfileFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::PlayerProfileFacet> {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class PlayerProfileFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::PlayerProfileFacet> {
#else // @header-generator platform
class PlayerProfileFacet {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // PlayerProfileFacet inner types declare
    // clang-format off
    struct PlayerProfileDataWrapper;
    struct PlayerProfileWrapper;
    // clang-format on

    // PlayerProfileFacet inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct PlayerProfileDataWrapper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 456>                               playerProfileData;
        ::ll::TypedStorage<8, 112, ::OreUI::AllowListProfileImage> profileImage;
        ::ll::UntypedStorage<8, 72>                                platformProfilePic;
        ::ll::TypedStorage<8, 112, ::OreUI::AllowListProfileImage> avatar;
        ::ll::TypedStorage<4, 4, ::OreUI::ProfileImageState>       avatarState;
        ::ll::TypedStorage<8, 72, ::OreUI::AllowListQRCode>        qrCode;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> profileSubscription;
        ::ll::TypedStorage<1, 1, bool>                             isInSameGame;
        ::ll::TypedStorage<4, 4, ::OreUI::PartyPresence>           partyPresence;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct PlayerProfileDataWrapper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 584, ::Social::PlayerProfileData>    playerProfileData;
        ::ll::TypedStorage<8, 144, ::OreUI::AllowListProfileImage> profileImage;
        ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>          platformProfilePic;
        ::ll::TypedStorage<8, 144, ::OreUI::AllowListProfileImage> avatar;
        ::ll::TypedStorage<4, 4, ::OreUI::ProfileImageState>       avatarState;
        ::ll::TypedStorage<8, 96, ::OreUI::AllowListQRCode>        qrCode;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> profileSubscription;
        ::ll::TypedStorage<1, 1, bool>                             isInSameGame;
        ::ll::TypedStorage<4, 4, ::OreUI::PartyPresence>           partyPresence;
        // NOLINTEND
#else // @header-generator platform
    struct PlayerProfileDataWrapper {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        PlayerProfileDataWrapper& operator=(PlayerProfileDataWrapper const&);
        PlayerProfileDataWrapper(PlayerProfileDataWrapper const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::RelationshipStatus favoriteStatus() const;

        MCNAPI std::string const& getOfflineName() const;

        MCNAPI ::OreUI::PartyPresence getPartyPresence() const;

        MCNAPI std::string const& getPlatformId() const;

        MCNAPI std::string const& getPlatformName() const;

        MCNAPI std::string const& getPlayingOnRealmId() const;

        MCNAPI std::string const& getPlayingOnServerId() const;

        MCNAPI ::OreUI::SocialPresence getPresence() const;

        MCNAPI std::string const& getPresenceMessage() const;

        MCNAPI std::string const& getRealName() const;

        MCNAPI ::Social::RelationToCurrentUser getRelationship() const;

        MCNAPI std::string const& getTitleName() const;

        MCNAPI std::string const& getUrl() const;

        MCNAPI std::string const& getXblName() const;

        MCNAPI std::string const& getXuid() const;

        MCNAPI bool isBlocked() const;

        MCNAPI bool isMuted() const;

        MCNAPI ~PlayerProfileDataWrapper();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct PlayerProfileWrapper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::Social::PlayerProfileState> state;
        ::ll::UntypedStorage<8, 856>                            data;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlayerProfileWrapper& operator=(PlayerProfileWrapper const&);
        PlayerProfileWrapper(PlayerProfileWrapper const&);
        PlayerProfileWrapper();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                          mDirty;
    ::ll::TypedStorage<1, 1, bool>                                                          mImagesDirty;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::PlayerProfileFacet::PlayerProfileWrapper>> mTrackedProfiles;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::ProfileSystem>>                       mProfileSystem;
    ::ll::UntypedStorage<8, 24>                                                             mUserManager;
    ::ll::UntypedStorage<8, 24>                                                             mResourceAllowList;
    ::ll::UntypedStorage<8, 24>                                                             mMultiplayerServiceManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                              mAsyncImageSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                              mImageUpdatedSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                              mBuildGameListSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                              mPartySubscription;
    ::ll::UntypedStorage<8, 24>                                                             mPartyProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerProfileFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerProfileFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerProfileFacet(
        ::Bedrock::NonOwnerPointer<Parties::IPartyProvider>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>>,
        std::shared_ptr<Social::ProfileSystem>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );

    MCNAPI ::OreUI::PlayerProfileFacet::PlayerProfileWrapper& _updateTrackedProfile(::Social::PlayerProfile const&);

    MCNAPI std::vector<OreUI::PlayerProfileFacet::PlayerProfileWrapper> const& getTrackedProfiles() const;

    MCNAPI void refetchProfile(std::string const&, std::string const&);

    MCNAPI void subscribeToProfile(std::string const&, std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[22]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<Parties::IPartyProvider>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>>,
        std::shared_ptr<Social::ProfileSystem>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
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
        MCAPI ::RelationshipStatus favoriteStatus() const;

        MCFOLD ::std::string const& getOfflineName() const;

        MCAPI ::OreUI::PartyPresence getPartyPresence() const;

        MCFOLD ::std::string const& getPlatformId() const;

        MCFOLD ::std::string const& getPlatformName() const;

        MCAPI ::std::string const& getPlayingOnRealmId() const;

        MCAPI ::std::string const& getPlayingOnServerId() const;

        MCAPI ::OreUI::SocialPresence getPresence() const;

        MCAPI ::std::string const& getPresenceMessage() const;

        MCFOLD ::std::string const& getRealName() const;

        MCAPI ::Social::RelationToCurrentUser getRelationship() const;

        MCFOLD ::std::string const& getTitleName() const;

        MCFOLD ::std::string const& getUrl() const;

        MCFOLD ::std::string const& getXblName() const;

        MCFOLD ::std::string const& getXuid() const;

        MCAPI bool isBlocked() const;

        MCAPI bool isMuted() const;
        // NOLINTEND
    };

    struct PlayerProfileWrapper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::Social::PlayerProfileState>                            state;
        ::ll::TypedStorage<8, 1096, ::OreUI::PlayerProfileFacet::PlayerProfileDataWrapper> data;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlayerProfileWrapper();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI PlayerProfileWrapper(
            ::Social::PlayerProfileState                            inState,
            ::OreUI::PlayerProfileFacet::PlayerProfileDataWrapper&& inData
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void*
        $ctor(::Social::PlayerProfileState inState, ::OreUI::PlayerProfileFacet::PlayerProfileDataWrapper&& inData);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                              mDirty;
    ::ll::TypedStorage<1, 1, bool>                                                              mImagesDirty;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::PlayerProfileFacet::PlayerProfileWrapper>> mTrackedProfiles;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::ProfileSystem>>                       mProfileSystem;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>>            mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>>       mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>>
                                                                                     mMultiplayerServiceManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mAsyncImageSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mImageUpdatedSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mBuildGameListSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mPartySubscription;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>> mPartyProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerProfileFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerProfileFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerProfileFacet(
        ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>              partyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>              userManager,
        ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> multiplayerServiceManager,
        ::std::shared_ptr<::Social::ProfileSystem>                         profileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>         resourceAllowList
    );

    MCAPI ::OreUI::PlayerProfileFacet::PlayerProfileWrapper&
    _updateTrackedProfile(::Social::PlayerProfile const& playerProfile);

    MCFOLD ::std::vector<::OreUI::PlayerProfileFacet::PlayerProfileWrapper> const& getTrackedProfiles() const;

    MCAPI void refetchProfile(::std::string const& xuid, ::std::string const& platformId);

    MCAPI void subscribeToProfile(::std::string const& xuid, ::std::string const& platformId);
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
        ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>              partyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>              userManager,
        ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> multiplayerServiceManager,
        ::std::shared_ptr<::Social::ProfileSystem>                         profileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>         resourceAllowList
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
#else // @header-generator platform
    struct PlayerProfileWrapper {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
