#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class IEventClientPlatformInfo {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEventClientPlatformInfo() = default;

    virtual std::string getSystemLocale() const = 0;

    virtual std::string getEdition() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IEventClientPlatformInfo {};
#endif // @header-generator platform
