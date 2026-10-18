#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/CpuRingBufferAllocator.h"

// auto generated forward declare list
// clang-format off
namespace Core { template<int T0, bool T1> class CheckedRingBuffer; }
// clang-format on

namespace dragon::framegraph::detail {

class TopologicalGraph {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>     mInDegrees;
    ::ll::UntypedStorage<8, 32>     mSuccessors;
    ::ll::TypedStorage<8, 8, ulong> mIgnoredIndex;
    // NOLINTEND
};

} // namespace dragon::framegraph::detail
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
