#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct JoinablePartyFriend; }
namespace Parties { class IPartyProvider; }
namespace Parties { class JoinablePartyList; }
namespace Social { class ProfileSystem; }
namespace Social { struct PlayerProfile; }
namespace World { class WorldPlayerListTracker; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class JoinablePartyListFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::JoinablePartyListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::JoinablePartyList>>   mJoinablePartyList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::ProfileSystem>>                 mProfileSystem;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDirty;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>>      mPartyProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mPartySubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mUpdateSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>>             mPlayerProfileSubscriptions;
    ::ll::TypedStorage<8, 8, ::World::WorldPlayerListTracker&>                            mWorldPlayerListTracker;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::Social::PlayerProfile>>         mPlayerProfiles;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::JoinablePartyFriend>>                mJoinablePartyFriendList;
    // NOLINTEND

public:
    // prevent constructor by default
    JoinablePartyListFacet& operator=(JoinablePartyListFacet const&);
    JoinablePartyListFacet(JoinablePartyListFacet const&);
    JoinablePartyListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JoinablePartyListFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JoinablePartyListFacet(
        ::Bedrock::NonOwnerPointer<::Parties::JoinablePartyList>   joinablePartyList,
        ::std::shared_ptr<::Social::ProfileSystem>                 profileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>      partyProvider,
        ::World::WorldPlayerListTracker&                           worldPlayerListTracker
    );

    MCAPI void _updateJoinableParties();

    MCFOLD ::std::vector<::OreUI::JoinablePartyFriend> const& getJoinablePartyFriends() const;
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
        ::Bedrock::NonOwnerPointer<::Parties::JoinablePartyList>   joinablePartyList,
        ::std::shared_ptr<::Social::ProfileSystem>                 profileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>      partyProvider,
        ::World::WorldPlayerListTracker&                           worldPlayerListTracker
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class JoinablePartyListFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
