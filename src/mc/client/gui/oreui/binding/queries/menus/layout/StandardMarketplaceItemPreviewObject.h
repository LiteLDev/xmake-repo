#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/ImageObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LinksToObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LocalizedStringObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/PriceObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/RatingObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class StandardMarketplaceItemPreviewObject
: public ::OreUI::PropertyObject<::OreUI::StandardMarketplaceItemPreviewObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mId;
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject>   mTitle;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mCreatorName;
    ::ll::TypedStorage<8, 440, ::OreUI::ImageObject>             mThumbnail;
    ::ll::TypedStorage<8, 600, ::OreUI::RatingObject>            mRating;
    ::ll::TypedStorage<8, 840, ::OreUI::PriceObject>             mPrice;
    ::ll::TypedStorage<8, 616, ::OreUI::LinksToObject>           mLinksTo;
    // NOLINTEND
};
#else // @header-generator platform
class StandardMarketplaceItemPreviewObject {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
