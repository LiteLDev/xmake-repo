#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityId;
// clang-format on

namespace MinecraftCamera {

struct CameraBlendStateComponent {
public:
    // CameraBlendStateComponent inner types declare
    // clang-format off
    struct EaseState;
    struct SnapShotEaseValues;
    // clang-format on

    // CameraBlendStateComponent inner types define
    struct EaseState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                                    mAmount;
        ::ll::TypedStorage<4, 4, float>                                    mFieldOfView;
        ::ll::TypedStorage<4, 12, ::Vec3>                                  mEulerAngles;
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mPosition;
        // NOLINTEND

    public:
        // prevent constructor by default
        EaseState& operator=(EaseState const&);
        EaseState();
    };

    struct SnapShotEaseValues {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mTargetPos;
        // NOLINTEND

    public:
        // prevent constructor by default
        SnapShotEaseValues& operator=(SnapShotEaseValues const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 40>                                                                 mLastEaseState;
    ::ll::UntypedStorage<1, 24>                                                                 mActiveCamera;
    ::ll::TypedStorage<4, 4, float>                                                             mPercentage;
    ::ll::TypedStorage<8, 8, float (*)(float, float, float)>                                    mEaseFunction;
    ::ll::TypedStorage<4, 4, float>                                                             mBlendTime;
    ::ll::TypedStorage<4, 4, float>                                                             mBlendStartFieldOfView;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                           mBlendStartPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                           mBlendStartEulerAngles;
    ::ll::TypedStorage<4, 12, ::MinecraftCamera::CameraBlendStateComponent::SnapShotEaseValues> mSnapShotEaseValues;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraBlendStateComponent& operator=(CameraBlendStateComponent const&);
};

} // namespace MinecraftCamera
