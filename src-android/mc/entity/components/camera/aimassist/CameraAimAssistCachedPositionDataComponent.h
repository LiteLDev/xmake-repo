#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct CameraAimAssistCachedPositionDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mHeadPos;
    ::ll::TypedStorage<4, 12, ::Vec3> mViewDir;
    ::ll::TypedStorage<4, 12, ::Vec3> mPos;
    ::ll::TypedStorage<1, 1, bool>    mHeadInLiquid;
    // NOLINTEND
};
