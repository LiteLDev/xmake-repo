#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PFLobbyMemberRemovedReason : uint {
    LocalUserLeftLobby       = 0,
    LocalUserForciblyRemoved = 1,
    RemoteUserLeftLobby      = 2,
};
