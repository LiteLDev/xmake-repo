#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicContextOwner.h"
#include "mc/deps/cereal/LoaderConfig.h"
#include "mc/deps/cereal/ResultCode.h"
#include "mc/deps/cereal/schema/Schema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class BasicSerializerContext; }
namespace cereal { struct ReflectionCtx; }
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
    // prevent constructor by default
    BasicLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BasicLoader() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cereal::BasicSerializerContext& getLog();

    MCNAPI bool loadImpl(
        ::cereal::SchemaReader&,
        ::entt::meta_handle,
        ::entt::meta_any const&,
        ::cereal::internal::BasicSchema const&
    );

    MCNAPI void setConfig(::cereal::LoaderConfig const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
