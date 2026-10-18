#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/OnHitActorTriggerItemComponent.h"
#include "mc/deps/shared_types/legacy/item/OnHitBlockTriggerItemComponent.h"
#include "mc/deps/shared_types/legacy/item/OnHurtActorTriggerItemComponent.h"
#include "mc/deps/shared_types/legacy/item/OnUseOnTriggerItemComponent.h"
#include "mc/deps/shared_types/legacy/item/OnUseTriggerItemComponent.h"
#include "mc/deps/shared_types/legacy/item/RenderOffsetsItemComponent.h"
#include "mc/deps/shared_types/v1_20_30/item/ItemDeprecatedComponentData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_40 {

struct ItemDeprecatedComponentData : public ::SharedTypes::v1_20_30::ItemDeprecatedComponentData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 88, std::optional<SharedTypes::Legacy::OnUseTriggerItemComponent>> legacyOnUseTriggerItemComponent;
    ::ll::TypedStorage<8, 80, std::optional<SharedTypes::Legacy::OnUseOnTriggerItemComponent>> legacyOnUseOnTriggerItemComponent;
    ::ll::TypedStorage<4, 148, std::optional<SharedTypes::Legacy::RenderOffsetsItemComponent>> renderOffsetsItemComponent;
    ::ll::TypedStorage<8, 88, std::optional<SharedTypes::Legacy::OnHurtActorTriggerItemComponent>> legacyOnHurtActorTriggerItemComponent;
    ::ll::TypedStorage<8, 88, std::optional<SharedTypes::Legacy::OnHitActorTriggerItemComponent>> legacyOnHitActorTriggerItemComponent;
    ::ll::TypedStorage<8, 88, std::optional<SharedTypes::Legacy::OnHitBlockTriggerItemComponent>> legacyOnHitBlockTriggerItemComponent;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::Legacy::OnUseTriggerItemComponent>>
        legacyOnUseTriggerItemComponent;
    ::ll::TypedStorage<8, 96, ::std::optional<::SharedTypes::Legacy::OnUseOnTriggerItemComponent>>
        legacyOnUseOnTriggerItemComponent;
    ::ll::TypedStorage<4, 148, ::std::optional<::SharedTypes::Legacy::RenderOffsetsItemComponent>>
        renderOffsetsItemComponent;
    ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::Legacy::OnHurtActorTriggerItemComponent>>
        legacyOnHurtActorTriggerItemComponent;
    ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::Legacy::OnHitActorTriggerItemComponent>>
        legacyOnHitActorTriggerItemComponent;
    ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::Legacy::OnHitBlockTriggerItemComponent>>
        legacyOnHitBlockTriggerItemComponent;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ItemDeprecatedComponentData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemDeprecatedComponentData(::SharedTypes::v1_20_40::ItemDeprecatedComponentData const&);
#else // @header-generator platform
    MCAPI ItemDeprecatedComponentData(::SharedTypes::v1_20_40::ItemDeprecatedComponentData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemDeprecatedComponentData(::SharedTypes::v1_20_40::ItemDeprecatedComponentData&&);
#else // @header-generator platform
    MCAPI ItemDeprecatedComponentData(::SharedTypes::v1_20_40::ItemDeprecatedComponentData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_20_40::ItemDeprecatedComponentData&
    operator=(::SharedTypes::v1_20_40::ItemDeprecatedComponentData&&);
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_20_40::ItemDeprecatedComponentData&
    operator=(::SharedTypes::v1_20_40::ItemDeprecatedComponentData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_20_40::ItemDeprecatedComponentData const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_20_40::ItemDeprecatedComponentData const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ItemDeprecatedComponentData();
#else // @header-generator platform
    MCAPI ~ItemDeprecatedComponentData();
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
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_20_40::ItemDeprecatedComponentData const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_20_40::ItemDeprecatedComponentData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_20_40::ItemDeprecatedComponentData&&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_20_40::ItemDeprecatedComponentData const&);
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

} // namespace SharedTypes::v1_20_40
