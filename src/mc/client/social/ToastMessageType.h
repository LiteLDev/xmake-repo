#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ToastMessageType : int {
    Unknown                       = 0,
    Achievement                   = 1,
    Invite                        = 2,
    RawInvite                     = 3,
    FocusLost                     = 4,
    ImportResourcePack            = 5,
    ImportExportWorld             = 6,
    GlobalResourceCrashRecovery   = 7,
    Message                       = 8,
    PlayerMessaging               = 9,
    DialogMessage                 = 10,
    ChatScreenNotification        = 11,
    Debug                         = 12,
    RecipeUnlocked                = 13,
    Snackbar                      = 14,
    ProgressPopup                 = 15,
    PartyInvite                   = 16,
    PartyTravel_OptOut            = 17,
    PartyTravel_OptIn             = 18,
    PartyDestinationCookie_OptOut = 19,
    PartyDestinationCookie_OptIn  = 20,
    ReturnToGame                  = 21,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ToastMessageType : int {
    Unknown                      = 0,
    Achievement                  = 1,
    Invite                       = 2,
    RawInvite                    = 3,
    FocusLost                    = 4,
    ImportResourcePack           = 5,
    ImportExportWorld            = 6,
    GlobalResourceCrashRecovery  = 7,
    Message                      = 8,
    PlayerMessaging              = 9,
    DialogMessage                = 10,
    ChatScreenNotification       = 11,
    Debug                        = 12,
    RecipeUnlocked               = 13,
    Snackbar                     = 14,
    ProgressPopup                = 15,
    PartyInvite                  = 16,
    PartyTravelOptOut            = 17,
    PartyTravelOptIn             = 18,
    PartyDestinationCookieOptOut = 19,
    PartyDestinationCookieOptIn  = 20,
    ReturnToGame                 = 21,
};
#else // @header-generator platform
enum class ToastMessageType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
