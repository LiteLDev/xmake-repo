#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/BasicSchema.h"
#include "mc/deps/cereal/schema/VariantPriorityLevel.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { struct DescriptionConfig; }
namespace cereal { struct SchemaDescription; }
namespace cereal::internal { struct ReflectionContext; }
// clang-format on

namespace cereal::internal {

class DefaultCompositeSchema : public ::cereal::internal::BasicSchema {
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void constraintDescriptionIfAny(
        ::cereal::SchemaDescription&,
        ::cereal::Constraint const*,
        ::cereal::DescriptionConfig
#else // @header-generator platform
    MCAPI void constraintDescriptionIfAny(
        ::cereal::SchemaDescription& description,
        ::cereal::Constraint const*  constraint,
        ::cereal::DescriptionConfig  config
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::internal::VariantPriorityLevel
    findMinVariantPriorityLevel(::entt::meta_ctx const&, ::entt::meta_type const&) const;
#else // @header-generator platform
    MCAPI ::cereal::internal::VariantPriorityLevel
    findMinVariantPriorityLevel(::entt::meta_ctx const& ctx, ::entt::meta_type const& type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isGreedyCheck(::entt::meta_ctx const&, ::entt::meta_type const&) const;
#else // @header-generator platform
    MCAPI bool isGreedyCheck(::entt::meta_ctx const& ctx, ::entt::meta_type const& type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::SchemaDescription makeDescriptionForType(
        ::cereal::internal::ReflectionContext const&,
        ::entt::meta_type const&,
        ::cereal::DescriptionConfig
#else // @header-generator platform
    MCAPI ::cereal::SchemaDescription makeDescriptionForType(
        ::cereal::internal::ReflectionContext const& ctx,
        ::entt::meta_type const&                     type,
        ::cereal::DescriptionConfig                  config
#endif // @header-generator platform
    ) const;
    // NOLINTEND
};

} // namespace cereal::internal
