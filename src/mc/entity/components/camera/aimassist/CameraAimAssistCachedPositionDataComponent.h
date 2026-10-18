#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct CameraAimAssistCachedPositionDataComponent {};
#endif // @header-generator platform
