#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RuleDebugOverride {

#if defined(LL_PLAT_A) // @header-generator platform
enum class BooleanOverrideID : int {
    CreateNewWorldOptInBetaSupported                 = 0,
    MultiplayerSupported                             = 1,
    PlatformBroadcastingSupported                    = 2,
    PlatformBroadcastOptionModifiable                = 3,
    PlatformBroadcastInviteOptionSupported           = 4,
    PlatformBroadcastFriendsOfFriendsOptionSupported = 5,
    Count                                            = 6,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class BooleanOverrideID : int {
    CreateNewWorldOptInBetaSupported                 = 0,
    MultiplayerSupported                             = 1,
    PlatformBroadcastingSupported                    = 2,
    PlatformBroadcastOptionModifiable                = 3,
    PlatformBroadcastInviteOptionSupported           = 4,
    PlatformBroadcastFriendsOfFriendsOptionSupported = 5,
    Count                                            = 6,
};
#else // @header-generator platform
enum class BooleanOverrideID : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
