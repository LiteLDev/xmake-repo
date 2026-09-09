#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocalValue.h"
#include "mc/deps/core/threading/SharedRecursiveMutexBase.h"

namespace Bedrock::Threading {

class SharedRecursiveMutex : public ::Bedrock::Threading::SharedRecursiveMutexBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mSharedRecursionCount;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SharedRecursiveMutex();

    virtual bool _threadHoldsSharedLock(std::__thread_id);

    virtual bool _shouldLockForSharedAccess(std::__thread_id);

    virtual bool _shouldUnLockForSharedAccess(std::__thread_id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_threadHoldsSharedLock(std::__thread_id);

    MCNAPI bool $_shouldLockForSharedAccess(std::__thread_id);

    MCNAPI bool $_shouldUnLockForSharedAccess(std::__thread_id);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
