#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/deps/core/math/Vec3.h"
#else // @header-generator platform
#endif // @header-generator platform

struct ServerCameraInstructionComponent {
public:
    // ServerCameraInstructionComponent inner types declare
    // clang-format off
    struct EaseOption;
    // clang-format on

    // ServerCameraInstructionComponent inner types define
    struct EaseOption {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::EasingType> mEaseType;
        ::ll::TypedStorage<4, 12, ::Vec3>      mStartPos;
        ::ll::TypedStorage<4, 4, int>          mCurrentTick;
        ::ll::TypedStorage<4, 4, int>          mTotalTicks;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4>  mUnk52128b;
        ::ll::UntypedStorage<4, 12> mUnkf14eaa;
        ::ll::UntypedStorage<4, 4>  mUnkcecb68;
        ::ll::UntypedStorage<4, 4>  mUnkb1628b;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        EaseOption& operator=(EaseOption const&);
        EaseOption(EaseOption const&);
        EaseOption();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                                                         mPresetIndex;
    ::ll::TypedStorage<4, 28, std::optional<ServerCameraInstructionComponent::EaseOption>> mEase;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                                                             mPresetIndex;
    ::ll::TypedStorage<4, 28, ::std::optional<::ServerCameraInstructionComponent::EaseOption>> mEase;
#endif // @header-generator platform
    // NOLINTEND
};
