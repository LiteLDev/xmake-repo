#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_30/item/ItemComponents.h"

#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
#if defined(LL_PLAT_A) // @header-generator platform
#ifndef LL_GENERATED_ANDROID_BASE_STUB_SHAREDTYPES__COMPREHENSIVE__ITEMCOMPONENTS
#define LL_GENERATED_ANDROID_BASE_STUB_SHAREDTYPES__COMPREHENSIVE__ITEMCOMPONENTS
namespace SharedTypes::Comprehensive { class ItemComponents {}; }
#endif
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace SharedTypes::Beta {

#if defined(LL_PLAT_A) // @header-generator platform
struct ItemComponents : public ::SharedTypes::Comprehensive::ItemComponents {
#else // @header-generator platform
struct ItemComponents : public ::SharedTypes::v1_26_30::ItemComponents {
#endif // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Beta
