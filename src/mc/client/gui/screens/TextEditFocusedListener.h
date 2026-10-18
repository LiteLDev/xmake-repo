#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class UIControl;
class VisualTree;
// clang-format on

class TextEditFocusedListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mHasAlwaysListeningTextEditControl;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TextEditFocusedListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mHasAlwaysListeningTextEditControl;
    // NOLINTEND
};
#else // @header-generator platform
class TextEditFocusedListener {};
#endif // @header-generator platform
#endif // @header-generator platform
