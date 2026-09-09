#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

class FileLoadLock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mLockPath;
    // NOLINTEND

public:
    // prevent constructor by default
    FileLoadLock();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FileLoadLock();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
