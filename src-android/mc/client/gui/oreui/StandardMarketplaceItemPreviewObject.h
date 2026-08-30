#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/ImageObject.h"
#include "mc/client/gui/oreui/LinksToObject.h"
#include "mc/client/gui/oreui/LocalizedStringObject.h"
#include "mc/client/gui/oreui/PriceObject.h"
#include "mc/client/gui/oreui/RatingObject.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

namespace OreUI {

class StandardMarketplaceItemPreviewObject
: public ::OreUI::PropertyObject<OreUI::StandardMarketplaceItemPreviewObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mId;
    ::ll::UntypedStorage<8, 384> mTitle;
    ::ll::UntypedStorage<8, 168> mCreatorName;
    ::ll::UntypedStorage<8, 384> mThumbnail;
    ::ll::UntypedStorage<8, 528> mRating;
    ::ll::UntypedStorage<8, 728> mPrice;
    ::ll::UntypedStorage<8, 536> mLinksTo;
    // NOLINTEND
};

} // namespace OreUI
