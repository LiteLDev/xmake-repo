#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IExternalSessionTelemetry {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IExternalSessionTelemetry() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventReceivedUniqueWebSessionId(std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventReceivedUniqueWebSessionId(::std::string const& webSessionId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventReceivedUniqueLauncherSessionId(std::string const&) = 0;
#else // @header-generator platform
    virtual void fireEventReceivedUniqueLauncherSessionId(::std::string const& launcherSessionId) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
