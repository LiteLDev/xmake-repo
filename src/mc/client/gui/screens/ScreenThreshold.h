#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/SceneType.h"

struct ScreenThreshold {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ui::SceneType> mSceneType;
    ::ll::TypedStorage<4, 4, ::ui::SceneType> mSceneTypeToExclude;
    ::ll::TypedStorage<4, 4, int>             mThresholdNumberOfScreens;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/SceneType.h"

struct ScreenThreshold {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ui::SceneType> mSceneType;
    ::ll::TypedStorage<4, 4, ::ui::SceneType> mSceneTypeToExclude;
    ::ll::TypedStorage<4, 4, int>             mThresholdNumberOfScreens;
    // NOLINTEND
};
#else // @header-generator platform
struct ScreenThreshold {};
#endif // @header-generator platform
#endif // @header-generator platform
