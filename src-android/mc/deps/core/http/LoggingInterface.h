#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/HCTraceLevel.h"

namespace Bedrock::Http {

class LoggingInterface : public ::Bedrock::ImplBase<Bedrock::Http::LoggingInterface> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LoggingInterface() = default;

    virtual ulong threadId() = 0;

    virtual void writeToDebugger(char const*, ::HCTraceLevel, char const*) = 0;
    // NOLINTEND
};

} // namespace Bedrock::Http
