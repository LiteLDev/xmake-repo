#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicContextOwner.h"
#include "mc/deps/cereal/LoaderConfig.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/cereal/ResultCode.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/cereal/schema/Schema.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { class BasicSerializerContext; }
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct SchemaReader; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal {

class BasicLoader : public ::cereal::BasicContextOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 704, ::cereal::internal::Schema> mSchema;
    ::ll::TypedStorage<1, 1, ::cereal::LoaderConfig>       mConfig;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    BasicLoader();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BasicLoader() = default;
#else // @header-generator platform
    virtual ~BasicLoader();
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::BasicSerializerContext& getLog();

    MCNAPI bool loadImpl(
        ::cereal::SchemaReader&,
        ::entt::meta_handle,
        ::entt::meta_any const&,
        ::cereal::internal::BasicSchema const&
#else // @header-generator platform
    MCAPI bool loadImpl(
        ::cereal::SchemaReader&                reader,
        ::entt::meta_handle                    handle,
        ::entt::meta_any const&                loadContext,
        ::cereal::internal::BasicSchema const& fallback
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setConfig(::cereal::LoaderConfig const&);
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
