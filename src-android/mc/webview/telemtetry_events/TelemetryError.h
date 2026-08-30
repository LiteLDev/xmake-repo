#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TelemtetryEvents {

struct TelemetryError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> message;
    // NOLINTEND
};

} // namespace TelemtetryEvents
