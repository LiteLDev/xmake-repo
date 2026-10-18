#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#else // @header-generator platform
#endif // @header-generator platform

struct PushVectors {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3> mOwnerPush;
    ::ll::TypedStorage<4, 12, ::Vec3> mOtherPush;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 12> mUnkac4596;
    ::ll::UntypedStorage<4, 12> mUnkef913a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PushVectors& operator=(PushVectors const&);
    PushVectors(PushVectors const&);
    PushVectors();
#endif // @header-generator platform
};
