#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading::Burst { struct QueueConfig; }
namespace Bedrock::Threading::Burst::Details { class WorkTarget; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::Threading::Burst::Strategy {

class Default {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mPrimaryWorkerCount;
    ::ll::TypedStorage<8, 8, ulong> mSecondaryWorkerCount;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mPrimaryWorkerCount;
    ::ll::TypedStorage<8, 8, uint64> mSecondaryWorkerCount;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    Default();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Bedrock::Threading::Burst::Strategy
