#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EmotePlayedTelemetryDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mEmoteProductId;
    ::ll::TypedStorage<4, 4, int>          mEmoteSlotNumber;
    // NOLINTEND

public:
    // prevent constructor by default
    EmotePlayedTelemetryDataComponent& operator=(EmotePlayedTelemetryDataComponent const&);
};
