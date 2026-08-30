#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/RunTaskContext.h"

// auto generated forward declare list
// clang-format off
class WorkerPool;
// clang-format on

struct RunTaskOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::WorkerPool&>    mPool;
    ::ll::TypedStorage<1, 1, ::RunTaskContext> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    RunTaskOptions& operator=(RunTaskOptions const&);
    RunTaskOptions(RunTaskOptions const&);
    RunTaskOptions();
};
