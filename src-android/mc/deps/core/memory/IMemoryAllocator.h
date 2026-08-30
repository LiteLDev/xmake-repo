#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

class IMemoryAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMemoryAllocator();

    virtual void* allocate(ulong) = 0;

    virtual void release(void*) = 0;

    virtual void* alignedAllocate(ulong, ulong) = 0;

    virtual void alignedRelease(void*) = 0;

    virtual ulong getUsableSize(void*, bool) = 0;

    virtual void* _realloc(::gsl::not_null<void*>, ulong) = 0;

    virtual void* _alignedRealloc(::gsl::not_null<void*>, ulong, ulong) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void* realloc(void*, ulong);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Memory
