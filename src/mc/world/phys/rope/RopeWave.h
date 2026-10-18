#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

#else // @header-generator platform
#endif // @header-generator platform
struct RopeWave {
public:
    // RopeWave inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum Direction : uint {
        StartToEnd = 0,
        EndToStart = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>               mForce;
    ::ll::TypedStorage<4, 4, float>                 mSpeed;
    ::ll::TypedStorage<4, 4, float>                 mDamping;
    ::ll::TypedStorage<8, 8, ulong>                 mCurNode;
    ::ll::TypedStorage<4, 4, float>                 mDistAlongNode;
    ::ll::TypedStorage<4, 4, ::RopeWave::Direction> mDir;
    // NOLINTEND

public:
    // prevent constructor by default
    RopeWave();
#else // @header-generator platform
    enum class Direction : int {};
#endif // @header-generator platform
};
