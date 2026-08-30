#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ResultCode.h"
#include "mc/deps/cereal/SerializerContext.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class BasicSerializerContext; }
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
    // prevent constructor by default
    Schema();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Schema(::cereal::ResultCode);

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
    // NOLINTEND
};

} // namespace cereal::internal
