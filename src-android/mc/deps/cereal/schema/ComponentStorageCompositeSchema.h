#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/DefaultCompositeSchema.h"

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

class ComponentStorageCompositeSchema : public ::cereal::internal::DefaultCompositeSchema {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual bool doMap(::entt::meta_any&, ::entt::meta_any&, ::cereal::MetaVisitor&) const;

    virtual void doLoad(::cereal::SchemaReader&, ::entt::meta_any&, ::entt::meta_any const&, ::cereal::internal::LoadState const&) const;

    virtual void doSave(::cereal::SchemaWriter&, ::entt::meta_any const&, ::cereal::internal::SaveState const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cereal::SchemaDescription makeDescriptionForComponents(
        ::cereal::internal::ReflectionContext const&,
        ::entt::meta_type const&,
        ::cereal::DescriptionConfig
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::entt::meta_data findComponentData(::entt::meta_type const&, uint, bool);

    MCNAPI static std::pair<uint, entt::meta_data>
    findComponentFamilyData(::entt::meta_type const&, ::entt::meta_type const&, std::string_view, bool);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $doMap(::entt::meta_any&, ::entt::meta_any&, ::cereal::MetaVisitor&) const;

    MCNAPI void $doLoad(
        ::cereal::SchemaReader&,
        ::entt::meta_any&,
        ::entt::meta_any const&,
        ::cereal::internal::LoadState const&
    ) const;

    MCNAPI void $doSave(::cereal::SchemaWriter&, ::entt::meta_any const&, ::cereal::internal::SaveState const&) const;
    // NOLINTEND
};

} // namespace cereal::internal
