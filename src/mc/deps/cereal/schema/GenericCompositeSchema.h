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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual bool doMap(::entt::meta_any&, ::entt::meta_any&, ::cereal::MetaVisitor&) const;
#else // @header-generator platform
    virtual void doLoad(
        ::cereal::SchemaReader&              reader,
        ::entt::meta_any&                    any,
        ::entt::meta_any const&              udata,
        ::cereal::internal::LoadState const& state
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void doLoad(::cereal::SchemaReader&, ::entt::meta_any&, ::entt::meta_any const&, ::cereal::internal::LoadState const&) const;
#else // @header-generator platform
    virtual void doSave(
        ::cereal::SchemaWriter&              writer,
        ::entt::meta_any const&              any,
        ::cereal::internal::SaveState const& state
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void doSave(::cereal::SchemaWriter&, ::entt::meta_any const&, ::cereal::internal::SaveState const&) const;
    // clang-format on
#else // @header-generator platform
    virtual bool doMap(::entt::meta_any& src, ::entt::meta_any& dst, ::cereal::MetaVisitor& visitor) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int iterate(::entt::meta_type const&, ::entt::meta_any&, ::entt::meta_any&, ::cereal::MetaVisitor&) const;
#else // @header-generator platform
    MCAPI int iterate(
        ::entt::meta_type const& type,
        ::entt::meta_any&        src,
        ::entt::meta_any&        dst,
        ::cereal::MetaVisitor&   visitor
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void members(::entt::meta_any&, ::entt::meta_any&, ::cereal::MetaVisitor&) const;
#else // @header-generator platform
    MCAPI void members(::entt::meta_any& src, ::entt::meta_any& dst, ::cereal::MetaVisitor& visitor) const;
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool setters(::entt::meta_any&, ::entt::meta_any&, ::cereal::MetaVisitor&) const;
#else // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool setters(::entt::meta_any& src, ::entt::meta_any& dst, ::cereal::MetaVisitor& visitor);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $doMap(::entt::meta_any&, ::entt::meta_any&, ::cereal::MetaVisitor&) const;

    MCNAPI void $doLoad(
        ::cereal::SchemaReader&,
        ::entt::meta_any&,
        ::entt::meta_any const&,
        ::cereal::internal::LoadState const&
#else // @header-generator platform
    MCAPI void $doLoad(
        ::cereal::SchemaReader&              reader,
        ::entt::meta_any&                    any,
        ::entt::meta_any const&              udata,
        ::cereal::internal::LoadState const& state
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $doSave(::cereal::SchemaWriter&, ::entt::meta_any const&, ::cereal::internal::SaveState const&) const;
#else // @header-generator platform
    MCAPI void $doSave(
        ::cereal::SchemaWriter&              writer,
        ::entt::meta_any const&              any,
        ::cereal::internal::SaveState const& state
    ) const;

    MCAPI bool $doMap(::entt::meta_any& src, ::entt::meta_any& dst, ::cereal::MetaVisitor& visitor) const;


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cereal::internal
