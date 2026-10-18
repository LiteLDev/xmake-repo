#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class SaleInfoObject; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class PriceObject : public ::OreUI::PropertyObject<::OreUI::PriceObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<int>>>           mListPrice;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::SaleInfoObject>>          mSaleInfo;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mCurrencyId;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mVirtualCurrencyType;
    // NOLINTEND
};
#else // @header-generator platform
class PriceObject {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
