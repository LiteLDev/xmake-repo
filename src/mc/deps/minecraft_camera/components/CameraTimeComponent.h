#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraTimeComponent {
public:
    // CameraTimeComponent inner types declare
    // clang-format off
    struct ElapsedTime;
    struct DeltaTime;
    // clang-format on

    // CameraTimeComponent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ElapsedTime {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mElapsedTime;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ElapsedTime {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mElapsedTime;
        // NOLINTEND
    };
#else // @header-generator platform
    struct ElapsedTime {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct DeltaTime {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                mDeltaTime;
        ::ll::TypedStorage<4, 8, std::optional<float>> mElapsedTime;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mUpdatedAt;
    ::ll::TypedStorage<4, 4, float> mDeltaTime;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraTimeComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void updateDeltaTime(::MinecraftCamera::CameraTimeComponent::ElapsedTime const&);
    // NOLINTEND
#else // @header-generator platform
    struct DeltaTime {};
#if defined(LL_PLAT_C) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mUpdatedAt;
    ::ll::TypedStorage<4, 4, float> mDeltaTime;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace MinecraftCamera
