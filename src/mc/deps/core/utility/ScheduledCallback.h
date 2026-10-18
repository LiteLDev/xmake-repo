#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScheduledCallback {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long> mTime;
    ::ll::UntypedStorage<8, 24>    mExistenceTracker;
    ::ll::UntypedStorage<8, 48>    mCallback;
    ::ll::UntypedStorage<1, 16>    mShouldCheckExistence;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk95b83e;
    ::ll::UntypedStorage<8, 16> mUnk8ebb9f;
    ::ll::UntypedStorage<8, 64> mUnkc68f90;
    ::ll::UntypedStorage<1, 1>  mUnk101bc0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScheduledCallback& operator=(ScheduledCallback const&);
    ScheduledCallback(ScheduledCallback const&);
#endif // @header-generator platform
    ScheduledCallback();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScheduledCallback(long, std::weak_ptr<bool>, std::function<void()>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ScheduledCallback(int64 callTime, ::std::weak_ptr<bool> existanceTracker, ::std::function<void()> callback);

    MCNAPI ~ScheduledCallback();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(long, std::weak_ptr<bool>, std::function<void()>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(int64 callTime, ::std::weak_ptr<bool> existanceTracker, ::std::function<void()> callback);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
