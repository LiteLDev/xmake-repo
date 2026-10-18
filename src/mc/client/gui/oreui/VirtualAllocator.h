#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/IVirtualAllocator.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/IVirtualAllocator.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class VirtualAllocator : public ::cohtml::IVirtualAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VirtualAllocator();

    virtual ulong GetAllocationPageSize() const;

    virtual ulong GetCommitPageSize() const;

    virtual void* Allocate(void*, ulong, ulong, int, int);

    virtual bool Free(void*, ulong, int);

    virtual bool PartialFree(void*, ulong, ulong, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ulong $GetAllocationPageSize() const;

    MCNAPI ulong $GetCommitPageSize() const;

    MCNAPI void* $Allocate(void*, ulong, ulong, int, int);

    MCNAPI bool $Free(void*, ulong, int);

    MCNAPI bool $PartialFree(void*, ulong, ulong, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class VirtualAllocator : public ::cohtml::IVirtualAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VirtualAllocator() /*override*/ = default;

    virtual uint64 GetAllocationPageSize() const /*override*/;

    virtual uint64 GetCommitPageSize() const /*override*/;

    virtual void* Allocate(void* address, uint64 size, uint64 alignment, int protection, int flags) /*override*/;

    virtual bool Free(void* address, uint64 size, int flags) /*override*/;

    virtual bool PartialFree(void* address, uint64 oldSize, uint64 newSize, int) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI uint64 $GetAllocationPageSize() const;

    MCAPI uint64 $GetCommitPageSize() const;

    MCAPI void* $Allocate(void* address, uint64 size, uint64 alignment, int protection, int flags);

    MCAPI bool $Free(void* address, uint64 size, int flags);

    MCAPI bool $PartialFree(void* address, uint64 oldSize, uint64 newSize, int);
    // NOLINTEND
};
#else // @header-generator platform
class VirtualAllocator {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
