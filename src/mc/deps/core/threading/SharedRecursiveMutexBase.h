#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
#ifndef LL_GENERATED_ANDROID_BASE_STUB_BEDROCK__THREADING__SHAREDMUTEX
#define LL_GENERATED_ANDROID_BASE_STUB_BEDROCK__THREADING__SHAREDMUTEX
namespace Bedrock::Threading { class SharedMutex {}; }
#endif
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::Threading {

#if defined(LL_PLAT_A) // @header-generator platform
class SharedRecursiveMutexBase : public ::Bedrock::Threading::SharedMutex {
#else // @header-generator platform
class SharedRecursiveMutexBase : public ::std::shared_mutex {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8>                   mOwningThreadId;
    ::ll::TypedStorage<4, 4, uint>               mExclusiveLockCount;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mSharedLockCount;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::std::atomic<::std::thread::id>> mOwningThreadId;
    ::ll::TypedStorage<4, 4, uint>                             mExclusiveLockCount;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>            mSharedLockCount;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SharedRecursiveMutexBase() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _threadHoldsSharedLock(std::__thread_id) = 0;
#else // @header-generator platform
    virtual bool _threadHoldsSharedLock(::std::thread::id) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _shouldLockForSharedAccess(std::__thread_id) = 0;
#else // @header-generator platform
    virtual bool _shouldLockForSharedAccess(::std::thread::id) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _shouldUnLockForSharedAccess(std::__thread_id) = 0;
#else // @header-generator platform
    virtual bool _shouldUnLockForSharedAccess(::std::thread::id) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Threading
