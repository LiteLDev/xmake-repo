#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ISessionIdArgumentValidator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISessionIdArgumentValidator() = default;

    virtual std::optional<std::string> extractNewSessionId(std::unordered_map<std::string, std::string> const&) = 0;
    // NOLINTEND
};
