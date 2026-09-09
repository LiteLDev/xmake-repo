#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/IAllocator.h"
#include "mc/external/gameface/cohtml/MemTagsType.h"

namespace OreUI {

class Allocator : public ::cohtml::IAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Allocator();

    virtual void* Allocate(uint, ::cohtml::MemTags::MemTagsType);

    virtual void* Reallocate(void*, uint, ::cohtml::MemTags::MemTagsType);

    virtual void Deallocate(void*, ::cohtml::MemTags::MemTagsType);

    virtual void* AlignedAllocate(uint, uint, ::cohtml::MemTags::MemTagsType);

    virtual void AlignedDeallocate(void*, ::cohtml::MemTags::MemTagsType);

    virtual void* VirtualAllocate(void*, uint, int, int, ::cohtml::MemTags::MemTagsType);

    virtual bool VirtualFree(void*, uint, int, ::cohtml::MemTags::MemTagsType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void* $Allocate(uint, ::cohtml::MemTags::MemTagsType);

    MCNAPI void* $Reallocate(void*, uint, ::cohtml::MemTags::MemTagsType);

    MCNAPI void $Deallocate(void*, ::cohtml::MemTags::MemTagsType);

    MCNAPI void* $AlignedAllocate(uint, uint, ::cohtml::MemTags::MemTagsType);

    MCNAPI void $AlignedDeallocate(void*, ::cohtml::MemTags::MemTagsType);

    MCNAPI void* $VirtualAllocate(void*, uint, int, int, ::cohtml::MemTags::MemTagsType);

    MCNAPI bool $VirtualFree(void*, uint, int, ::cohtml::MemTags::MemTagsType);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
