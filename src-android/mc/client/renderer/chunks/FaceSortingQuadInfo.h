#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct FaceSortingQuadInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mCentroid;
    ::ll::TypedStorage<4, 4, uint>    mFaceVertexIndex;
    ::ll::TypedStorage<1, 1, bool>    mReverse;
    // NOLINTEND
};
