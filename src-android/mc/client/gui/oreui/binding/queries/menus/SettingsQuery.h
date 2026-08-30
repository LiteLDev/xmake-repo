#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class SettingsGroupId; }
namespace Settings { class IRegistry; }
// clang-format on

namespace OreUI {

class SettingsQuery : public ::OreUI::QueryBase<OreUI::SettingsQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104>                                    mSettingsGroups;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Settings::IRegistry>> mSettingsRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SettingsQuery(::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ClientDependencies const&);
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
