#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/dimension/DimensionType.h"
#else // @header-generator platform
#endif // @header-generator platform

struct WorldPosition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>         mPos;
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionType;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 12> mUnk4d9121;
    ::ll::UntypedStorage<4, 4>  mUnkd4ba9a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    WorldPosition& operator=(WorldPosition const&);
    WorldPosition(WorldPosition const&);
    WorldPosition();
#endif // @header-generator platform
};
