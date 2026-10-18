#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class ServerMetrics {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ServerMetrics {};
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class ServerInstance;
// clang-format on

class ServerMetrics {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerMetrics() = default;

    virtual void sendPeriodicMetrics(::ServerInstance& serverInstance) = 0;

    virtual void sendServerTickTime(::std::chrono::nanoseconds const& timepoint) = 0;

    virtual void sendChunkLoadTelemetryData() = 0;
    // NOLINTEND
};
#endif // @header-generator platform
#endif // @header-generator platform
