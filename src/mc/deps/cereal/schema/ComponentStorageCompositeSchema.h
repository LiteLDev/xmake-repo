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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual bool doMap(::entt::meta_any&, ::entt::meta_any&, ::cereal::MetaVisitor&) const;
#else // @header-generator platform
    virtual void doSave(
        ::cereal::SchemaWriter&              writer,
        ::entt::meta_any const&              any,
        ::cereal::internal::SaveState const& state
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void doLoad(::cereal::SchemaReader&, ::entt::meta_any&, ::entt::meta_any const&, ::cereal::internal::LoadState const&) const;
#else // @header-generator platform
    virtual void doLoad(
        ::cereal::SchemaReader&              reader,
        ::entt::meta_any&                    any,
        ::entt::meta_any const&              udata,
        ::cereal::internal::LoadState const& state
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
    MCNAPI ::cereal::SchemaDescription makeDescriptionForComponents(
        ::cereal::internal::ReflectionContext const&,
        ::entt::meta_type const&,
        ::cereal::DescriptionConfig
#else // @header-generator platform
    MCAPI ::cereal::SchemaDescription makeDescriptionForComponents(
        ::cereal::internal::ReflectionContext const& ctx,
        ::entt::meta_type const&                     type,
        ::cereal::DescriptionConfig                  config
#endif // @header-generator platform
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::entt::meta_data findComponentData(::entt::meta_type const&, uint, bool);
#else // @header-generator platform
    MCAPI static ::entt::meta_data
    findComponentData(::entt::meta_type const& type, uint componentId, bool serializeDeprecated);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::pair<uint, entt::meta_data>
    findComponentFamilyData(::entt::meta_type const&, ::entt::meta_type const&, std::string_view, bool);
#else // @header-generator platform
    MCAPI static ::std::pair<uint, ::entt::meta_data> findComponentFamilyData(
        ::entt::meta_type const& source,
        ::entt::meta_type const& curr,
        ::std::string_view       family,
        bool                     serializeDeprecated
    );
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
    MCAPI void $doSave(
        ::cereal::SchemaWriter&              writer,
        ::entt::meta_any const&              any,
        ::cereal::internal::SaveState const& state
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $doSave(::cereal::SchemaWriter&, ::entt::meta_any const&, ::cereal::internal::SaveState const&) const;
#else // @header-generator platform
    MCAPI void $doLoad(
        ::cereal::SchemaReader&              reader,
        ::entt::meta_any&                    any,
        ::entt::meta_any const&              udata,
        ::cereal::internal::LoadState const& state
    ) const;

    MCAPI bool $doMap(::entt::meta_any& src, ::entt::meta_any& dst, ::cereal::MetaVisitor& visitor) const;


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cereal::internal
