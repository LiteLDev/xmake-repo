#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BuildPlatform : int {
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
};
