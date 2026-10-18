#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/Severity.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace cohtml::Logging {

#if defined(LL_PLAT_A) // @header-generator platform
class ILogHandler {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ILogHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILogHandler() = default;

    virtual void WriteLog(::cohtml::Logging::Severity severity, char const* message, uint64 length) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ILogHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml::Logging
