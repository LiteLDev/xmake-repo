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

class SettingsConfirmationRequest : public ::OreUI::PropertyObject<OreUI::SettingsConfirmationRequest> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mTitle;
    ::ll::UntypedStorage<8, 168> mDescription;
    ::ll::UntypedStorage<8, 168> mAcceptLabel;
    ::ll::UntypedStorage<8, 168> mCancelLabel;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsConfirmationRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsConfirmationRequest();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    SettingsConfirmationRequest(::OreUI::Detail::IPropertyObject*, std::string, std::string, std::string, std::string);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::Detail::IPropertyObject*, std::string, std::string, std::string, std::string);
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
