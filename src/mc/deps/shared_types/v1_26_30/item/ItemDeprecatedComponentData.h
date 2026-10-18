#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_50/item/DiggerItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/ItemDeprecatedComponentData.h"
#include "mc/deps/shared_types/v1_21_60/item/CustomComponentsItemComponent.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_26_30 {

struct ItemDeprecatedComponentData : public ::SharedTypes::v1_20_50::ItemDeprecatedComponentData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 120, std::optional<SharedTypes::v1_20_50::DiggerItemComponent>> legacyOnDigTriggerItemComponent;
    ::ll::TypedStorage<8, 40, std::optional<SharedTypes::v1_21_60::CustomComponentsItemComponent>> customComponentsItemComponent;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 136, ::std::optional<::SharedTypes::v1_20_50::DiggerItemComponent>>
        legacyOnDigTriggerItemComponent;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::v1_21_60::CustomComponentsItemComponent>>
        customComponentsItemComponent;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ItemDeprecatedComponentData();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemDeprecatedComponentData(::SharedTypes::v1_26_30::ItemDeprecatedComponentData const&);
#else // @header-generator platform
    MCAPI ItemDeprecatedComponentData(::SharedTypes::v1_26_30::ItemDeprecatedComponentData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemDeprecatedComponentData(::SharedTypes::v1_26_30::ItemDeprecatedComponentData&&);
#else // @header-generator platform
    MCAPI ItemDeprecatedComponentData(::SharedTypes::v1_26_30::ItemDeprecatedComponentData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_26_30::ItemDeprecatedComponentData const&) const;
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_26_30::ItemDeprecatedComponentData&
    operator=(::SharedTypes::v1_26_30::ItemDeprecatedComponentData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ItemDeprecatedComponentData();
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_26_30::ItemDeprecatedComponentData&
    operator=(::SharedTypes::v1_26_30::ItemDeprecatedComponentData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_26_30::ItemDeprecatedComponentData const&) const;

    MCAPI ~ItemDeprecatedComponentData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_26_30::ItemDeprecatedComponentData const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_26_30::ItemDeprecatedComponentData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_26_30::ItemDeprecatedComponentData&&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_26_30::ItemDeprecatedComponentData const&);
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

} // namespace SharedTypes::v1_26_30
