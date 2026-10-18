#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsBackups; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsBackups; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmBackupsCommandsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmBackupsCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsBackups>> mRealmsBackups;
    ::ll::TypedStorage<1, 1, bool>                                    mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmBackupsCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmBackupsCommandsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmBackupsCommandsFacet(std::shared_ptr<Realms::RealmsBackups>);

    MCNAPI void clearRealmBackupsState();

    MCNAPI void clearRealmsBackupsDownloadState();

    MCNAPI void downloadRealmWorld(std::string const&, std::string const&, int);

    MCNAPI void fetchRealmsBackups(std::string const&, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[29]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Realms::RealmsBackups>);
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
class RealmBackupsCommandsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmBackupsCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsBackups>> mRealmsBackups;
    ::ll::TypedStorage<1, 1, bool>                                        mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmBackupsCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmBackupsCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmBackupsCommandsFacet(::std::shared_ptr<::Realms::RealmsBackups> realmsBackups);

    MCAPI void clearRealmBackupsState();

    MCAPI void clearRealmsBackupsDownloadState();

    MCAPI void downloadRealmWorld(::std::string const& realmId, ::std::string const& realmName, int activeSlotIndex);

    MCAPI void fetchRealmsBackups(::std::string const& realmId, int activeSlotIndex);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsBackups> realmsBackups);
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
class RealmBackupsCommandsFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
