#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, int T1>
#if defined(LL_PLAT_A) // @header-generator platform
class SPSCQueue {};
#else // @header-generator platform
class SPSCQueue {
public:
    // prevent constructor by default
    SPSCQueue& operator=(SPSCQueue const&);
    SPSCQueue(SPSCQueue const&);
    SPSCQueue();

    std::atomic<void*> mFrontBlock;
    char               mCachelineFiller[56];
    std::atomic<void*> mTailBlock;
    uint64             mLargestBlockSize;
};
#endif // @header-generator platform
