#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IUIEventTelemetry {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IUIEventTelemetry() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireScreenLoadTimeUpdateEvent(uint const&, std::string const&, std::chrono::duration<long long, std::ratio<1, 1000000000>>, std::string const&) = 0;
    // clang-format on
#else // @header-generator platform
    virtual void fireScreenLoadTimeUpdateEvent(
        uint const&                userId,
        ::std::string const&       screenName,
        ::std::chrono::nanoseconds duration,
        ::std::string const&       loadInstanceId
    ) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
