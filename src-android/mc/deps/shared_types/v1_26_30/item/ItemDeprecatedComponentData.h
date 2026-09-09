#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_50/item/DiggerItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/ItemDeprecatedComponentData.h"
#include "mc/deps/shared_types/v1_21_60/item/CustomComponentsItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct ItemDeprecatedComponentData : public ::SharedTypes::v1_20_50::ItemDeprecatedComponentData {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 120, std::optional<SharedTypes::v1_20_50::DiggerItemComponent>> legacyOnDigTriggerItemComponent;
    ::ll::TypedStorage<8, 40, std::optional<SharedTypes::v1_21_60::CustomComponentsItemComponent>> customComponentsItemComponent;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ItemDeprecatedComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemDeprecatedComponentData(::SharedTypes::v1_26_30::ItemDeprecatedComponentData const&);

    MCNAPI ItemDeprecatedComponentData(::SharedTypes::v1_26_30::ItemDeprecatedComponentData&&);

    MCNAPI bool operator==(::SharedTypes::v1_26_30::ItemDeprecatedComponentData const&) const;

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
    MCNAPI void* $ctor(::SharedTypes::v1_26_30::ItemDeprecatedComponentData const&);

    MCNAPI void* $ctor(::SharedTypes::v1_26_30::ItemDeprecatedComponentData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
