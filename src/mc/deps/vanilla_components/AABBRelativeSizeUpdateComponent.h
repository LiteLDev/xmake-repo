#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

struct AABBRelativeSizeUpdateComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, std::optional<Vec2>> mHeadScalar;
    ::ll::TypedStorage<4, 12, std::optional<Vec2>> mEyeScalar;
    ::ll::TypedStorage<4, 12, std::optional<Vec2>> mBreathingScalar;
    ::ll::TypedStorage<4, 12, std::optional<Vec2>> mMouthScalar;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>> mHeadScalar;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>> mEyeScalar;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>> mBreathingScalar;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>> mMouthScalar;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    AABBRelativeSizeUpdateComponent& operator=(AABBRelativeSizeUpdateComponent const&);
    AABBRelativeSizeUpdateComponent(AABBRelativeSizeUpdateComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
