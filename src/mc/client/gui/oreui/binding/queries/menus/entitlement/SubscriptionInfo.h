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
class SubscriptionInfo : public ::OreUI::PropertyObject<::OreUI::SubscriptionInfo> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mType;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>          mIsTrialEligible;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mSubSku;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mProductSku;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mPlatformStoreId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mFriendlyId;
    // NOLINTEND
};
#else // @header-generator platform
class SubscriptionInfo {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
