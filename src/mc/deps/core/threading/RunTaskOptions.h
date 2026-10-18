#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/threading/RunTaskContext.h"

// auto generated forward declare list
// clang-format off
class WorkerPool;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct RunTaskOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::WorkerPool&>    mPool;
    ::ll::TypedStorage<1, 1, ::RunTaskContext> mContext;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkfce570;
    ::ll::UntypedStorage<1, 1> mUnk389bfc;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RunTaskOptions& operator=(RunTaskOptions const&);
    RunTaskOptions(RunTaskOptions const&);
    RunTaskOptions();
};
