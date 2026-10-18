#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/ObservableValue.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class RefreshPolicyObject : public ::OreUI::PropertyObject<::OreUI::RefreshPolicyObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                  mMinRefreshDelayInSeconds;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<int>>> mTimeToLiveInSeconds;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::std::string, ::std::allocator<::OreUI::Detail::ObservableValue<::std::string>>>>
        mEvents;
    // NOLINTEND
};
#else // @header-generator platform
class RefreshPolicyObject {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
