#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/IMemoryAllocator.h"

namespace Bedrock::Memory {

class MallocAllocator : public ::Bedrock::Memory::IMemoryAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MallocAllocator();

    virtual void* allocate(ulong);

    virtual void release(void*);

    virtual void* alignedAllocate(ulong, ulong);

    virtual void alignedRelease(void*);

    virtual ulong getUsableSize(void*, bool);

    virtual void* _realloc(::gsl::not_null<void*>, ulong);

    virtual void* _alignedRealloc(::gsl::not_null<void*>, ulong, ulong);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void* $allocate(ulong);

    MCNAPI void $release(void*);

    MCNAPI void* $alignedAllocate(ulong, ulong);

    MCNAPI void $alignedRelease(void*);

    MCNAPI ulong $getUsableSize(void*, bool);

    MCNAPI void* $_realloc(::gsl::not_null<void*>, ulong);

    MCNAPI void* $_alignedRealloc(::gsl::not_null<void*>, ulong, ulong);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Memory
