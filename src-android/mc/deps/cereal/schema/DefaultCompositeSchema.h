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
    MCNAPI void constraintDescriptionIfAny(
        ::cereal::SchemaDescription&,
        ::cereal::Constraint const*,
        ::cereal::DescriptionConfig
    ) const;

    MCNAPI ::cereal::internal::VariantPriorityLevel
    findMinVariantPriorityLevel(::entt::meta_ctx const&, ::entt::meta_type const&) const;

    MCNAPI bool isGreedyCheck(::entt::meta_ctx const&, ::entt::meta_type const&) const;

    MCNAPI ::cereal::SchemaDescription makeDescriptionForType(
        ::cereal::internal::ReflectionContext const&,
        ::entt::meta_type const&,
        ::cereal::DescriptionConfig
    ) const;
    // NOLINTEND
};

} // namespace cereal::internal
