#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Semaphore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 48, std::condition_variable> mCondition;
    ::ll::TypedStorage<4, 40, std::mutex>              mMutex;
    ::ll::UntypedStorage<4, 8>                         mCount;
    // NOLINTEND

public:
    // prevent constructor by default
    Semaphore(Semaphore const&);

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
};
