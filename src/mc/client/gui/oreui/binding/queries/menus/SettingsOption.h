#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class SettingsOption : public ::OreUI::PropertyObject<::OreUI::SettingsOption> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                            mValue;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                  mLabel;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mDescription;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<bool>>>          mDisabled;
    // NOLINTEND
};
#else // @header-generator platform
class SettingsOption {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
