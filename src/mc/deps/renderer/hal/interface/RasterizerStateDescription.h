#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/enums/CullMode.h"
#include "mc/deps/core_graphics/enums/FillMode.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct RasterizerStateDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>           depthBias;
    ::ll::TypedStorage<4, 4, float>           slopeScaledDepthBias;
    ::ll::TypedStorage<1, 1, ::mce::CullMode> cullMode;
    ::ll::TypedStorage<1, 1, ::mce::FillMode> fillMode;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RasterizerStateDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
struct RasterizerStateDescription {};
#endif // @header-generator platform

} // namespace mce
