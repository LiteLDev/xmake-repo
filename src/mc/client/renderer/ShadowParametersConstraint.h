#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
namespace mce::framebuilder { struct ShadowParameters; }
// clang-format on

class ShadowParametersConstraint : public ::cereal::ConstraintHandle<ShadowParametersConstraint> {
public:
    // prevent constructor by default
    ShadowParametersConstraint& operator=(ShadowParametersConstraint const&);
    ShadowParametersConstraint(ShadowParametersConstraint const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShadowParametersConstraint();

    virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cereal::internal::ConstraintDescription $doDescription(::cereal::ContextArea) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ShadowParametersConstraint {};
#endif // @header-generator platform
