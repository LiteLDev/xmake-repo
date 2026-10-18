#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class FileLoadLock {};
#endif // @header-generator platform
