#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
enum class OutOfBandIdentifiers : int {
    NatEstablishUnidirectional  = 0,
    NatEstablishBidirectional   = 1,
    NatTypeDetect               = 2,
    Router2ReplyToSenderPort    = 3,
    Router2ReplyToSpecifiedPort = 4,
    Router2MiniPunchReply       = 5,
    Router2MiniPunchReplyBounce = 6,
    Xbox360Voice                = 7,
    Xbox360GetNetworkRoom       = 8,
    Xbox360ReturnNetworkRoom    = 9,
    NatPing                     = 10,
    NatPong                     = 11,
#endif // @header-generator platform
};
