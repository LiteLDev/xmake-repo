#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/network/realms/ServerSettings.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class RealmsServerSettingsSliderData : public ::OreUI::PropertyObject<OreUI::RealmsServerSettingsSliderData> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> min;
    ::ll::UntypedStorage<8, 152> max;
    ::ll::UntypedStorage<8, 152> defaultValue;
    ::ll::UntypedStorage<8, 152> current;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsServerSettingsSliderData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsServerSettingsSliderData();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsServerSettingsSliderData(
        std::string,
        ::OreUI::Detail::IPropertyObject*,
        ::Realms::ServerSettings::SliderValue const&
    );

    MCNAPI void update(::Realms::ServerSettings::SliderValue const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string, ::OreUI::Detail::IPropertyObject*, ::Realms::ServerSettings::SliderValue const&);
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
