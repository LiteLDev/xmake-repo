#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class OSThreadPriority; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::Threading {

#if defined(LL_PLAT_A) // @header-generator platform
class ThreadUtil {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setCoreAffinity(long const&, ulong const);

    MCNAPI static void setCoreAffinity(void const*, int const, ulong const);

    MCNAPI static void setCurrentThreadCoreAffinity(int const, ulong const);

    MCNAPI static void setCurrentThreadPriority(::Bedrock::Threading::OSThreadPriority const&);

    MCNAPI static void setThreadPriority(long const&, ::Bedrock::Threading::OSThreadPriority const&);
    // NOLINTEND
};
#else // @header-generator platform
class ThreadUtil {};
#endif // @header-generator platform

} // namespace Bedrock::Threading
