#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/minecraft_camera/components/LayerType.h"

// auto generated forward declare list
// clang-format off
namespace CameraSplineUtils { struct Layer; }
namespace CameraSplineUtils { struct Spline3d; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/minecraft_camera/components/LayerType.h"

// auto generated forward declare list
// clang-format off
namespace CameraSplineUtils { struct Layer; }
namespace CameraSplineUtils { struct Spline3d; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace MinecraftCamera {

#if defined(LL_PLAT_A) // @header-generator platform
struct CameraAnimationStorageComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<CameraSplineUtils::Spline3d>> mCurveOwner;
    ::ll::UntypedStorage<8, 32>                                             mLayers;
    ::ll::TypedStorage<4, 4, float>                                         mDuration;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAnimationStorageComponent& operator=(CameraAnimationStorageComponent const&);
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CameraAnimationStorageComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CameraSplineUtils::Spline3d>> mCurveOwner;
    ::ll::TypedStorage<
        8,
        32,
        ::Bedrock::DenseEnumMap<::MinecraftCamera::LayerType, ::std::shared_ptr<::CameraSplineUtils::Layer>, 2>>
                                    mLayers;
    ::ll::TypedStorage<4, 4, float> mDuration;
    // NOLINTEND
};
#else // @header-generator platform
struct CameraAnimationStorageComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace MinecraftCamera
