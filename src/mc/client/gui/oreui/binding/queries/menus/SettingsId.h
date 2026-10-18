#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/SettingsType.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/SettingsType.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class SettingsId : public ::OreUI::PropertyObject<::OreUI::SettingsId> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>         mId;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::SettingsType>> mType;
    // NOLINTEND
};
#else // @header-generator platform
class SettingsId {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
