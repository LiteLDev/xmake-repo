#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

namespace OreUI {

class SettingsOptionConfirmationRequest : public ::OreUI::PropertyObject<OreUI::SettingsOptionConfirmationRequest> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mValue;
    ::ll::UntypedStorage<8, 168> mTitle;
    ::ll::UntypedStorage<8, 168> mDescription;
    ::ll::UntypedStorage<8, 168> mAcceptLabel;
    ::ll::UntypedStorage<8, 168> mCancelLabel;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsOptionConfirmationRequest& operator=(SettingsOptionConfirmationRequest const&);
    SettingsOptionConfirmationRequest(SettingsOptionConfirmationRequest const&);
    SettingsOptionConfirmationRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsOptionConfirmationRequest();
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
