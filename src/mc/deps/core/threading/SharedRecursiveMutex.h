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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 4> mSharedRecursionCount;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Bedrock::Threading::InstancedThreadLocalValue<uint>> mSharedRecursionCount;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SharedRecursiveMutex();
#else // @header-generator platform
    virtual bool _threadHoldsSharedLock(::std::thread::id) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _threadHoldsSharedLock(std::__thread_id);
#else // @header-generator platform
    virtual bool _shouldLockForSharedAccess(::std::thread::id) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _shouldLockForSharedAccess(std::__thread_id);

    virtual bool _shouldUnLockForSharedAccess(std::__thread_id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool _shouldUnLockForSharedAccess(::std::thread::id) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_threadHoldsSharedLock(std::__thread_id);
#else // @header-generator platform
    MCAPI bool $_threadHoldsSharedLock(::std::thread::id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_shouldLockForSharedAccess(std::__thread_id);
#else // @header-generator platform
    MCAPI bool $_shouldLockForSharedAccess(::std::thread::id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_shouldUnLockForSharedAccess(std::__thread_id);
#else // @header-generator platform
    MCAPI bool $_shouldUnLockForSharedAccess(::std::thread::id);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
