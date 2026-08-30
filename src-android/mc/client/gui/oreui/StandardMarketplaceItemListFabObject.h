#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/LocalizedStringObject.h"
#include "mc/client/gui/oreui/PageableStandardMarketplaceItemPreviewObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class LinksToObject; }
// clang-format on

namespace OreUI {

class StandardMarketplaceItemListFabObject
: public ::OreUI::PropertyObject<OreUI::StandardMarketplaceItemListFabObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 384>                                    mTitle;
    ::ll::UntypedStorage<8, 496>                                    mPagedItems;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::LinksToObject>> mLinksTo;
    // NOLINTEND
};

} // namespace OreUI
