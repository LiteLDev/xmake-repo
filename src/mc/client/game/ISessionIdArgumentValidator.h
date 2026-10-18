#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class ISessionIdArgumentValidator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISessionIdArgumentValidator() = default;

    virtual std::optional<std::string> extractNewSessionId(std::unordered_map<std::string, std::string> const&) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ISessionIdArgumentValidator {};
#endif // @header-generator platform
