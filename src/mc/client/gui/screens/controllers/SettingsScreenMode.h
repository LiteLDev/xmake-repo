#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class SettingsScreenMode : int {
    SETTINGS                    = 0,
    CREATE_WORLD                = 1,
    CREATE_FROM_TEMPLATE        = 2,
    EDIT_WORLD                  = 3,
    REALMS_SETTINGS             = 4,
    REALMS_SLOT                 = 5,
    PLAY_WORLD                  = 6,
    REALMS_INVITE_LINK_SETTINGS = 7,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class SettingsScreenMode : int {
    Settings                 = 0,
    CreateWorld              = 1,
    CreateFromTemplate       = 2,
    EditWorld                = 3,
    RealmsSettings           = 4,
    RealmsSlot               = 5,
    PlayWorld                = 6,
    RealmsInviteLinkSettings = 7,
};
#else // @header-generator platform
enum class SettingsScreenMode : int {};
#endif // @header-generator platform
#endif // @header-generator platform
