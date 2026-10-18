#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockTypeRegistryRWLock;
// clang-format on

class BlockTypeRegistryReadLock {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<BlockTypeRegistryRWLock>> mLocker;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockTypeRegistryRWLock>> mLocker;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BlockTypeRegistryReadLock();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit BlockTypeRegistryReadLock(std::shared_ptr<BlockTypeRegistryRWLock>);
#else // @header-generator platform
    MCAPI explicit BlockTypeRegistryReadLock(::std::shared_ptr<::BlockTypeRegistryRWLock> locker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~BlockTypeRegistryReadLock();
#else // @header-generator platform
    MCAPI ~BlockTypeRegistryReadLock();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::shared_ptr<BlockTypeRegistryRWLock>);
#else // @header-generator platform
    MCAPI void* $ctor(::std::shared_ptr<::BlockTypeRegistryRWLock> locker);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
