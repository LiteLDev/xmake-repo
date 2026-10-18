#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

struct RealmsWorldGeneralSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> worldName;
    ::ll::TypedStorage<4, 4, int>          gameType;
    ::ll::TypedStorage<4, 4, int>          difficulty;
    ::ll::TypedStorage<1, 1, bool>         isHardcore;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldGeneralSettings& operator=(RealmsWorldGeneralSettings const&);
    RealmsWorldGeneralSettings(RealmsWorldGeneralSettings const&);
};

} // namespace Realms
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
