#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct FriendWorld; }
namespace Parties { class PartyTravelManager; }
namespace Social { class FriendList; }
namespace World { class FriendServerWorldList; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class FriendWorldListFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::FriendWorldListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::FriendServerWorldList&>                            mFriendServerWorldList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::FriendList>>                   mFriendList;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FriendWorld>>                       mFriendWorlds;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::PartyTravelManager>> mPartyTravelManager;
    // NOLINTEND

public:
    // prevent constructor by default
    FriendWorldListFacet& operator=(FriendWorldListFacet const&);
    FriendWorldListFacet(FriendWorldListFacet const&);
    FriendWorldListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FriendWorldListFacet(
        ::World::FriendServerWorldList&                           friendServerWorldList,
        ::std::shared_ptr<::Social::FriendList>                   friendList,
        ::Bedrock::NonOwnerPointer<::Parties::PartyTravelManager> partyTravelManager
    );

    MCFOLD ::std::vector<::OreUI::FriendWorld> const& getFriendWorlds() const;
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
        ::World::FriendServerWorldList&                           friendServerWorldList,
        ::std::shared_ptr<::Social::FriendList>                   friendList,
        ::Bedrock::NonOwnerPointer<::Parties::PartyTravelManager> partyTravelManager
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class FriendWorldListFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
