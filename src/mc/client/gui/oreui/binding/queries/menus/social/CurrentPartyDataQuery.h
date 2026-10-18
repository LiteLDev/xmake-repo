#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/social/CurrentPartyQuery.h"
#include "mc/client/party/parties/PartyPrivacy.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/social/CurrentPartyQuery.h"
#include "mc/client/party/parties/PartyPrivacy.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class CurrentPartyDataQuery : public ::OreUI::QueryBase<OreUI::CurrentPartyDataQuery>,
                              public ::OreUI::CurrentPartyQuery {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>                 mIsInParty;
    ::ll::UntypedStorage<8, 168>                 mPartyId;
    ::ll::UntypedStorage<8, 152>                 mPrivacy;
    ::ll::UntypedStorage<8, 152>                 mRestrictInvitesToLeader;
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&> mOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    CurrentPartyDataQuery& operator=(CurrentPartyDataQuery const&);
    CurrentPartyDataQuery(CurrentPartyDataQuery const&);
    CurrentPartyDataQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CurrentPartyDataQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CurrentPartyDataQuery(::OreUI::GameDependencies const&, ::OreUI::ClientDependencies const&);

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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class CurrentPartyDataQuery : public ::OreUI::QueryBase<::OreUI::CurrentPartyDataQuery>,
                              public ::OreUI::CurrentPartyQuery {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                    mIsInParty;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>           mPartyId;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Parties::PartyPrivacy>> mPrivacy;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                    mRestrictInvitesToLeader;
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>                           mOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    CurrentPartyDataQuery& operator=(CurrentPartyDataQuery const&);
    CurrentPartyDataQuery(CurrentPartyDataQuery const&);
    CurrentPartyDataQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CurrentPartyDataQuery(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);

    MCAPI void _fetchData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);
    // NOLINTEND
};
#else // @header-generator platform
class CurrentPartyDataQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
