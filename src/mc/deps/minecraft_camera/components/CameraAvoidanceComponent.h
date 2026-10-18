#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_100/camera/CameraAvoidanceRay.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_100 { struct CameraAvoidanceRay; }
// clang-format on
#endif // @header-generator platform

namespace MinecraftCamera {

struct CameraAvoidanceComponent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_100::CameraAvoidanceRay>> mAvoidanceRaysHorizontal;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_100::CameraAvoidanceRay>> mAvoidanceRaysVertical;
    ::ll::TypedStorage<4, 4, float>                                                    mRelaxDistanceSmoothingStiffness;
    ::ll::TypedStorage<4, 4, float>                                                    mDistanceConstraintMin;
    ::ll::TypedStorage<4, 4, float>                                                    mRelaxDistanceVelocity;
    ::ll::TypedStorage<4, 4, float>                                                    mSmoothedDistanceConstraint;
    // NOLINTEND
#else // @header-generator platform
    // CameraAvoidanceComponent inner types define
    using CameraAvoidanceRay = ::SharedTypes::v1_21_100::CameraAvoidanceRay;
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    CameraAvoidanceComponent& operator=(CameraAvoidanceComponent const&);
#else // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_100::CameraAvoidanceRay>> mAvoidanceRaysHorizontal;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_100::CameraAvoidanceRay>> mAvoidanceRaysVertical;
    ::ll::TypedStorage<4, 4, float> mRelaxDistanceSmoothingStiffness;
    ::ll::TypedStorage<4, 4, float> mDistanceConstraintMin;
    ::ll::TypedStorage<4, 4, float> mRelaxDistanceVelocity;
    ::ll::TypedStorage<4, 4, float> mSmoothedDistanceConstraint;
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    CameraAvoidanceComponent& operator=(CameraAvoidanceComponent const&);
    CameraAvoidanceComponent();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CameraAvoidanceComponent(::MinecraftCamera::CameraAvoidanceComponent const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI CameraAvoidanceComponent(::MinecraftCamera::CameraAvoidanceComponent const&);

    MCAPI ::MinecraftCamera::CameraAvoidanceComponent& operator=(::MinecraftCamera::CameraAvoidanceComponent&&);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MinecraftCamera::CameraAvoidanceComponent const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::MinecraftCamera::CameraAvoidanceComponent const&);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace MinecraftCamera
