#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"

class BlockTypeRegistryRWLock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 144> mSharedMutex;
    ::ll::UntypedStorage<8, 112> mSharedLockIsLockedForModifications;
    ::ll::UntypedStorage<8, 112> mSharedLockIsLockedForRead;
    // NOLINTEND
};
