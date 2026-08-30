#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/SettingsState.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

struct CommonProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mId;
    ::ll::UntypedStorage<8, 168> mName;
    ::ll::UntypedStorage<8, 152> mState;
    ::ll::UntypedStorage<8, 176> mDescription;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommonProperties(std::string_view, ::OreUI::Detail::IPropertyObject*);

    MCNAPI ~CommonProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string_view, ::OreUI::Detail::IPropertyObject*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
