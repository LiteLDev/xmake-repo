#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading::Burst { struct QueueConfig; }
namespace Bedrock::Threading::Burst::Details { class WorkTarget; }
// clang-format on

namespace Bedrock::Threading::Burst::Strategy {

class Default {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mPrimaryWorkerCount;
    ::ll::TypedStorage<8, 8, ulong> mSecondaryWorkerCount;
    // NOLINTEND

public:
    // prevent constructor by default
    Default();
};

} // namespace Bedrock::Threading::Burst::Strategy
