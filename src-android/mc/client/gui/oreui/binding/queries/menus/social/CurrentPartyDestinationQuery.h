#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/social/CurrentPartyQuery.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
namespace Parties { class PartyTravelManager; }
namespace Parties { struct PartyDestinationExternal; }
namespace Parties { struct PartyDestinationGathering; }
namespace Parties { struct PartyDestinationMenus; }
namespace Parties { struct PartyDestinationRealm; }
namespace Parties { struct PartyDestinationXblP2P; }
// clang-format on

namespace OreUI {

class CurrentPartyDestinationQuery : public ::OreUI::QueryBase<OreUI::CurrentPartyDestinationQuery>,
                                     public ::OreUI::CurrentPartyQuery {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168>                               mDestinationName;
    ::ll::UntypedStorage<8, 152>                               mShouldShowJoinDestination;
    ::ll::UntypedStorage<8, 24>                                mPartyTravelManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mUserAtDestinationSubscription;
    ::ll::TypedStorage<8, 24, std::string>                     mMainMenuDestinationName;
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>               mOptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLanguageSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    CurrentPartyDestinationQuery& operator=(CurrentPartyDestinationQuery const&);
    CurrentPartyDestinationQuery(CurrentPartyDestinationQuery const&);
    CurrentPartyDestinationQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CurrentPartyDestinationQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CurrentPartyDestinationQuery(::OreUI::GameDependencies const&, ::OreUI::ClientDependencies const&);

    MCNAPI void _fetchData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&, ::OreUI::ClientDependencies const&);
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
