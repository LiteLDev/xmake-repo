#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StopSoundPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<1, 1, bool>         mStopAll;
    ::ll::TypedStorage<1, 1, bool>         mStopMusicLegacy;
    // NOLINTEND
};
