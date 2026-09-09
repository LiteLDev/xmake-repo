#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/FriendWorld.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct NetworkWorldInfo;
namespace Network { struct ServerID; }
namespace Parties { class PartyTravelManager; }
namespace Social { class FriendList; }
namespace World { class FriendServerWorldList; }
// clang-format on

namespace OreUI {

class FriendWorldListFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::FriendWorldListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::FriendServerWorldList&>      mFriendServerWorldList;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::FriendList>> mFriendList;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::FriendWorld>>     mFriendWorlds;
    ::ll::UntypedStorage<8, 24>                                    mPartyTravelManager;
    // NOLINTEND

public:
    // prevent constructor by default
    FriendWorldListFacet& operator=(FriendWorldListFacet const&);
    FriendWorldListFacet(FriendWorldListFacet const&);
    FriendWorldListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FriendWorldListFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FriendWorldListFacet(
        ::World::FriendServerWorldList&,
        std::shared_ptr<Social::FriendList>,
        ::Bedrock::NonOwnerPointer<Parties::PartyTravelManager>
    );

    MCNAPI std::vector<OreUI::FriendWorld> const& getFriendWorlds() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[24]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::World::FriendServerWorldList&,
        std::shared_ptr<Social::FriendList>,
        ::Bedrock::NonOwnerPointer<Parties::PartyTravelManager>
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
