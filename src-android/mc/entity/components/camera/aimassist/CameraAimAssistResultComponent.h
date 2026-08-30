#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/ResultType.h"
#include "mc/world/phys/HitResult.h"

struct CameraAimAssistResultComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 136, ::HitResult>                 mSolidHitResult;
    ::ll::TypedStorage<4, 136, ::HitResult>                 mLiquidHitResult;
    ::ll::TypedStorage<4, 12, ::Vec3>                       mTargetCenterPos;
    ::ll::TypedStorage<1, 1, uchar>                         mBlockSideFacing;
    ::ll::TypedStorage<1, 1, ::CameraAimAssist::ResultType> mType;
    ::ll::TypedStorage<4, 8, ::Vec2>                        mInteractDir;
    ::ll::UntypedStorage<4, 8>                              mPriority;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistResultComponent& operator=(CameraAimAssistResultComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CameraAimAssistResultComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
