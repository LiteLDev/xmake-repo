#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class MainProcScope {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void ExplicitSetRunningMainProc(bool);
    // NOLINTEND
};

} // namespace Bedrock::Threading
