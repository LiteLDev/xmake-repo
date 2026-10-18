#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Semaphore {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 48, std::condition_variable> mCondition;
    ::ll::TypedStorage<4, 40, std::mutex>              mMutex;
    ::ll::UntypedStorage<4, 8>                         mCount;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72> mUnkaccacd;
    ::ll::UntypedStorage<8, 80> mUnk111c2d;
    ::ll::UntypedStorage<4, 4>  mUnkf2eecf;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Semaphore& operator=(Semaphore const&);
#endif // @header-generator platform
    Semaphore(Semaphore const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Semaphore();

    MCNAPI void notify();

    MCNAPI void wait();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
    Semaphore();
#endif // @header-generator platform
};
