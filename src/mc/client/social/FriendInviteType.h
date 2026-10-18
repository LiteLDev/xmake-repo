#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class FriendInviteType : uchar {
    XboxLive = 0,
    Platform = 1,
};
#else // @header-generator platform
enum class FriendInviteType : uchar {};
#endif // @header-generator platform

}
