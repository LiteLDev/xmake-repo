#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

namespace OreUI {

class SettingsOption : public ::OreUI::PropertyObject<OreUI::SettingsOption> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mValue;
    ::ll::UntypedStorage<8, 168> mLabel;
    ::ll::UntypedStorage<8, 176> mDescription;
    ::ll::UntypedStorage<8, 152> mDisabled;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsOption& operator=(SettingsOption const&);
    SettingsOption(SettingsOption const&);
    SettingsOption();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsOption();
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
