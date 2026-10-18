#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated inclusion list
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform

class ResetEventObj {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 48, std::condition_variable> mCondition;
    ::ll::TypedStorage<4, 40, std::mutex>              mMutex;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>        mSet;
    ::ll::UntypedStorage<1, 7>                         mAutoReset;
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::std::condition_variable>   mCondition;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mMutex;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>          mSet;
    ::ll::TypedStorage<1, 1, bool>                         mAutoReset;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ResetEventObj(ResetEventObj const&);
    ResetEventObj();
#else // @header-generator platform
#endif // @header-generator platform
};
