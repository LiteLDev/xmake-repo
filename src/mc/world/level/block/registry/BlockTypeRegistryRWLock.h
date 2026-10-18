#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"

class BlockTypeRegistryRWLock {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 144> mSharedMutex;
    ::ll::UntypedStorage<8, 112> mSharedLockIsLockedForModifications;
    ::ll::UntypedStorage<8, 112> mSharedLockIsLockedForRead;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mSharedMutex;
    ::ll::TypedStorage<8, 168, ::Bedrock::Threading::InstancedThreadLocal<bool, ::std::allocator<bool>>>
        mSharedLockIsLockedForModifications;
    ::ll::TypedStorage<8, 168, ::Bedrock::Threading::InstancedThreadLocal<bool, ::std::allocator<bool>>>
        mSharedLockIsLockedForRead;
#endif // @header-generator platform
    // NOLINTEND
};
