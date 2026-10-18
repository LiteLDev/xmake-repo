#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum class MultiplayerState : int {
    None                             = 0,
    Server_Hosting                   = 1,
    Server_PlayerJoining             = 2,
    Server_PlayerLeaving             = 16,
    Server_WaitingforServerUPNP      = 11,
    Server_WaitingforServerNAT       = 3,
    Server_WaitingforClientNAT       = 4,
    Server_ConnectingToClient        = 5,
    Client_JoinedLobby               = 6,
    Client_WaitingforClientNAT       = 7,
    Client_WaitingforServerNAT       = 8,
    Client_ConnectingToHost          = 9,
    Client_InGame                    = 10,
    Client_NATDiscovery              = 12,
    Client_WaitingForServerSignaling = 13,
    Client_WaitingForClientSignaling = 14,
    Client_WaitingForServerNonce     = 15,
};
#else // @header-generator platform
enum class MultiplayerState : int {};
#endif // @header-generator platform

}
