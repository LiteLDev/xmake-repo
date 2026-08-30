#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class PrioritizeDefault {
public:
    // PrioritizeDefault inner types define
    using ReaderCountType = ulong;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex>              mLock;
    ::ll::UntypedStorage<1, 1>                         mThreadHasher;
    ::ll::TypedStorage<8, 8, ulong const>              mNoThreadId;
    ::ll::TypedStorage<8, 8, ulong>                    mOwnerThread;
    ::ll::TypedStorage<8, 8, ulong>                    mReadCount;
    ::ll::TypedStorage<4, 48, std::condition_variable> mWriteQueue;
    ::ll::TypedStorage<4, 48, std::condition_variable> mReadQueue;
    // NOLINTEND
};

} // namespace Bedrock::Threading
