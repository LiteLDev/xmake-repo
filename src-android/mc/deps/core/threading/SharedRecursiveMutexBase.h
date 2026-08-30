#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#ifndef LL_GENERATED_ANDROID_BASE_STUB_BEDROCK__THREADING__SHAREDMUTEX
#define LL_GENERATED_ANDROID_BASE_STUB_BEDROCK__THREADING__SHAREDMUTEX
namespace Bedrock::Threading { class SharedMutex {}; }
#endif
// clang-format on

namespace Bedrock::Threading {

class SharedRecursiveMutexBase : public ::Bedrock::Threading::SharedMutex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>                   mOwningThreadId;
    ::ll::TypedStorage<4, 4, uint>               mExclusiveLockCount;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mSharedLockCount;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SharedRecursiveMutexBase() = default;

    virtual bool _threadHoldsSharedLock(std::__thread_id) = 0;

    virtual bool _shouldLockForSharedAccess(std::__thread_id) = 0;

    virtual bool _shouldUnLockForSharedAccess(std::__thread_id) = 0;
    // NOLINTEND
};

} // namespace Bedrock::Threading
