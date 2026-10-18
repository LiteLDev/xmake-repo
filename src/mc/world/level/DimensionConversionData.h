#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

class DimensionConversionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mOverworldSpawnPoint;
    ::ll::TypedStorage<4, 4, int>     mNetherScale;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DimensionConversionData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DimensionConversionData(::Vec3 const&, int);

    MCNAPI int getNetherScale() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Vec3 const&, int);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
