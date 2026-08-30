#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/WireframeQuad.h"
#include "mc/world/level/BlockPos.h"

struct Wireframe {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                      mPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>                      mBox;
    ::ll::TypedStorage<4, 1248, std::array<WireframeQuad, 24>> mQuadList;
    // NOLINTEND
};
