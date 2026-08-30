#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryCategory.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Memory { class IMemoryAllocator; }
namespace Memory { struct MemoryCategoryCounter; }
// clang-format on

namespace Memory {

class MemoryTracker {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MemoryTracker();

    virtual bool isTracking() const;

    virtual ::Memory::MemoryCategory getCurrentCategory() const;

    virtual void setCurrentCategory(::Memory::MemoryCategory);

    virtual ulong getCategoryAllocationCount(uint) const;

    virtual ulong getCategoryAllocatedMemory(uint) const;

    virtual ulong getCategoryTotalAllocationCount(uint) const;

    virtual void publish();

    virtual void populateCounters(std::vector<Memory::MemoryCategoryCounter>&, ulong) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Memory::MemoryTracker& get();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isTracking() const;

    MCNAPI ::Memory::MemoryCategory $getCurrentCategory() const;

    MCNAPI void $setCurrentCategory(::Memory::MemoryCategory);

    MCNAPI ulong $getCategoryAllocationCount(uint) const;

    MCNAPI ulong $getCategoryAllocatedMemory(uint) const;

    MCNAPI ulong $getCategoryTotalAllocationCount(uint) const;

    MCNAPI void $publish();

    MCNAPI void $populateCounters(std::vector<Memory::MemoryCategoryCounter>&, ulong) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Memory
