#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileReadAccess {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IFileReadAccess();
#else // @header-generator platform
    virtual ~IFileReadAccess() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong fread(void*, ulong, ulong, void*) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual uint64 fread(void* buffer, uint64 size, uint64 count, void* file) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
