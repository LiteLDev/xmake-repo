#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace MinecraftCamera {

struct CameraTargetComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>    mIsOutOfRange;
    ::ll::TypedStorage<1, 1, bool>    mSnappedToTarget;
    ::ll::TypedStorage<1, 1, bool>    mFoundActor;
    ::ll::TypedStorage<8, 8, long>    mTargetActorId;
    ::ll::TypedStorage<4, 8, ::Vec2>  mCurrentRotation;
    ::ll::TypedStorage<4, 8, ::Vec2>  mInitialRotation;
    ::ll::TypedStorage<4, 8, ::Vec2>  mVerticalRotationLimits;
    ::ll::TypedStorage<4, 8, ::Vec2>  mOffset2DRotation;
    ::ll::TypedStorage<4, 12, ::Vec3> mAverageRotLimitOrientation;
    ::ll::TypedStorage<4, 12, ::Vec3> mCurrentCameraOrientation;
    ::ll::TypedStorage<4, 12, ::Vec3> mInitialCameraOrientation;
    ::ll::TypedStorage<4, 12, ::Vec3> mInitialTargetCenterOffset;
    ::ll::UntypedStorage<4, 16>       mTargetCenterOffset;
    ::ll::UntypedStorage<1, 24>       mTargetEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraTargetComponent& operator=(CameraTargetComponent const&);
};

} // namespace MinecraftCamera
