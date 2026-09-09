#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScheduledCallback {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long> mTime;
    ::ll::UntypedStorage<8, 24>    mExistenceTracker;
    ::ll::UntypedStorage<8, 48>    mCallback;
    ::ll::UntypedStorage<1, 16>    mShouldCheckExistence;
    // NOLINTEND

public:
    // prevent constructor by default
    ScheduledCallback();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScheduledCallback(long, std::weak_ptr<bool>, std::function<void()>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(long, std::weak_ptr<bool>, std::function<void()>);
    // NOLINTEND
};
