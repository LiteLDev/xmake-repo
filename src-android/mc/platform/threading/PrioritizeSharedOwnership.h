#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class PrioritizeSharedOwnership {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 144>                           mMutex;
    ::ll::TypedStorage<8, 64, std::condition_variable_any> mZeroReaders;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>>           mReaderCount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void lock();

    MCNAPI void lock_shared();

    MCNAPI bool try_lock();

    MCNAPI void unlock();

    MCNAPI void unlock_shared();
    // NOLINTEND
};

} // namespace Bedrock::Threading
