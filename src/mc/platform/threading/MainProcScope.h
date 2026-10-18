#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

#if defined(LL_PLAT_A) // @header-generator platform
class MainProcScope {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void ExplicitSetRunningMainProc(bool);
    // NOLINTEND
};
#else // @header-generator platform
class MainProcScope {};
#endif // @header-generator platform

} // namespace Bedrock::Threading
