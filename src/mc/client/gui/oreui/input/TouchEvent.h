#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct TouchEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>    mId;
    ::ll::TypedStorage<4, 8, ::Vec2> mPosition;
    ::ll::TypedStorage<1, 1, bool>   mIsPressed;
    ::ll::TypedStorage<1, 1, bool>   mIsPointerDown;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TouchEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>    mId;
    ::ll::TypedStorage<4, 8, ::Vec2> mPosition;
    ::ll::TypedStorage<1, 1, bool>   mIsPressed;
    ::ll::TypedStorage<1, 1, bool>   mIsPointerDown;
    // NOLINTEND
};
#else // @header-generator platform
struct TouchEvent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
