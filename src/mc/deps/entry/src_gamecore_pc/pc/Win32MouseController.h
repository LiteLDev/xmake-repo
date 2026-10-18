#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MainGameCore {

#if defined(LL_PLAT_C) // @header-generator platform
class Win32MouseController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> mCursorX;
    ::ll::TypedStorage<2, 2, short> mCursorY;
    ::ll::TypedStorage<1, 1, bool>  mLeftButtonPressed;
    // NOLINTEND
};
#else // @header-generator platform
class Win32MouseController {};
#endif // @header-generator platform

} // namespace MainGameCore
#endif // @header-generator platform
