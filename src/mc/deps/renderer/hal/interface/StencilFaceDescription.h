#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/enums/ComparisonFunc.h"
#include "mc/deps/core_graphics/enums/StencilOp.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct StencilFaceDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::mce::ComparisonFunc> stencilFunc;
    ::ll::TypedStorage<1, 1, ::mce::StencilOp>      stencilDepthFailOp;
    ::ll::TypedStorage<1, 1, ::mce::StencilOp>      stencilPassOp;
    ::ll::TypedStorage<1, 1, ::mce::StencilOp>      stencilFailOp;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StencilFaceDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
struct StencilFaceDescription {};
#endif // @header-generator platform

} // namespace mce
