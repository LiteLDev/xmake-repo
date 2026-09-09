#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

namespace OreUI {

class RealmsPDPFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsPDPFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mCheckRealmsTrialAvailable;
    ::ll::UntypedStorage<1, 16> mIsRealmsTrialAvailable;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPDPFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPDPFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsPDPFacet(std::function<void()>, std::function<bool()>);

    MCNAPI bool isRealmsTrialAvailable() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[23]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<void()>, std::function<bool()>);
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
