#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/profile/ProfilerLite.h"

class _ProfilerLiteTimer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8>                      mScopedData;
    ::ll::UntypedStorage<8, 8>                      mThreadId;
    ::ll::TypedStorage<8, 8, double>                mTime;
    ::ll::TypedStorage<8, 8, double>                mInclusiveTime;
    ::ll::TypedStorage<8, 8, ::_ProfilerLiteTimer*> mParentScope;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkcf7da7;
    ::ll::UntypedStorage<4, 4> mUnk878963;
    ::ll::UntypedStorage<8, 8> mUnkef8390;
    ::ll::UntypedStorage<8, 8> mUnk40c75f;
    ::ll::UntypedStorage<8, 8> mUnk5a3550;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    _ProfilerLiteTimer& operator=(_ProfilerLiteTimer const&);
    _ProfilerLiteTimer(_ProfilerLiteTimer const&);
    _ProfilerLiteTimer();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI _ProfilerLiteTimer(::ProfilerLite::ScopedData&, std::__thread_id);
#else // @header-generator platform
    MCNAPI _ProfilerLiteTimer(::ProfilerLite::ScopedData& scopedData, ::std::thread::id threadId);
#endif // @header-generator platform

    MCNAPI ~_ProfilerLiteTimer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ProfilerLite::ScopedData&, std::__thread_id);
#else // @header-generator platform
    MCNAPI void* $ctor(::ProfilerLite::ScopedData& scopedData, ::std::thread::id threadId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
