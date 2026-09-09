#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class OSThreadPriority; }
// clang-format on

namespace Bedrock::Threading {

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

} // namespace Bedrock::Threading
