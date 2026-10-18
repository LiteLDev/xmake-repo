#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/PartyReceivedInviteData.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/social/PlayerProfile.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Parties { class IPartyProvider; }
namespace Parties { class PartyReceivedInviteList; }
namespace Social { class ProfileSystem; }
namespace World { class WorldPlayerListTracker; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct PartyReceivedInviteData; }
namespace Parties { class IPartyProvider; }
namespace Parties { class PartyReceivedInviteList; }
namespace Social { class ProfileSystem; }
namespace Social { struct PlayerProfile; }
namespace World { class WorldPlayerListTracker; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class PartyReceivedInviteListFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::PartyReceivedInviteListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::ProfileSystem>>                 mProfileSystem;
    ::ll::UntypedStorage<8, 24>                                                       mPartyReceivedInviteList;
    ::ll::UntypedStorage<8, 24>                                                       mResourceAllowList;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, Social::PlayerProfile>> mInviterProfiles;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::PartyReceivedInviteData>>            mInvites;
    ::ll::TypedStorage<8, 8, ::World::WorldPlayerListTracker&>                        mWorldPlayerListTracker;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mReceivedInviteUpdateSubscription;
    ::ll::UntypedStorage<8, 24>                                                       mPartyProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mPartySubscription;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>>             mInviterProfileSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyReceivedInviteListFacet& operator=(PartyReceivedInviteListFacet const&);
    PartyReceivedInviteListFacet(PartyReceivedInviteListFacet const&);
    PartyReceivedInviteListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyReceivedInviteListFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PartyReceivedInviteListFacet(
        ::Bedrock::NonOwnerPointer<Parties::PartyReceivedInviteList>,
        std::shared_ptr<Social::ProfileSystem>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::World::WorldPlayerListTracker&,
        ::Bedrock::NonOwnerPointer<Parties::IPartyProvider>
    );

    MCNAPI void _updateInvites();

    MCNAPI void _updateProfiles();

    MCNAPI std::vector<OreUI::PartyReceivedInviteData> const& getInvites() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[32]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<Parties::PartyReceivedInviteList>,
        std::shared_ptr<Social::ProfileSystem>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::World::WorldPlayerListTracker&,
        ::Bedrock::NonOwnerPointer<Parties::IPartyProvider>
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
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class PartyReceivedInviteListFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::PartyReceivedInviteListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::ProfileSystem>>                     mProfileSystem;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::PartyReceivedInviteList>> mPartyReceivedInviteList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>>     mResourceAllowList;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Social::PlayerProfile>>   mInviterProfiles;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::PartyReceivedInviteData>>                mInvites;
    ::ll::TypedStorage<8, 8, ::World::WorldPlayerListTracker&>                                mWorldPlayerListTracker;
    ::ll::TypedStorage<1, 1, bool>                                                            mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mReceivedInviteUpdateSubscription;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>> mPartyProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mPartySubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>>        mInviterProfileSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyReceivedInviteListFacet& operator=(PartyReceivedInviteListFacet const&);
    PartyReceivedInviteListFacet(PartyReceivedInviteListFacet const&);
    PartyReceivedInviteListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyReceivedInviteListFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PartyReceivedInviteListFacet(
        ::Bedrock::NonOwnerPointer<::Parties::PartyReceivedInviteList> partyReceivedInviteList,
        ::std::shared_ptr<::Social::ProfileSystem>                     profileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>     resourceAllowList,
        ::World::WorldPlayerListTracker&                               worldPlayerListTracker,
        ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>          partyProvider
    );

    MCAPI void _updateInvites();

    MCAPI void _updateProfiles();

    MCAPI ::std::vector<::OreUI::PartyReceivedInviteData> const& getInvites() const;
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
        ::Bedrock::NonOwnerPointer<::Parties::PartyReceivedInviteList> partyReceivedInviteList,
        ::std::shared_ptr<::Social::ProfileSystem>                     profileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>     resourceAllowList,
        ::World::WorldPlayerListTracker&                               worldPlayerListTracker,
        ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>          partyProvider
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class PartyReceivedInviteListFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
