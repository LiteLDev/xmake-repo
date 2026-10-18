#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/OnCompleteTriggerItemComponent.h"
#include "mc/deps/shared_types/v1_20_40/item/ItemDeprecatedComponentData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct ItemDeprecatedComponentData : public ::SharedTypes::v1_20_40::ItemDeprecatedComponentData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 88, std::optional<SharedTypes::Legacy::OnCompleteTriggerItemComponent>> legacyOnCompleteTriggerItemComponent;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::Legacy::OnCompleteTriggerItemComponent>>
        legacyOnCompleteTriggerItemComponent;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ItemDeprecatedComponentData();
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_20_50::ItemDeprecatedComponentData const&) const;

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
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
