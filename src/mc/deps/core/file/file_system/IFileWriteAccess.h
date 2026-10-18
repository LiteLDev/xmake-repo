#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileWriteAccess {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IFileWriteAccess();
#else // @header-generator platform
    virtual ~IFileWriteAccess() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong fwrite(void const*, ulong, ulong, void*) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual uint64 fwrite(void const* buffer, uint64 size, uint64 count, void* file) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
