#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/ImageObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LinksToObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LocalizedStringObject.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services::layout::model { struct SimpleAnnouncementFab; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class SimpleAnnouncementFabObject : public ::OreUI::PropertyObject<::OreUI::SimpleAnnouncementFabObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject> mTitle;
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject> mDescription;
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject> mLinkText;
    ::ll::TypedStorage<8, 440, ::OreUI::ImageObject>           mStaticImage;
    ::ll::TypedStorage<8, 616, ::OreUI::LinksToObject>         mLink;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleAnnouncementFabObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SimpleAnnouncementFabObject(
        ::OreUI::Detail::IPropertyObject*                                fabParent,
        ::Bedrock::Services::layout::model::SimpleAnnouncementFab const& fab
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::Detail::IPropertyObject*                                fabParent,
        ::Bedrock::Services::layout::model::SimpleAnnouncementFab const& fab
    );
    // NOLINTEND
};
#else // @header-generator platform
class SimpleAnnouncementFabObject {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
