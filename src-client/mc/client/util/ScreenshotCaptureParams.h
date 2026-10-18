#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ScreenshotColorSpace.h"

struct ScreenshotCaptureParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScreenshotColorSpace const> mColorSpace;
    ::ll::TypedStorage<1, 1, bool const>                   mShowUI;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
