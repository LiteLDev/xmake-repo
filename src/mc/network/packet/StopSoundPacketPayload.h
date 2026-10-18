#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StopSoundPacketPayload {
#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<1, 1, bool>         mStopAll;
    ::ll::TypedStorage<1, 1, bool>         mStopMusicLegacy;
    // NOLINTEND
#else // @header-generator platform
    ::std::string mName;
    bool          mStopAll;
    bool          mStopMusicLegacy;
#endif // @header-generator platform
};
