#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct DescriptionConfig; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { struct LoadState; }
namespace cereal::internal { struct ReflectionContext; }
namespace cereal::internal { struct SaveState; }
// clang-format on

namespace cereal::internal {

class UndefinedSchema : public ::cereal::internal::BasicSchema {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~UndefinedSchema();
#else // @header-generator platform
    virtual void doLoad(
        ::cereal::SchemaReader&,
        ::entt::meta_any&,
        ::entt::meta_any const&,
        ::cereal::internal::LoadState const& state
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void doLoad(::cereal::SchemaReader&, ::entt::meta_any&, ::entt::meta_any const&, ::cereal::internal::LoadState const&) const;
#else // @header-generator platform
    virtual void
    doSave(::cereal::SchemaWriter&, ::entt::meta_any const& any, ::cereal::internal::SaveState const& state) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void doSave(::cereal::SchemaWriter&, ::entt::meta_any const&, ::cereal::internal::SaveState const&) const;

    virtual ::cereal::SchemaDescription makeDescription(::cereal::internal::ReflectionContext const&, ::cereal::DescriptionConfig) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::cereal::SchemaDescription
    makeDescription(::cereal::internal::ReflectionContext const&, ::cereal::DescriptionConfig) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $doLoad(
#else // @header-generator platform
    MCAPI void $doLoad(
#endif // @header-generator platform
        ::cereal::SchemaReader&,
        ::entt::meta_any&,
        ::entt::meta_any const&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::cereal::internal::LoadState const&
#else // @header-generator platform
        ::cereal::internal::LoadState const& state
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $doSave(::cereal::SchemaWriter&, ::entt::meta_any const&, ::cereal::internal::SaveState const&) const;
#else // @header-generator platform
    MCAPI void
    $doSave(::cereal::SchemaWriter&, ::entt::meta_any const& any, ::cereal::internal::SaveState const& state) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::SchemaDescription
#else // @header-generator platform
    MCAPI ::cereal::SchemaDescription
#endif // @header-generator platform
    $makeDescription(::cereal::internal::ReflectionContext const&, ::cereal::DescriptionConfig) const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal::internal
