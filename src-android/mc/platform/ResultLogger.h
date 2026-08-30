#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#include "mc/platform/brstd/copyable_function.h"

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
    MCNAPI static void log(::Bedrock::LogLevel, ::LogAreaID, std::string const&, ::Bedrock::CallStack const&);

    MCNAPI static std::string noContextString();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::LogLevel const& defaultLogLevel();
    // NOLINTEND
};

} // namespace Bedrock
