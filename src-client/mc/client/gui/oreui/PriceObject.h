#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class SaleInfoObject; }
// clang-format on

namespace OreUI {

class PriceObject : public ::OreUI::PropertyObject<OreUI::PriceObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>                                     mListPrice;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::SaleInfoObject>> mSaleInfo;
    ::ll::UntypedStorage<8, 176>                                     mCurrencyId;
    ::ll::UntypedStorage<8, 176>                                     mVirtualCurrencyType;
    // NOLINTEND
};

} // namespace OreUI
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
