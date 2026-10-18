#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameCallbacks {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameCallbacks() = default;

    virtual void onLevelCorrupt() = 0;

    virtual void onGameModeChanged() = 0;

    virtual void onBeforeSimTick();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTick(int, int) = 0;
#else // @header-generator platform
    virtual void onTick(int nTick, int maxTick) = 0;
#endif // @header-generator platform

    virtual void onInternetUpdate() = 0;

    virtual void onGameSessionReset() = 0;

    virtual void onLevelExit() = 0;

    virtual void onRequestResourceReload() = 0;

    virtual void updateScreens() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onBeforeSimTick();
#else // @header-generator platform
    MCFOLD void $onBeforeSimTick();


#endif // @header-generator platform
    // NOLINTEND
};
