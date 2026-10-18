#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsPlayerList; }
namespace Realms { class RealmsPlayerManagement; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsPlayerList; }
namespace Realms { class RealmsPlayerManagement; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsPlayerListCommandsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsPlayerListCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsPlayerList>>       mRealmsPlayerList;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsPlayerManagement>> mRealmsManagePlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPlayerListCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPlayerListCommandsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsPlayerListCommandsFacet(
        std::shared_ptr<Realms::RealmsPlayerList>,
        std::shared_ptr<Realms::RealmsPlayerManagement>
    );

    MCNAPI void blockPlayer(std::string const&, std::string const&);

    MCNAPI void populateMembers();

    MCNAPI void removePlayer(std::string const&, std::string const&);

    MCNAPI void resetManageState();

    MCNAPI void resetState();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[33]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Realms::RealmsPlayerList>, std::shared_ptr<Realms::RealmsPlayerManagement>);
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
class RealmsPlayerListCommandsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsPlayerListCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsPlayerList>>       mRealmsPlayerList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsPlayerManagement>> mRealmsManagePlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPlayerListCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPlayerListCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsPlayerListCommandsFacet(
        ::std::shared_ptr<::Realms::RealmsPlayerList>       realmsPlayerList,
        ::std::shared_ptr<::Realms::RealmsPlayerManagement> realmsManagePlayer
    );

    MCAPI void blockPlayer(::std::string const& xuid, ::std::string const& realmID);

    MCAPI void populateMembers();

    MCAPI void removePlayer(::std::string const& xuid, ::std::string const& realmID);

    MCAPI void resetManageState();

    MCAPI void resetState();
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
        ::std::shared_ptr<::Realms::RealmsPlayerList>       realmsPlayerList,
        ::std::shared_ptr<::Realms::RealmsPlayerManagement> realmsManagePlayer
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsPlayerListCommandsFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
