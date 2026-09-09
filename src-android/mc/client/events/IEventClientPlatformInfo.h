#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IEventClientPlatformInfo {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEventClientPlatformInfo() = default;

    virtual std::string getSystemLocale() const = 0;

    virtual std::string getEdition() const = 0;
    // NOLINTEND
};
