#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EmotePlayedTelemetryDataComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mEmoteProductId;
    ::ll::TypedStorage<4, 4, int>          mEmoteSlotNumber;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mEmoteProductId;
    ::ll::TypedStorage<4, 4, int>            mEmoteSlotNumber;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    EmotePlayedTelemetryDataComponent& operator=(EmotePlayedTelemetryDataComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
