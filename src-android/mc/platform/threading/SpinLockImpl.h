#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpinLockImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>                   mThreadHasher;
    ::ll::TypedStorage<4, 4, uint>               mOwnerRefCount;
    ::ll::TypedStorage<8, 8, ulong const>        mNoThreadId;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mOwnerThread;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SpinLockImpl();

    MCNAPI void lock();

    MCNAPI bool try_lock();

    MCNAPI void unlock();

    MCNAPI ~SpinLockImpl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
