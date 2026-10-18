#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/camera/CameraSplineDefinition.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_0 { struct CameraSplineDefinition; }
// clang-format on
#endif // @header-generator platform

namespace MinecraftCamera {

struct CameraGlobalSplineComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_0::CameraSplineDefinition>> mSplines;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_0::CameraSplineDefinition>> mSplines;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace MinecraftCamera
