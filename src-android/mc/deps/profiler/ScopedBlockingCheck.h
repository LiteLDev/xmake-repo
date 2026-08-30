#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class ScopedBlockingCheck {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mPriorCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedBlockingCheck();
};

} // namespace Bedrock::Threading
