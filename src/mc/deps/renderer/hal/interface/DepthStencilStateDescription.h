#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/enums/ComparisonFunc.h"
#include "mc/deps/core_graphics/enums/DepthWriteMask.h"
#include "mc/deps/renderer/hal/interface/StencilFaceDescription.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/enums/ComparisonFunc.h"
#include "mc/deps/core_graphics/enums/DepthWriteMask.h"
#include "mc/deps/renderer/hal/interface/StencilFaceDescription.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct DepthStencilStateDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                          depthTestEnabled;
    ::ll::TypedStorage<1, 1, bool>                          stencilTestEnabled;
    ::ll::TypedStorage<1, 1, ::mce::ComparisonFunc>         depthFunc;
    ::ll::TypedStorage<1, 4, ::mce::StencilFaceDescription> frontFace;
    ::ll::TypedStorage<1, 4, ::mce::StencilFaceDescription> backFace;
    ::ll::TypedStorage<1, 1, ::mce::DepthWriteMask>         depthWriteMask;
    ::ll::TypedStorage<4, 4, uint>                          stencilReadMask;
    ::ll::TypedStorage<4, 4, uint>                          stencilWriteMask;
    ::ll::TypedStorage<1, 1, uchar>                         stencilRef;
    ::ll::TypedStorage<1, 1, uchar>                         originalStencilRef;
    ::ll::TypedStorage<1, 1, bool>                          overwroteStencilRef;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DepthStencilStateDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DepthStencilStateDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                          depthTestEnabled;
    ::ll::TypedStorage<1, 1, bool>                          stencilTestEnabled;
    ::ll::TypedStorage<1, 1, ::mce::ComparisonFunc>         depthFunc;
    ::ll::TypedStorage<1, 4, ::mce::StencilFaceDescription> frontFace;
    ::ll::TypedStorage<1, 4, ::mce::StencilFaceDescription> backFace;
    ::ll::TypedStorage<1, 1, ::mce::DepthWriteMask>         depthWriteMask;
    ::ll::TypedStorage<4, 4, uint>                          stencilReadMask;
    ::ll::TypedStorage<4, 4, uint>                          stencilWriteMask;
    ::ll::TypedStorage<1, 1, uchar>                         stencilRef;
    ::ll::TypedStorage<1, 1, uchar>                         originalStencilRef;
    ::ll::TypedStorage<1, 1, bool>                          overwroteStencilRef;
    // NOLINTEND
};
#else // @header-generator platform
struct DepthStencilStateDescription {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
