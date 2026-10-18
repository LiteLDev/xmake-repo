#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_20/item/ItemDescription.h"
#include "mc/deps/shared_types/v1_20_40/item/ItemDeprecatedComponentData.h"
#include "mc/world/item/components/ComponentItemComponentData_v1_20_40.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
struct ComponentItemData_v1_20_30;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Puv { template<typename T0, typename T1, typename T2> class CerealUpgrader; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_20_40 {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 80, ::SharedTypes::v1_20_20::ItemDescription>              mDescription;
    ::ll::UntypedStorage<8, 1640>                                                    mItemComponents;
    ::ll::TypedStorage<8, 672, ::SharedTypes::v1_20_40::ItemDeprecatedComponentData> mDeprecatedItemComponents;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::SharedTypes::v1_20_20::ItemDescription>              mDescription;
    ::ll::TypedStorage<8, 1808, ::ComponentItemComponentData_v1_20_40>               mItemComponents;
    ::ll::TypedStorage<8, 768, ::SharedTypes::v1_20_40::ItemDeprecatedComponentData> mDeprecatedItemComponents;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ComponentItemData_v1_20_40();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif

    MCAPI static void
    upgrade(::Puv::CerealUpgrader<::ComponentItemData_v1_20_30, ::ComponentItemData_v1_20_40, nullptr_t>& upgrader);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::SemVersionConstant const& VERSION();
#endif // @header-generator platform
    // NOLINTEND
};
