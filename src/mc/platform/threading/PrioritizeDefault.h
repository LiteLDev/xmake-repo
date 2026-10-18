#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated inclusion list
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform

namespace Bedrock::Threading {

class PrioritizeDefault {
public:
    // PrioritizeDefault inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using ReaderCountType = ulong;
#else // @header-generator platform
    using ReaderCountType = uint64;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 40, std::mutex>              mLock;
    ::ll::UntypedStorage<1, 1>                         mThreadHasher;
    ::ll::TypedStorage<8, 8, ulong const>              mNoThreadId;
    ::ll::TypedStorage<8, 8, ulong>                    mOwnerThread;
    ::ll::TypedStorage<8, 8, ulong>                    mReadCount;
    ::ll::TypedStorage<4, 48, std::condition_variable> mWriteQueue;
    ::ll::TypedStorage<4, 48, std::condition_variable> mReadQueue;
#else // @header-generator platform
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>   mLock;
    ::ll::TypedStorage<1, 1, ::std::hash<::std::thread::id>> mThreadHasher;
    ::ll::TypedStorage<8, 8, uint64 const>                   mNoThreadId;
    ::ll::TypedStorage<8, 8, uint64>                         mOwnerThread;
    ::ll::TypedStorage<8, 8, uint64>                         mReadCount;
    ::ll::TypedStorage<8, 72, ::std::condition_variable>     mWriteQueue;
    ::ll::TypedStorage<8, 72, ::std::condition_variable>     mReadQueue;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Threading
