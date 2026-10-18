#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class LevelDbFileLock : public ::leveldb::FileLock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelDbFileLock();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class LevelDbFileLock : public ::leveldb::FileLock {};
#endif // @header-generator platform
