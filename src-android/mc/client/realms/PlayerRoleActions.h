#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class PlayerRoleActions : int {
    ManageWorlds         = 0,
    ManageSettings       = 1,
    ManageMembers        = 2,
    ManageRoles          = 3,
    ManageHubSettings    = 4,
    ManageGameSettings   = 5,
    ManageInviteLinks    = 6,
    ManagePacks          = 7,
    SetPermissions       = 8,
    ManageAdmins         = 9,
    ModerateStories      = 10,
    OpenCloseRealm       = 11,
    ViewAdminLog         = 12,
    EditPacks            = 13,
    ManageSubscription   = 14,
    JoinRealmWhenFull    = 15,
    NotLeaveRealm        = 16,
    InteractWithStories  = 17,
    ClearAllRealmMembers = 18,
};

}
