#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/IAllocator.h"
#include "mc/external/gameface/cohtml/MemTagsType.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/IAllocator.h"
#include "mc/external/gameface/cohtml/MemTagsType.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class Allocator : public ::cohtml::IAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Allocator() /*override*/ = default;

    virtual void* Allocate(uint size, ::cohtml::MemTags::MemTagsType tag) /*override*/;

    virtual void* Reallocate(void* oldPtr, uint size, ::cohtml::MemTags::MemTagsType tag) /*override*/;

    virtual void Deallocate(void* ptr, ::cohtml::MemTags::MemTagsType) /*override*/;

    virtual void* AlignedAllocate(uint size, uint alignment, ::cohtml::MemTags::MemTagsType tag) /*override*/;

    virtual void AlignedDeallocate(void* ptr, ::cohtml::MemTags::MemTagsType) /*override*/;

    virtual void* VirtualAllocate(void*, uint, int, int, ::cohtml::MemTags::MemTagsType) /*override*/;

    virtual bool VirtualFree(void*, uint, int, ::cohtml::MemTags::MemTagsType) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void* $Allocate(uint size, ::cohtml::MemTags::MemTagsType tag);

    MCAPI void* $Reallocate(void* oldPtr, uint size, ::cohtml::MemTags::MemTagsType tag);

    MCAPI void $Deallocate(void* ptr, ::cohtml::MemTags::MemTagsType);

    MCAPI void* $AlignedAllocate(uint size, uint alignment, ::cohtml::MemTags::MemTagsType tag);

    MCAPI void $AlignedDeallocate(void* ptr, ::cohtml::MemTags::MemTagsType);

    MCAPI void* $VirtualAllocate(void*, uint, int, int, ::cohtml::MemTags::MemTagsType);

    MCAPI bool $VirtualFree(void*, uint, int, ::cohtml::MemTags::MemTagsType);
    // NOLINTEND
};
#else // @header-generator platform
class Allocator {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
