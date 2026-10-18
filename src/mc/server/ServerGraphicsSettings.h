#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerGraphicsSettings {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mDisableClientVibrantVisuals;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk773a03;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI bool getDisableClientVibrantVisuals() const;
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ServerGraphicsSettings& operator=(ServerGraphicsSettings const&);
    ServerGraphicsSettings(ServerGraphicsSettings const&);
    ServerGraphicsSettings();
#endif // @header-generator platform
};
