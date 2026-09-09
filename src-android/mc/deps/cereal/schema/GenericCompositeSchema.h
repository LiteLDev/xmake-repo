#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/DefaultCompositeSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct MetaVisitor; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { struct LoadState; }
namespace cereal::internal { struct SaveState; }
// clang-format on

namespace cereal::internal {

class GenericCompositeSchema : public ::cereal::internal::DefaultCompositeSchema {
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
    MCNAPI int iterate(::entt::meta_type const&, ::entt::meta_any&, ::entt::meta_any&, ::cereal::MetaVisitor&) const;

    MCNAPI void members(::entt::meta_any&, ::entt::meta_any&, ::cereal::MetaVisitor&) const;

    MCNAPI bool setters(::entt::meta_any&, ::entt::meta_any&, ::cereal::MetaVisitor&) const;
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
