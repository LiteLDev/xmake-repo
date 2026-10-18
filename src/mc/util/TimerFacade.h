#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/BasicTimer.h"
#else // @header-generator platform
#endif // @header-generator platform

class TimerFacade {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 64> mTimer;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnkc05226;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TimerFacade& operator=(TimerFacade const&);
    TimerFacade(TimerFacade const&);
#endif // @header-generator platform
    TimerFacade();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TimerFacade(double);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(double);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
