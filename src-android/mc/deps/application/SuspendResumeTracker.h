#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"

class SuspendResumeTracker : public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mSuspendResumeIndex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SuspendResumeTracker();

    virtual void onAppResumed();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<SuspendResumeTracker>& mInstance();

    MCNAPI static std::recursive_mutex& mMutex();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onAppResumed();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
