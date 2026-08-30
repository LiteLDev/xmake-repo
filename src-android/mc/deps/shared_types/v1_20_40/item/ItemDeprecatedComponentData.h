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
    // clang-format off
    ::ll::TypedStorage<8, 88, std::optional<SharedTypes::Legacy::OnUseTriggerItemComponent>> legacyOnUseTriggerItemComponent;
    ::ll::TypedStorage<8, 80, std::optional<SharedTypes::Legacy::OnUseOnTriggerItemComponent>> legacyOnUseOnTriggerItemComponent;
    ::ll::TypedStorage<4, 148, std::optional<SharedTypes::Legacy::RenderOffsetsItemComponent>> renderOffsetsItemComponent;
    ::ll::TypedStorage<8, 88, std::optional<SharedTypes::Legacy::OnHurtActorTriggerItemComponent>> legacyOnHurtActorTriggerItemComponent;
    ::ll::TypedStorage<8, 88, std::optional<SharedTypes::Legacy::OnHitActorTriggerItemComponent>> legacyOnHitActorTriggerItemComponent;
    ::ll::TypedStorage<8, 88, std::optional<SharedTypes::Legacy::OnHitBlockTriggerItemComponent>> legacyOnHitBlockTriggerItemComponent;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemDeprecatedComponentData(::SharedTypes::v1_20_40::ItemDeprecatedComponentData const&);

    MCNAPI ItemDeprecatedComponentData(::SharedTypes::v1_20_40::ItemDeprecatedComponentData&&);

    MCNAPI ::SharedTypes::v1_20_40::ItemDeprecatedComponentData&
    operator=(::SharedTypes::v1_20_40::ItemDeprecatedComponentData&&);

    MCNAPI bool operator==(::SharedTypes::v1_20_40::ItemDeprecatedComponentData const&) const;

    MCNAPI ~ItemDeprecatedComponentData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_40::ItemDeprecatedComponentData const&);

    MCNAPI void* $ctor(::SharedTypes::v1_20_40::ItemDeprecatedComponentData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_40
