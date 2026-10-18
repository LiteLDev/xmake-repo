#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class SettingsModalType : uchar {
    TTSError          = 0,
    FontLicense       = 1,
    TinkeringList     = 2,
    LegacyWorldsFetch = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class SettingsModalType : uchar {
    TTSError          = 0,
    FontLicense       = 1,
    TinkeringList     = 2,
    LegacyWorldsFetch = 3,
};
#else // @header-generator platform
enum class SettingsModalType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
