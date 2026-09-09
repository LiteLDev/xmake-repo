#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/lan/ThreadState.h"

namespace NetherNet::RunLoop {

struct Variables {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::NetherNet::RunLoop::ThreadState> mThreadState;
    ::ll::TypedStorage<4, 40, std::mutex>                       mMutex;
    ::ll::TypedStorage<4, 48, std::condition_variable>          mCondition;
    // NOLINTEND
};

} // namespace NetherNet::RunLoop
