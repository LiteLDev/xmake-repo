#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/gameplayhandlers/HandlerResult.h"
#else // @header-generator platform
#endif // @header-generator platform

class GameplayHandler {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~GameplayHandler();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ~GameplayHandler() = default;
#endif // @header-generator platform
    // NOLINTEND
};
