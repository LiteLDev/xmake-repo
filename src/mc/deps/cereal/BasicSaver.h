#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicContextOwner.h"
#include "mc/deps/cereal/SaverConfig.h"
#include "mc/deps/cereal/schema/Schema.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { class BasicSerializerContext; }
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal {

class BasicSaver : public ::cereal::BasicContextOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 704, ::cereal::internal::Schema> mSchema;
    ::ll::TypedStorage<1, 2, ::cereal::SaverConfig>        mConfig;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    BasicSaver();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BasicSaver() = default;
#else // @header-generator platform
    virtual ~BasicSaver();
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BasicSaver(::cereal::ReflectionCtx const&, ::cereal::SaverConfig const&);

    MCNAPI ::cereal::BasicSerializerContext& getLog();

    MCNAPI bool saveImpl(::cereal::SchemaWriter&, ::entt::meta_handle, ::cereal::internal::BasicSchema const&);
#else // @header-generator platform
    MCAPI bool saveImpl(
        ::cereal::SchemaWriter&                writer,
        ::entt::meta_handle                    handle,
        ::cereal::internal::BasicSchema const& fallback
    );
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::cereal::ReflectionCtx const&, ::cereal::SaverConfig const&);
#else // @header-generator platform
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
