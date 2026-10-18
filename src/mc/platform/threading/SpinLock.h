#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
class SpinLock {};
#else // @header-generator platform
class SpinLock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::atomic_flag&> m_lock;
    // NOLINTEND

public:
    // prevent constructor by default
    SpinLock& operator=(SpinLock const&);
    SpinLock(SpinLock const&);
    SpinLock();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SpinLock();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void Lock(::std::atomic_flag& flag);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#endif // @header-generator platform
#endif // @header-generator platform
