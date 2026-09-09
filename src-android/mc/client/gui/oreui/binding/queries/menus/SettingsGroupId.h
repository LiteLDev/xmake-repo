#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

namespace OreUI {

class SettingsGroupId : public ::OreUI::PropertyObject<OreUI::SettingsGroupId> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mId;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsGroupId& operator=(SettingsGroupId const&);
    SettingsGroupId(SettingsGroupId const&);
    SettingsGroupId();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsGroupId();
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
