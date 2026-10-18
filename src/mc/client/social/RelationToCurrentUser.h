#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class RelationToCurrentUser : int {
    Self             = 0,
    TwoWayFriend     = 1,
    Following        = 2,
    Follower         = 3,
    Stranger         = 4,
    RequestSender    = 5,
    RequestRecipient = 6,
    Unknown          = 7,
};
#else // @header-generator platform
enum class RelationToCurrentUser : int {};
#endif // @header-generator platform

}
