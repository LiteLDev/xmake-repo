#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/IVirtualAllocator.h"

namespace OreUI {

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

} // namespace OreUI
