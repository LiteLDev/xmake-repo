#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::Profile {

#if defined(LL_PLAT_A) // @header-generator platform
class IPerformanceHandler {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IPerformanceHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPerformanceHandler() = default;

    virtual void WriteLog(char const* message, uint64 length) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IPerformanceHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml::Profile
