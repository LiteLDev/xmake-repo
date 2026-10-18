#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
class ITimeZoneProvider {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ITimeZoneProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITimeZoneProvider() = default;

    virtual void GetLocalTimezoneName(double timeMsUtc, char* buffer, uint64 maxBufferSize) = 0;

    virtual double GetDaylightSavingsOffset(double timeMsUtc) = 0;

    virtual double GetLocalTimeOffset(double timeMs, bool isTimeUtc) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ITimeZoneProvider {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
