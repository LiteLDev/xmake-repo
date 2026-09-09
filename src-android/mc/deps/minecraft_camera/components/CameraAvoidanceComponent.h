#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_100/camera/CameraAvoidanceRay.h"

namespace MinecraftCamera {

struct CameraAvoidanceComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_100::CameraAvoidanceRay>> mAvoidanceRaysHorizontal;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_100::CameraAvoidanceRay>> mAvoidanceRaysVertical;
    ::ll::TypedStorage<4, 4, float>                                                    mRelaxDistanceSmoothingStiffness;
    ::ll::TypedStorage<4, 4, float>                                                    mDistanceConstraintMin;
    ::ll::TypedStorage<4, 4, float>                                                    mRelaxDistanceVelocity;
    ::ll::TypedStorage<4, 4, float>                                                    mSmoothedDistanceConstraint;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAvoidanceComponent& operator=(CameraAvoidanceComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraAvoidanceComponent(::MinecraftCamera::CameraAvoidanceComponent const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftCamera::CameraAvoidanceComponent const&);
    // NOLINTEND
};

} // namespace MinecraftCamera
