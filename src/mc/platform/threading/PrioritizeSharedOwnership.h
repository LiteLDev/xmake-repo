#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class PrioritizeSharedOwnership {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 144>                           mMutex;
    ::ll::TypedStorage<8, 64, std::condition_variable_any> mZeroReaders;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>>           mReaderCount;
#else // @header-generator platform
    ::std::shared_mutex           mMutex;
    ::std::condition_variable_any mZeroReaders;
    ::std::atomic<uint64>         mReaderCount;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI void lock();
#else // @header-generator platform
    static const size_t mWaitForZeroBit = 1ull << 63;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void lock_shared();
#else // @header-generator platform
    LLAPI void   lock_shared();
    LLNDAPI bool try_lock_shared();
    LLAPI void   unlock_shared();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool try_lock();

    MCNAPI void unlock();

    MCNAPI void unlock_shared();
    // NOLINTEND
#else // @header-generator platform
    LLAPI void   lock();
    LLNDAPI bool try_lock();
    LLAPI void   unlock();
#endif // @header-generator platform
};

} // namespace Bedrock::Threading
