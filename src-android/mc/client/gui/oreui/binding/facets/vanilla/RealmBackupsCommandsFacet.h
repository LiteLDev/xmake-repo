#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsBackups; }
// clang-format on

namespace OreUI {

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

} // namespace OreUI
