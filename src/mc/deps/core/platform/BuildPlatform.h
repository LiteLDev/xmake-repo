#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BuildPlatform : int {
#if defined(LL_PLAT_A) // @header-generator platform
    Google                  = 1,
    iOS                     = 2,
    OSX                     = 3,
    Amazon                  = 4,
    GearVR_Deprecated       = 5,
    UWP_Deprecated          = 7,
    Win32                   = 8,
    Dedicated               = 9,
    tvOS_Deprecated         = 10,
    Sony                    = 11,
    Nx                      = 12,
    Xbox                    = 13,
    WindowsPhone_Deprecated = 14,
    Linux                   = 15,
    Unknown                 = -1,
#else // @header-generator platform
    Google                 = 1,
    IOS                    = 2,
    Osx                    = 3,
    Amazon                 = 4,
    GearVRDeprecated       = 5,
    UwpDeprecated          = 7,
    Win32                  = 8,
    Dedicated              = 9,
    TvOSDeprecated         = 10,
    Sony                   = 11,
    Nx                     = 12,
    Xbox                   = 13,
    WindowsPhoneDeprecated = 14,
    Linux                  = 15,
    Unknown                = -1,
#endif // @header-generator platform
};
