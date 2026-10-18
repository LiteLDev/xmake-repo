#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
struct ScreenInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> Width;
    ::ll::TypedStorage<4, 4, uint> Height;
    ::ll::TypedStorage<4, 4, uint> AvailableWidth;
    ::ll::TypedStorage<4, 4, uint> AvailableHeight;
    ::ll::TypedStorage<4, 4, uint> ColorDepth;
    ::ll::TypedStorage<4, 4, uint> PixelDepth;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ScreenInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk919466;
    ::ll::UntypedStorage<4, 4> mUnkbf2b53;
    ::ll::UntypedStorage<4, 4> mUnk1c672b;
    ::ll::UntypedStorage<4, 4> mUnkdd2ed8;
    ::ll::UntypedStorage<4, 4> mUnkf27215;
    ::ll::UntypedStorage<4, 4> mUnk106a33;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenInfo& operator=(ScreenInfo const&);
    ScreenInfo(ScreenInfo const&);
    ScreenInfo();
};
#else // @header-generator platform
struct ScreenInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
