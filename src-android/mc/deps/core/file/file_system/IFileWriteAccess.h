#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileWriteAccess {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFileWriteAccess();

    virtual ulong fwrite(void const*, ulong, ulong, void*) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
