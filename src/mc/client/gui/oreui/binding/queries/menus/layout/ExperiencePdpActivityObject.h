#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/ExperienceImageSetObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LocalizedStringObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class ExperiencePdpActivityObject : public ::OreUI::PropertyObject<::OreUI::ExperiencePdpActivityObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject>                    mTitle;
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject>                    mSubtitle;
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject>                    mDescription;
    ::ll::TypedStorage<8, 1560, ::OreUI::ExperienceImageSetObject>                mImage;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mWorldId;
    // NOLINTEND
};
#else // @header-generator platform
class ExperiencePdpActivityObject {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
