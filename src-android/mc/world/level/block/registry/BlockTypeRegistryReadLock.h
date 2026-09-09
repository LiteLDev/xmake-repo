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
    ::ll::TypedStorage<8, 16, std::shared_ptr<BlockTypeRegistryRWLock>> mLocker;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockTypeRegistryReadLock(std::shared_ptr<BlockTypeRegistryRWLock>);

    MCNAPI ~BlockTypeRegistryReadLock();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<BlockTypeRegistryRWLock>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
