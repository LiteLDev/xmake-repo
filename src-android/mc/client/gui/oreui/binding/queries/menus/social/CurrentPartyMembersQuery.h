#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/queries/menus/social/CurrentPartyQuery.h"
#include "mc/client/social/PlayerProfile.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class SocialPlayerObject; }
namespace Social { class ProfileSystem; }
namespace World { class WorldPlayerListTracker; }
// clang-format on

namespace OreUI {

class CurrentPartyMembersQuery : public ::OreUI::QueryBase<OreUI::CurrentPartyMembersQuery>,
                                 public ::OreUI::CurrentPartyQuery {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168>                                                      mLeaderXuid;
    ::ll::UntypedStorage<8, 152>                                                      mMaxMemberCount;
    ::ll::UntypedStorage<8, 104>                                                      mMembers;
    ::ll::UntypedStorage<8, 104>                                                      mInvitees;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::ProfileSystem>>                 mProfileSystem;
    ::ll::TypedStorage<8, 8, ::World::WorldPlayerListTracker&>                        mWorldPlayerListTracker;
    ::ll::UntypedStorage<8, 24>                                                       mResourceAllowList;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, Social::PlayerProfile>> mMemberProfiles;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>>             mMemberProfileSubscriptions;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, Social::PlayerProfile>> mInviteeProfiles;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>>             mInviteeProfileSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    CurrentPartyMembersQuery& operator=(CurrentPartyMembersQuery const&);
    CurrentPartyMembersQuery(CurrentPartyMembersQuery const&);
    CurrentPartyMembersQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CurrentPartyMembersQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CurrentPartyMembersQuery(::OreUI::GameDependencies const&);

    MCNAPI void _fetchData();

    MCNAPI void _updateInvitees();

    MCNAPI void _updateMembers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
