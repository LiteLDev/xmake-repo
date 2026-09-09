#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class OSThreadPriority {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mPriority;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Threading::OSThreadPriority const& Elevated();

    MCNAPI static ::Bedrock::Threading::OSThreadPriority const& High();

    MCNAPI static ::Bedrock::Threading::OSThreadPriority const& Low();

    MCNAPI static ::Bedrock::Threading::OSThreadPriority const& Normal();
    // NOLINTEND
};

} // namespace Bedrock::Threading
