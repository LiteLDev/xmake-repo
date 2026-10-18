#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class PixelCalc {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mPixelsPerMillimeter;
    ::ll::TypedStorage<4, 4, float> mMillimetersPerPixel;
    // NOLINTEND

public:
    // prevent constructor by default
    PixelCalc();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PixelCalc(float);

    MCNAPI float millimetersToPixels(float) const;

    MCNAPI void setPixelsPerMillimeter(float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class PixelCalc {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mPixelsPerMillimeter;
    ::ll::TypedStorage<4, 4, float> mMillimetersPerPixel;
    // NOLINTEND
};
#else // @header-generator platform
class PixelCalc {};
#endif // @header-generator platform
#endif // @header-generator platform
