#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IStoreCatalogItem;
class OfferCollectionComponent;
class StoreVisualStyle;
// clang-format on

namespace Social::eventData {

class StoreOfferClickedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const> mOfferIndex;
    ::ll::UntypedStorage<8, 8>          mVisualStyle;
    ::ll::UntypedStorage<8, 8>          mOfferCollectionComp;
    ::ll::UntypedStorage<8, 8>          mOffer;
    // NOLINTEND

public:
    // prevent constructor by default
    StoreOfferClickedData& operator=(StoreOfferClickedData const&);
    StoreOfferClickedData(StoreOfferClickedData const&);
    StoreOfferClickedData();
};

} // namespace Social::eventData
