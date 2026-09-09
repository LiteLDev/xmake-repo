#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"

struct DebugRenderPositionQueueComponent {
public:
    // DebugRenderPositionQueueComponent inner types declare
    // clang-format off
    struct DebugRenderInfo;
    // clang-format on

    // DebugRenderPositionQueueComponent inner types define
    struct DebugRenderInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3>       mPosition;
        ::ll::TypedStorage<4, 16, ::mce::Color> mDebugPointColor;
        ::ll::TypedStorage<8, 24, std::string>  mDebugPointName;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 48> mPositions;
    // NOLINTEND
};
