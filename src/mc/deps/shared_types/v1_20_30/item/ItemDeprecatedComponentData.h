#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/OnConsumeTriggerItemComponent.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_20_30 {

struct ItemDeprecatedComponentData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 88, std::optional<SharedTypes::Legacy::OnConsumeTriggerItemComponent>> legacyOnConsumeTriggerItemComponent;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ItemDeprecatedComponentData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::Legacy::OnConsumeTriggerItemComponent>>
        legacyOnConsumeTriggerItemComponent;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_30
