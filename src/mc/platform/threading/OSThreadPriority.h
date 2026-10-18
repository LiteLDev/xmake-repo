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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Threading::OSThreadPriority const& Elevated();
#else // @header-generator platform
    MCAPI static ::Bedrock::Threading::OSThreadPriority const& Elevated();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Threading::OSThreadPriority const& High();
#else // @header-generator platform
    MCAPI static ::Bedrock::Threading::OSThreadPriority const& High();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Threading::OSThreadPriority const& Low();
#else // @header-generator platform
    MCAPI static ::Bedrock::Threading::OSThreadPriority const& Low();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Threading::OSThreadPriority const& Normal();
#else // @header-generator platform
    MCAPI static ::Bedrock::Threading::OSThreadPriority const& Normal();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Threading
