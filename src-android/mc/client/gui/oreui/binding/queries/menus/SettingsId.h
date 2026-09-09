#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/SettingsType.h"

namespace OreUI {

class SettingsId : public ::OreUI::PropertyObject<OreUI::SettingsId> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mId;
    ::ll::UntypedStorage<8, 152> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsId& operator=(SettingsId const&);
    SettingsId(SettingsId const&);
    SettingsId();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsId();
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
