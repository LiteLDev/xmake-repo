#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
