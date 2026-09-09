#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/profile/ProfilerLite.h"

class _ProfilerLiteTimer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>                      mScopedData;
    ::ll::UntypedStorage<8, 8>                      mThreadId;
    ::ll::TypedStorage<8, 8, double>                mTime;
    ::ll::TypedStorage<8, 8, double>                mInclusiveTime;
    ::ll::TypedStorage<8, 8, ::_ProfilerLiteTimer*> mParentScope;
    // NOLINTEND

public:
    // prevent constructor by default
    _ProfilerLiteTimer& operator=(_ProfilerLiteTimer const&);
    _ProfilerLiteTimer(_ProfilerLiteTimer const&);
    _ProfilerLiteTimer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI _ProfilerLiteTimer(::ProfilerLite::ScopedData&, std::__thread_id);

    MCNAPI ~_ProfilerLiteTimer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ProfilerLite::ScopedData&, std::__thread_id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
