#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DividedPos2d.h"

class IPreliminarySurfaceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPreliminarySurfaceProvider() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4>) const = 0;
#else // @header-generator platform
    virtual ::std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4> worldQuartPos) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
