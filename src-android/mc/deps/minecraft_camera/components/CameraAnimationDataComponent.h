#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/minecraft_camera/components/LayerType.h"

// auto generated forward declare list
// clang-format off
namespace CameraSplineUtils { struct Layer; }
// clang-format on

namespace MinecraftCamera {

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

} // namespace MinecraftCamera
