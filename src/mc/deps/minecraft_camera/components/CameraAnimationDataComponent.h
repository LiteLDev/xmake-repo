#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/minecraft_camera/components/LayerType.h"

// auto generated forward declare list
// clang-format off
namespace CameraSplineUtils { struct Layer; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/minecraft_camera/components/LayerType.h"

// auto generated forward declare list
// clang-format off
namespace CameraSplineUtils { struct Layer; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace MinecraftCamera {

#if defined(LL_PLAT_A) // @header-generator platform
struct CameraAnimationDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>     mLayers;
    ::ll::UntypedStorage<4, 24>     mCache;
    ::ll::TypedStorage<4, 4, float> mDuration;
    ::ll::TypedStorage<4, 4, float> mCurrentTime;
    ::ll::TypedStorage<1, 1, bool>  mLoop;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAnimationDataComponent& operator=(CameraAnimationDataComponent const&);
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CameraAnimationDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        32,
        ::Bedrock::DenseEnumMap<::MinecraftCamera::LayerType, ::std::shared_ptr<::CameraSplineUtils::Layer>, 2>>
                                                                                                     mLayers;
    ::ll::TypedStorage<4, 24, ::Bedrock::DenseEnumMap<::MinecraftCamera::LayerType, ::glm::vec3, 2>> mCache;
    ::ll::TypedStorage<4, 4, float>                                                                  mDuration;
    ::ll::TypedStorage<4, 4, float>                                                                  mCurrentTime;
    ::ll::TypedStorage<1, 1, bool>                                                                   mLoop;
    // NOLINTEND
};
#else // @header-generator platform
struct CameraAnimationDataComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace MinecraftCamera
