#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
class ISceneStackNavigator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISceneStackNavigator() = default;

    virtual void toPreStartScreen(bool initialNavigation) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ISceneStackNavigator {};
#endif // @header-generator platform
#endif // @header-generator platform
