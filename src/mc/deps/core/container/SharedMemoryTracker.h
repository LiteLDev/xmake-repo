#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/threading/MPMCQueue.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Core {

class SharedMemoryTracker {
public:
    // SharedMemoryTracker inner types declare
    // clang-format off
    class SharedMemoryTrackerBase;
    // clang-format on

    // SharedMemoryTracker inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    class SharedMemoryTrackerBase {
    public:
        // prevent constructor by default
        SharedMemoryTrackerBase& operator=(SharedMemoryTrackerBase const&);

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~SharedMemoryTrackerBase() = default;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 616> mTrackedMemory;
    // NOLINTEND

public:
    // prevent constructor by default
    SharedMemoryTracker& operator=(SharedMemoryTracker const&);
#else // @header-generator platform
    class SharedMemoryTrackerBase {};
#endif // @header-generator platform
};

} // namespace Core
