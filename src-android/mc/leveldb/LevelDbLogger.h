#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "cstdarg"

class LevelDbLogger : public ::leveldb::Logger {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelDbLogger();

    virtual void Logv(char const*, ::__va_list);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $Logv(char const*, ::__va_list);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
