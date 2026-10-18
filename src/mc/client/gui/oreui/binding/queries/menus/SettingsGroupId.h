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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class SettingsGroupId : public ::OreUI::PropertyObject<::OreUI::SettingsGroupId> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mId;
    // NOLINTEND
};
#else // @header-generator platform
class SettingsGroupId {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
