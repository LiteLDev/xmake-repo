#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IRealmEventLogger {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IRealmEventLogger();
#else // @header-generator platform
    virtual ~IRealmEventLogger() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void logEvent(std::string const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void logEvent(::std::string const& message) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
