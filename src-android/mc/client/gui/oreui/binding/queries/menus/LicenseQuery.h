#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

namespace OreUI {

class LicenseQuery : public ::OreUI::QueryBase<OreUI::LicenseQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mFontLicense;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LicenseQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LicenseQuery();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
