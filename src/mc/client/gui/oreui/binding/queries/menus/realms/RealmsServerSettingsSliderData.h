#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/network/realms/ServerSettings.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/network/realms/ServerSettings.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RealmsServerSettingsSliderData : public ::OreUI::PropertyObject<::OreUI::RealmsServerSettingsSliderData> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>> min;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>> max;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>> defaultValue;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>> current;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsServerSettingsSliderData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsServerSettingsSliderData(
        ::std::string                                name,
        ::OreUI::Detail::IPropertyObject*            parent,
        ::Realms::ServerSettings::SliderValue const& values
    );

    MCAPI void update(::Realms::ServerSettings::SliderValue const& values);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string                                name,
        ::OreUI::Detail::IPropertyObject*            parent,
        ::Realms::ServerSettings::SliderValue const& values
    );
    // NOLINTEND
};
#else // @header-generator platform
class RealmsServerSettingsSliderData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
