#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/copyable_function.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock { class LogLevel; }
namespace Bedrock { struct CallStack; }
// clang-format on

namespace Bedrock {

class ResultLogger {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void log(::Bedrock::LogLevel, ::LogAreaID, std::string const&, ::Bedrock::CallStack const&);
#else // @header-generator platform
    MCNAPI static void
    log(::Bedrock::LogLevel         logLevel,
        ::LogAreaID                 logArea,
        ::std::string const&        error,
        ::Bedrock::CallStack const& callStack);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string noContextString();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::LogLevel const& defaultLogLevel();
#else // @header-generator platform
    MCNAPI static ::std::string noContextString();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
