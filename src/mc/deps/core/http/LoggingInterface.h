#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/HCTraceLevel.h"

namespace Bedrock::Http {

#if defined(LL_PLAT_A) // @header-generator platform
class LoggingInterface : public ::Bedrock::ImplBase<Bedrock::Http::LoggingInterface> {
#else // @header-generator platform
class LoggingInterface : public ::Bedrock::ImplBase<::Bedrock::Http::LoggingInterface> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LoggingInterface() = default;
#else // @header-generator platform
    virtual ~LoggingInterface() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong threadId() = 0;
#else // @header-generator platform
    virtual uint64 threadId() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeToDebugger(char const*, ::HCTraceLevel, char const*) = 0;
#else // @header-generator platform
    virtual void writeToDebugger(char const* area, ::HCTraceLevel level, char const* message) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Http
