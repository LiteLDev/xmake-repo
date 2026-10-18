#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpinLockImpl {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 1>                   mThreadHasher;
    ::ll::TypedStorage<4, 4, uint>               mOwnerRefCount;
    ::ll::TypedStorage<8, 8, ulong const>        mNoThreadId;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mOwnerThread;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::std::hash<::std::thread::id>> mThreadHasher;
    ::ll::TypedStorage<4, 4, uint>                           mOwnerRefCount;
    ::ll::TypedStorage<8, 8, uint64 const>                   mNoThreadId;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>          mOwnerThread;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SpinLockImpl();
#else // @header-generator platform
    MCAPI void lock();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void unlock();
#endif // @header-generator platform
    // NOLINTEND
};
