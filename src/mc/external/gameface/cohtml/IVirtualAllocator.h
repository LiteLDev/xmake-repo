#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
class IVirtualAllocator {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IVirtualAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IVirtualAllocator() = default;

    virtual uint64 GetAllocationPageSize() const = 0;

    virtual uint64 GetCommitPageSize() const = 0;

    virtual void* Allocate(void* address, uint64 size, uint64 alignment, int protection, int flags) = 0;

    virtual bool Free(void* address, uint64 size, int flags) = 0;

    virtual bool PartialFree(void*, uint64, uint64, int) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IVirtualAllocator {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
