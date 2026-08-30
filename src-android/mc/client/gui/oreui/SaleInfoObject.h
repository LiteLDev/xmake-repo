#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

namespace OreUI {

class SaleInfoObject : public ::OreUI::PropertyObject<OreUI::SaleInfoObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mSalePrice;
    ::ll::UntypedStorage<8, 160> mDiscount;
    ::ll::UntypedStorage<8, 176> mStartDate;
    ::ll::UntypedStorage<8, 176> mExpirationDate;
    // NOLINTEND
};

} // namespace OreUI
