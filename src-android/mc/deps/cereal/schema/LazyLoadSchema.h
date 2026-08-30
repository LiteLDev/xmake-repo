#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/BasicSchema.h"
#include "mc/deps/cereal/schema/VariantPriorityLevel.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct DescriptionConfig; }
namespace cereal { struct MetaVisitor; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { struct LoadState; }
namespace cereal::internal { struct ReflectionContext; }
namespace cereal::internal { struct SaveState; }
// clang-format on

namespace cereal::internal {

class LazyLoadSchema : public ::cereal::internal::BasicSchema {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ::cereal::internal::VariantPriorityLevel minVariantPriorityLevel(::entt::meta_ctx const&) const;

    virtual bool doMap(::entt::meta_any&, ::entt::meta_any&, ::cereal::MetaVisitor&) const;

    virtual void doLoad(::cereal::SchemaReader&, ::entt::meta_any&, ::entt::meta_any const&, ::cereal::internal::LoadState const&) const;

    virtual void doSave(::cereal::SchemaWriter&, ::entt::meta_any const&, ::cereal::internal::SaveState const&) const;

    virtual ::cereal::SchemaDescription makeDescription(::cereal::internal::ReflectionContext const&, ::cereal::DescriptionConfig) const;

    virtual ::entt::type_info const& typeInfo() const = 0;
    // clang-format on
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cereal::internal::VariantPriorityLevel $minVariantPriorityLevel(::entt::meta_ctx const&) const;

    MCNAPI bool $doMap(::entt::meta_any&, ::entt::meta_any&, ::cereal::MetaVisitor&) const;

    MCNAPI void $doLoad(
        ::cereal::SchemaReader&,
        ::entt::meta_any&,
        ::entt::meta_any const&,
        ::cereal::internal::LoadState const&
    ) const;

    MCNAPI void $doSave(::cereal::SchemaWriter&, ::entt::meta_any const&, ::cereal::internal::SaveState const&) const;

    MCNAPI ::cereal::SchemaDescription
    $makeDescription(::cereal::internal::ReflectionContext const&, ::cereal::DescriptionConfig) const;
    // NOLINTEND
};

} // namespace cereal::internal
