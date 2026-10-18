#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/game/cube_map/CloudParameters.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace CubeMap {

#if defined(LL_PLAT_A) // @header-generator platform
struct InGame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::CubeMap::CloudParameters> mCloudParameters;
    // NOLINTEND
};
#else // @header-generator platform
struct InGame {};
#endif // @header-generator platform

} // namespace CubeMap
