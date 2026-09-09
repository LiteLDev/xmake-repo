#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileReadAccess {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFileReadAccess();

    virtual ulong fread(void*, ulong, ulong, void*) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
