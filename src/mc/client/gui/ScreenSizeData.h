#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

struct ScreenSizeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2> totalScreenSize;
    ::ll::TypedStorage<4, 8, ::Vec2> clientScreenSize;
    ::ll::TypedStorage<4, 8, ::Vec2> clientUIScreenSize;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenSizeData(ScreenSizeData const&);
    ScreenSizeData();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

struct ScreenSizeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2> totalScreenSize;
    ::ll::TypedStorage<4, 8, ::Vec2> clientScreenSize;
    ::ll::TypedStorage<4, 8, ::Vec2> clientUIScreenSize;
    // NOLINTEND
};
#else // @header-generator platform
struct ScreenSizeData {};
#endif // @header-generator platform
#endif // @header-generator platform
