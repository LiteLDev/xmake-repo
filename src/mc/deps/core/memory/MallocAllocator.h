#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/IMemoryAllocator.h"

namespace Bedrock::Memory {

class MallocAllocator : public ::Bedrock::Memory::IMemoryAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MallocAllocator();
#else // @header-generator platform
    virtual void* allocate(uint64 size) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void* allocate(ulong);
#else // @header-generator platform
    virtual void release(void* ptr) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void release(void*);
#else // @header-generator platform
    virtual void* alignedAllocate(uint64 size, uint64 alignment) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void* alignedAllocate(ulong, ulong);
#else // @header-generator platform
    virtual void alignedRelease(void* ptr) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void alignedRelease(void*);
#else // @header-generator platform
    virtual uint64 getUsableSize(void* ptr, bool alignedAllocation) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getUsableSize(void*, bool);
#else // @header-generator platform
    virtual void* _realloc(::gsl::not_null<void*> p, uint64 newSize) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void* _realloc(::gsl::not_null<void*>, ulong);

    virtual void* _alignedRealloc(::gsl::not_null<void*>, ulong, ulong);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void* _alignedRealloc(::gsl::not_null<void*> p, uint64 newSize, uint64 alignment) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $allocate(ulong);
#else // @header-generator platform
    MCAPI void* $allocate(uint64 size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $release(void*);
#else // @header-generator platform
    MCAPI void $release(void* ptr);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $alignedAllocate(ulong, ulong);
#else // @header-generator platform
    MCAPI void* $alignedAllocate(uint64 size, uint64 alignment);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $alignedRelease(void*);
#else // @header-generator platform
    MCAPI void $alignedRelease(void* ptr);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getUsableSize(void*, bool);
#else // @header-generator platform
    MCAPI uint64 $getUsableSize(void* ptr, bool alignedAllocation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $_realloc(::gsl::not_null<void*>, ulong);
#else // @header-generator platform
    MCAPI void* $_realloc(::gsl::not_null<void*> p, uint64 newSize);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $_alignedRealloc(::gsl::not_null<void*>, ulong, ulong);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void* $_alignedRealloc(::gsl::not_null<void*> p, uint64 newSize, uint64 alignment);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Memory
