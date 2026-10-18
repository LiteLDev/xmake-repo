#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_50/item/ItemDeprecatedComponentData.h"
#include "mc/deps/shared_types/v1_21_110/item/ItemDescription.h"
#include "mc/deps/shared_types/v1_26_0/item/ComponentItemComponentData.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
#if defined(LL_PLAT_A) // @header-generator platform
struct ComponentItemData_v1_21_110;
namespace Puv { template<typename T0, typename T1, typename T2> class CerealUpgrader; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_26_0 {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 72, ::SharedTypes::v1_21_110::ItemDescription>             mDescription;
    ::ll::TypedStorage<8, 1240, ::SharedTypes::v1_26_0::ComponentItemComponentData>  mItemComponents;
    ::ll::TypedStorage<8, 760, ::SharedTypes::v1_20_50::ItemDeprecatedComponentData> mDeprecatedItemComponents;
#else // @header-generator platform
    ::ll::TypedStorage<8, 88, ::SharedTypes::v1_21_110::ItemDescription>             mDescription;
    ::ll::TypedStorage<8, 1344, ::SharedTypes::v1_26_0::ComponentItemComponentData>  mItemComponents;
    ::ll::TypedStorage<8, 872, ::SharedTypes::v1_20_50::ItemDeprecatedComponentData> mDeprecatedItemComponents;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ComponentItemData_v1_26_0& operator=(ComponentItemData_v1_26_0 const&);
    ComponentItemData_v1_26_0();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ComponentItemData_v1_26_0(::ComponentItemData_v1_26_0 const&);
#else // @header-generator platform
    MCAPI ComponentItemData_v1_26_0(::ComponentItemData_v1_26_0&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ComponentItemData_v1_26_0& operator=(::ComponentItemData_v1_26_0&&);
#else // @header-generator platform
    MCAPI ComponentItemData_v1_26_0(::ComponentItemData_v1_26_0 const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ComponentItemData_v1_26_0& operator=(::ComponentItemData_v1_26_0 const&);
#else // @header-generator platform
    MCAPI ::ComponentItemData_v1_26_0& operator=(::ComponentItemData_v1_26_0&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ComponentItemData_v1_26_0();
#else // @header-generator platform
    MCAPI ~ComponentItemData_v1_26_0();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SemVersionConstant const& VERSION();
#else // @header-generator platform
    MCAPI static ::SemVersionConstant const& VERSION();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ComponentItemData_v1_26_0 const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ComponentItemData_v1_26_0&&);

    MCAPI void* $ctor(::ComponentItemData_v1_26_0 const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
