#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/ExperienceImageSetObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class LocalizedStringObject; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class ExperienceListingObject : public ::OreUI::PropertyObject<::OreUI::ExperienceListingObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1560, ::OreUI::ExperienceImageSetObject>              mDisplayImage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::LocalizedStringObject>> mMotd;
    // NOLINTEND
};
#else // @header-generator platform
class ExperienceListingObject {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
