#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

namespace SpeleothemUtils {

class WindOffsetter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                  originY;
    ::ll::TypedStorage<4, 16, std::optional<Vec3>> windSpeed;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                      originY;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> windSpeed;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SpeleothemUtils
