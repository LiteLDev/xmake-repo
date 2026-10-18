#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LocalizedStringObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class ExperiencePdpNewsObject : public ::OreUI::PropertyObject<::OreUI::ExperiencePdpNewsObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject> mTitle;
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject> mDescription;
    // NOLINTEND
};
#else // @header-generator platform
class ExperiencePdpNewsObject {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
