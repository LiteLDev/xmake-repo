#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/JoinablePartyFriend.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/social/PlayerProfile.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Parties { class IPartyProvider; }
namespace Parties { class JoinablePartyList; }
namespace Social { class ProfileSystem; }
namespace World { class WorldPlayerListTracker; }
// clang-format on

namespace OreUI {

class JoinablePartyListFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::JoinablePartyListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                             mJoinablePartyList;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::ProfileSystem>>       mProfileSystem;
    ::ll::UntypedStorage<8, 24>                                             mResourceAllowList;
    ::ll::TypedStorage<1, 1, bool>                                          mIsDirty;
    ::ll::UntypedStorage<8, 24>                                             mPartyProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mPartySubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mUpdateSubscription;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>>   mPlayerProfileSubscriptions;
    ::ll::TypedStorage<8, 8, ::World::WorldPlayerListTracker&>              mWorldPlayerListTracker;
    ::ll::TypedStorage<8, 24, std::map<std::string, Social::PlayerProfile>> mPlayerProfiles;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::JoinablePartyFriend>>      mJoinablePartyFriendList;
    // NOLINTEND

public:
    // prevent constructor by default
    JoinablePartyListFacet& operator=(JoinablePartyListFacet const&);
    JoinablePartyListFacet(JoinablePartyListFacet const&);
    JoinablePartyListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JoinablePartyListFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JoinablePartyListFacet(
        ::Bedrock::NonOwnerPointer<Parties::JoinablePartyList>,
        std::shared_ptr<Social::ProfileSystem>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::Bedrock::NonOwnerPointer<Parties::IPartyProvider>,
        ::World::WorldPlayerListTracker&
    );

    MCNAPI void _updateJoinableParties();

    MCNAPI std::vector<OreUI::JoinablePartyFriend> const& getJoinablePartyFriends() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[26]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<Parties::JoinablePartyList>,
        std::shared_ptr<Social::ProfileSystem>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::Bedrock::NonOwnerPointer<Parties::IPartyProvider>,
        ::World::WorldPlayerListTracker&
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

} // namespace OreUI
