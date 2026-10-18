#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryCategory.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::Memory { class IMemoryAllocator; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Memory { struct MemoryCategoryCounter; }
// clang-format on

namespace Memory {

class MemoryTracker {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MemoryTracker();
#else // @header-generator platform
    virtual ~MemoryTracker() = default;
#endif // @header-generator platform

    virtual bool isTracking() const;

    virtual ::Memory::MemoryCategory getCurrentCategory() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setCurrentCategory(::Memory::MemoryCategory);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void setCurrentCategory(::Memory::MemoryCategory);
#else // LL_PLAT_C
    virtual void setCurrentCategory(::Memory::MemoryCategory category);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getCategoryAllocationCount(uint) const;
#else // @header-generator platform
    virtual uint64 getCategoryAllocationCount(uint) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getCategoryAllocatedMemory(uint) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual uint64 getCategoryAllocatedMemory(uint) const;
#else // LL_PLAT_C
    virtual uint64 getCategoryAllocatedMemory(uint cat) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getCategoryTotalAllocationCount(uint) const;
#else // @header-generator platform
    virtual uint64 getCategoryTotalAllocationCount(uint) const;
#endif // @header-generator platform

    virtual void publish();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void populateCounters(std::vector<Memory::MemoryCategoryCounter>&, ulong) const;
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void populateCounters(::std::vector<::Memory::MemoryCategoryCounter>&, uint64) const;
#else // LL_PLAT_C
    virtual void populateCounters(
        ::std::vector<::Memory::MemoryCategoryCounter>& categoryCounters,
        uint64                                          minimumThresholdBytes
    ) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Memory::MemoryTracker& get();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isTracking() const;
#else // @header-generator platform
    MCFOLD bool $isTracking() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Memory::MemoryCategory $getCurrentCategory() const;
#else // @header-generator platform
    MCFOLD ::Memory::MemoryCategory $getCurrentCategory() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setCurrentCategory(::Memory::MemoryCategory);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $setCurrentCategory(::Memory::MemoryCategory);
#else // LL_PLAT_C
    MCFOLD void $setCurrentCategory(::Memory::MemoryCategory category);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getCategoryAllocationCount(uint) const;
#else // @header-generator platform
    MCFOLD uint64 $getCategoryAllocationCount(uint) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getCategoryAllocatedMemory(uint) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD uint64 $getCategoryAllocatedMemory(uint) const;
#else // LL_PLAT_C
    MCFOLD uint64 $getCategoryAllocatedMemory(uint cat) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getCategoryTotalAllocationCount(uint) const;
#else // @header-generator platform
    MCFOLD uint64 $getCategoryTotalAllocationCount(uint) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $publish();
#else // @header-generator platform
    MCFOLD void $publish();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $populateCounters(std::vector<Memory::MemoryCategoryCounter>&, ulong) const;
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $populateCounters(::std::vector<::Memory::MemoryCategoryCounter>&, uint64) const;
#else // LL_PLAT_C
    MCFOLD void $populateCounters(
        ::std::vector<::Memory::MemoryCategoryCounter>& categoryCounters,
        uint64                                          minimumThresholdBytes
    ) const;
#endif
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

} // namespace Memory
