#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IUIEventTelemetry {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IUIEventTelemetry() = default;

    virtual void fireScreenLoadTimeUpdateEvent(uint const&, std::string const&, std::chrono::duration<long long, std::ratio<1, 1000000000>>, std::string const&) = 0;
    // clang-format on
    // NOLINTEND
};
