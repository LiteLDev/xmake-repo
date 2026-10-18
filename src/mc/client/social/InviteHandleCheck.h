#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class InviteHandleCheck : int {
    NotStarted                  = 0,
    NotReady                    = 1,
    HandleIsForDifferentSession = 2,
    HandleIsForSameSession      = 3,
    HandleIsForLegacySession    = 4,
    Ready                       = 5,
    SessionNotFound             = 6,
    Invalid                     = 7,
};
#else // @header-generator platform
enum class InviteHandleCheck : int {};
#endif // @header-generator platform

}
