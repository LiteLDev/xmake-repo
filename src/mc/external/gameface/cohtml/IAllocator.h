#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/MemTagsType.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
class IAllocator {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void* Allocate(uint size, ::cohtml::MemTags::MemTagsType tag) = 0;

    virtual void* Reallocate(void* oldPtr, uint size, ::cohtml::MemTags::MemTagsType tag) = 0;

    virtual void Deallocate(void*, ::cohtml::MemTags::MemTagsType) = 0;

    virtual void* AlignedAllocate(uint size, uint alignment, ::cohtml::MemTags::MemTagsType tag) = 0;

    virtual void AlignedDeallocate(void*, ::cohtml::MemTags::MemTagsType) = 0;

    virtual void* VirtualAllocate(void*, uint, int, int, ::cohtml::MemTags::MemTagsType) = 0;

    virtual bool VirtualFree(void*, uint, int, ::cohtml::MemTags::MemTagsType) = 0;

    virtual ~IAllocator() = default;
    // NOLINTEND
};
#else // @header-generator platform
class IAllocator {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
