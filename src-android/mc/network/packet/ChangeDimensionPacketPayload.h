#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/LoadingScreenId.h"
#include "mc/world/level/dimension/DimensionType.h"

struct ChangeDimensionPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionId;
    ::ll::TypedStorage<4, 12, ::Vec3>         mPos;
    ::ll::UntypedStorage<1, 1>                mRespawn;
    ::ll::UntypedStorage<4, 8>                mLoadingScreenId;
    // NOLINTEND
};
