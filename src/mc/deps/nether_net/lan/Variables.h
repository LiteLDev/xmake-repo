#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/nether_net/lan/ThreadState.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace NetherNet::RunLoop {

struct Variables {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::NetherNet::RunLoop::ThreadState> mThreadState;
    ::ll::TypedStorage<4, 40, std::mutex>                       mMutex;
    ::ll::TypedStorage<4, 48, std::condition_variable>          mCondition;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk45e447;
    ::ll::UntypedStorage<8, 80> mUnk794921;
    ::ll::UntypedStorage<8, 72> mUnk73908c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Variables& operator=(Variables const&);
    Variables(Variables const&);
    Variables();
#endif // @header-generator platform
};

} // namespace NetherNet::RunLoop
