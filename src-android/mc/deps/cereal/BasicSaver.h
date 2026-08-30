#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicContextOwner.h"
#include "mc/deps/cereal/SaverConfig.h"
#include "mc/deps/cereal/schema/Schema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class BasicSerializerContext; }
namespace cereal { struct ReflectionCtx; }
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
    // prevent constructor by default
    BasicSaver();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BasicSaver() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BasicSaver(::cereal::ReflectionCtx const&, ::cereal::SaverConfig const&);

    MCNAPI ::cereal::BasicSerializerContext& getLog();

    MCNAPI bool saveImpl(::cereal::SchemaWriter&, ::entt::meta_handle, ::cereal::internal::BasicSchema const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx const&, ::cereal::SaverConfig const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
