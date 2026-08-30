#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/CullMode.h"
#include "mc/deps/core_graphics/enums/FillMode.h"

namespace mce {

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

} // namespace mce
