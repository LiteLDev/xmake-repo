#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/EntityId.h"
#endif // @header-generator platform
#include "mc/deps/game_refs/WeakRef.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class EntityId;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, float>                                    mAmount;
        ::ll::TypedStorage<4, 4, float>                                    mFieldOfView;
        ::ll::TypedStorage<4, 12, ::Vec3>                                  mEulerAngles;
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mPosition;
#else // @header-generator platform
        ::ll::TypedStorage<4, 4, float>        mAmount;
        ::ll::TypedStorage<4, 4, float>        mFieldOfView;
        ::ll::TypedStorage<4, 12, ::Vec3>      mEulerAngles;
        ::ll::TypedStorage<4, 12, ::glm::vec3> mPosition;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        EaseState& operator=(EaseState const&);
        EaseState();
#else // @header-generator platform
#endif // @header-generator platform
    };

    struct SnapShotEaseValues {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mTargetPos;
#else // @header-generator platform
        ::ll::TypedStorage<4, 12, ::glm::vec3> mTargetPos;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        SnapShotEaseValues& operator=(SnapShotEaseValues const&);
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 40>                                                                 mLastEaseState;
    ::ll::UntypedStorage<1, 24>                                                                 mActiveCamera;
    ::ll::TypedStorage<4, 4, float>                                                             mPercentage;
    ::ll::TypedStorage<8, 8, float (*)(float, float, float)>                                    mEaseFunction;
    ::ll::TypedStorage<4, 4, float>                                                             mBlendTime;
#else // @header-generator platform
    ::ll::TypedStorage<4, 36, ::std::optional<::MinecraftCamera::CameraBlendStateComponent::EaseState>> mLastEaseState;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityId>>                                                    mActiveCamera;
    ::ll::TypedStorage<4, 4, float>                                                                     mPercentage;
    ::ll::TypedStorage<8, 8, float (*)(float, float, float)>                                            mEaseFunction;
    ::ll::TypedStorage<4, 4, float>                                                                     mBlendTime;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                             mBlendStartFieldOfView;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                           mBlendStartPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                           mBlendStartEulerAngles;
    ::ll::TypedStorage<4, 12, ::MinecraftCamera::CameraBlendStateComponent::SnapShotEaseValues> mSnapShotEaseValues;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CameraBlendStateComponent& operator=(CameraBlendStateComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace MinecraftCamera
