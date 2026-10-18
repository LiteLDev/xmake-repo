#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct AbsoluteSizeUpdateComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, std::optional<Vec3>> mHeadOffset;
    ::ll::TypedStorage<4, 16, std::optional<Vec3>> mEyeOffset;
    ::ll::TypedStorage<4, 16, std::optional<Vec3>> mBreathingOffset;
    ::ll::TypedStorage<4, 16, std::optional<Vec3>> mMouthOffset;
#else // @header-generator platform
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mHeadOffset;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mEyeOffset;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mBreathingOffset;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mMouthOffset;
#endif // @header-generator platform
    // NOLINTEND
};
