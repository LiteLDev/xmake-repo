#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LocalizedStringObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/PageableStandardMarketplaceItemPreviewObject.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services::layout::model { struct StandardMarketplaceItemListFab; }
namespace OreUI { class LinksToObject; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class StandardMarketplaceItemListFabObject
: public ::OreUI::PropertyObject<::OreUI::StandardMarketplaceItemListFabObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject>                        mTitle;
    ::ll::TypedStorage<8, 568, ::OreUI::PageableStandardMarketplaceItemPreviewObject> mPagedItems;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::LinksToObject>>               mLinksTo;
    // NOLINTEND

public:
    // prevent constructor by default
    StandardMarketplaceItemListFabObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StandardMarketplaceItemListFabObject(
        ::OreUI::Detail::IPropertyObject*                                         fabParent,
        ::Bedrock::Services::layout::model::StandardMarketplaceItemListFab const& fab
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::Detail::IPropertyObject*                                         fabParent,
        ::Bedrock::Services::layout::model::StandardMarketplaceItemListFab const& fab
    );
    // NOLINTEND
};
#else // @header-generator platform
class StandardMarketplaceItemListFabObject {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
