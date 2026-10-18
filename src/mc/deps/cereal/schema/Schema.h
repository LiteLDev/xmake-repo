#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/cereal/ResultCode.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/cereal/SerializerContext.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { class BasicSerializerContext; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct LoaderConfig; }
namespace cereal { struct SaverConfig; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal::internal {

struct Schema {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 696, ::cereal::SerializerContext>          mContext;
    ::ll::TypedStorage<8, 8, ::cereal::internal::BasicSchema const*> mSchema;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    Schema();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit Schema(::cereal::ResultCode);
#else // @header-generator platform
    MCAPI bool load(
        ::cereal::SchemaReader&       reader,
        ::entt::meta_handle           data,
        ::entt::meta_any const&       loadContext,
        ::cereal::LoaderConfig const& config
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    loadImpl(::cereal::SchemaReader&, ::entt::meta_any, ::entt::meta_any const&, ::cereal::LoaderConfig const&);

    MCNAPI ~Schema();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ResultCode);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI bool save(::cereal::SchemaWriter& writer, ::entt::meta_handle data, ::cereal::SaverConfig const& config);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cereal::internal
