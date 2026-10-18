#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/TargetMode.h"

struct CameraAimAssistComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2>                        mViewFrustumAngle;
    ::ll::TypedStorage<4, 4, float>                         mViewFrustumDistance;
    ::ll::TypedStorage<1, 1, ::CameraAimAssist::TargetMode> mTargetMode;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>               mPriorityPresetId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>               mPriorityPresetId;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                          mShowDebugRender;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    CameraAimAssistComponent& operator=(CameraAimAssistComponent const&);
#else // @header-generator platform
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ~CameraAimAssistComponent();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
    // NOLINTEND
#endif // @header-generator platform
};
