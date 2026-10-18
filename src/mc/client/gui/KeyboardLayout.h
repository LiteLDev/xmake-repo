#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class RectangleArea;
// clang-format on

class KeyboardLayout {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::glm::vec<2, float, (glm::qualifier)0> moveRootForKeyboard(
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        float,
        float,
        ::RectangleArea const&,
        ::RectangleArea const&
    );
    // NOLINTEND
};
#else // @header-generator platform
class KeyboardLayout {};
#endif // @header-generator platform
