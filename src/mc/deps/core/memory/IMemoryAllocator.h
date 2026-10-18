#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

class IMemoryAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IMemoryAllocator();
#else // @header-generator platform
    virtual ~IMemoryAllocator() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void* allocate(ulong) = 0;
#else // @header-generator platform
    virtual void* allocate(uint64 size) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void release(void*) = 0;
#else // @header-generator platform
    virtual void release(void* ptr) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void* alignedAllocate(ulong, ulong) = 0;
#else // @header-generator platform
    virtual void* alignedAllocate(uint64 size, uint64 alignment) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void alignedRelease(void*) = 0;
#else // @header-generator platform
    virtual void alignedRelease(void* ptr) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getUsableSize(void*, bool) = 0;
#else // @header-generator platform
    virtual uint64 getUsableSize(void* ptr, bool alignedAllocation) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void* _realloc(::gsl::not_null<void*>, ulong) = 0;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void* _realloc(::gsl::not_null<void*> p, uint64 newSize) = 0;
#else // LL_PLAT_C
    virtual void* _realloc(::gsl::not_null<void*> ptr, uint64 newSize) = 0;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void* _alignedRealloc(::gsl::not_null<void*>, ulong, ulong) = 0;
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void* _alignedRealloc(::gsl::not_null<void*> p, uint64 newSize, uint64 alignment) = 0;
#else // LL_PLAT_C
    virtual void* _alignedRealloc(::gsl::not_null<void*> ptr, uint64 newSize, uint64 alignment) = 0;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void* realloc(void*, ulong);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Memory
