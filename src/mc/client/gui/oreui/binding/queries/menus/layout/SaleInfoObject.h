#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class SaleInfoObject : public ::OreUI::PropertyObject<::OreUI::SaleInfoObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<int>>>           mSalePrice;
    ::ll::TypedStorage<8, 184, ::OreUI::Property<::std::optional<double>>>        mDiscount;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mStartDate;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mExpirationDate;
    // NOLINTEND
};
#else // @header-generator platform
class SaleInfoObject {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
