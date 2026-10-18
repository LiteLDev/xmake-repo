#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"

class SuspendResumeTracker : public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mSuspendResumeIndex;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk40b50e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SuspendResumeTracker& operator=(SuspendResumeTracker const&);
    SuspendResumeTracker(SuspendResumeTracker const&);
    SuspendResumeTracker();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SuspendResumeTracker();
#else // @header-generator platform
    virtual void onAppResumed() /*override*/;
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onAppResumed();
#else // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tryCreateInstance();

    MCNAPI static void invalidateThreadIndex();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<SuspendResumeTracker>& mInstance();
#else // @header-generator platform
    MCNAPI static ::std::unique_ptr<::SuspendResumeTracker>& mInstance();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::recursive_mutex& mMutex();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static ::std::recursive_mutex& mMutex();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onAppResumed();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
