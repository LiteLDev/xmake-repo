#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class PrioritizeDefault; }
// clang-format on

namespace Bedrock::Threading {

class PrioritizeUniqueOwnership {
public:
    // PrioritizeUniqueOwnership inner types define
    using CountType = ulong;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex>              mLock;
    ::ll::UntypedStorage<1, 1>                         mThreadHasher;
    ::ll::TypedStorage<8, 8, ulong const>              mNoThreadId;
    ::ll::TypedStorage<8, 8, ulong>                    mOwnerThread;
    ::ll::TypedStorage<8, 8, ulong>                    mWriteCount;
    ::ll::TypedStorage<8, 8, ulong>                    mReadCount;
    ::ll::TypedStorage<4, 48, std::condition_variable> mPriorityWriteQueue;
    ::ll::TypedStorage<4, 48, std::condition_variable> mWriteQueue;
    ::ll::TypedStorage<4, 48, std::condition_variable> mReadQueue;
    // NOLINTEND

public:
    // prevent constructor by default
    PrioritizeUniqueOwnership(PrioritizeUniqueOwnership const&);
};

} // namespace Bedrock::Threading
