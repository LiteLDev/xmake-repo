#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
// clang-format on

namespace Bedrock::Threading::Burst {

struct QueueConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                     mName;
    ::ll::TypedStorage<4, 4, uint>                                             mPriority;
    ::ll::TypedStorage<8, 8, ::Scheduler&>                                     mScheduler;
    ::ll::TypedStorage<8, 8, ::WorkerPool&>                                    mPrimaryWorkerPool;
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<WorkerPool>>> mSecondaryWorkerPools;
    ::ll::UntypedStorage<8, 24>                                                mAffinities;
    // NOLINTEND

public:
    // prevent constructor by default
    QueueConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~QueueConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Threading::Burst
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
