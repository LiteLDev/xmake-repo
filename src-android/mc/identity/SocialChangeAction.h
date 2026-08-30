#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class SocialChangeAction : int {
    MuteUser       = 0,
    UnmuteUser     = 1,
    FollowUser     = 2,
    RemoveFriend   = 3,
    FavoriteUser   = 4,
    UnfavoriteUser = 5,
    BlockUser      = 6,
    UnblockUser    = 7,
    UpdatePresence = 8,
    AddFriend      = 9,
};

}
