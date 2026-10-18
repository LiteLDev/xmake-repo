#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/HIDController.h"

class HIDControllerWin32 : public ::HIDController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::HWND__*> mHWnd;
    // NOLINTEND
};
#else // @header-generator platform
class HIDControllerWin32 {};
#endif // @header-generator platform
#endif // @header-generator platform
