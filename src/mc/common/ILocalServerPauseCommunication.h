#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class ILocalServerPauseCommunication {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILocalServerPauseCommunication() = default;

    virtual bool requestInGamePause(bool) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ILocalServerPauseCommunication {};
#endif // @header-generator platform
