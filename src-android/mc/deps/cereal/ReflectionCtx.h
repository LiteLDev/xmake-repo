#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/JSONSchemaOutput.h"
#include "mc/deps/cereal/internal/ReflectionContext.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace cereal {

struct ReflectionCtx : public ::Bedrock::EnableNonOwnerReferences, public ::cereal::internal::ReflectionContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReflectionCtx();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ReflectionCtx();

    MCNAPI std::optional<entt::type_info> getKnownPropertyType(std::string_view const) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::cereal::ReflectionCtx& global();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
