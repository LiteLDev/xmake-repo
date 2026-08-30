#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResetEventObj {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 48, std::condition_variable> mCondition;
    ::ll::TypedStorage<4, 40, std::mutex>              mMutex;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>        mSet;
    ::ll::UntypedStorage<1, 7>                         mAutoReset;
    // NOLINTEND

public:
    // prevent constructor by default
    ResetEventObj(ResetEventObj const&);
    ResetEventObj();
};
