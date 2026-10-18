#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/RectangleArea.h"

struct EffectDisplayInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>            mAnimation;
    ::ll::TypedStorage<4, 16, ::RectangleArea> mIconArea;
    ::ll::TypedStorage<4, 16, ::RectangleArea> mBackgroundArea;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/RectangleArea.h"

struct EffectDisplayInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>            mAnimation;
    ::ll::TypedStorage<4, 16, ::RectangleArea> mIconArea;
    ::ll::TypedStorage<4, 16, ::RectangleArea> mBackgroundArea;
    // NOLINTEND
};
#else // @header-generator platform
struct EffectDisplayInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
