#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum OutOfBandIdentifiers : uint {
    ID_NAT_ESTABLISH_UNIDIRECTIONAL     = 0,
    ID_NAT_ESTABLISH_BIDIRECTIONAL      = 1,
    ID_NAT_TYPE_DETECT                  = 2,
    ID_ROUTER_2_REPLY_TO_SENDER_PORT    = 3,
    ID_ROUTER_2_REPLY_TO_SPECIFIED_PORT = 4,
    ID_ROUTER_2_MINI_PUNCH_REPLY        = 5,
    ID_ROUTER_2_MINI_PUNCH_REPLY_BOUNCE = 6,
    ID_XBOX_360_VOICE                   = 7,
    ID_XBOX_360_GET_NETWORK_ROOM        = 8,
    ID_XBOX_360_RETURN_NETWORK_ROOM     = 9,
    ID_NAT_PING                         = 10,
    ID_NAT_PONG                         = 11,
};
