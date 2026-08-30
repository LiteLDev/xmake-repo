#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class SettingsAsyncProgressInformation : public ::OreUI::PropertyObject<OreUI::SettingsAsyncProgressInformation> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mTitle;
    ::ll::UntypedStorage<8, 168> mDescription;
    ::ll::UntypedStorage<8, 176> mCancelLabel;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsAsyncProgressInformation();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsAsyncProgressInformation();
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
