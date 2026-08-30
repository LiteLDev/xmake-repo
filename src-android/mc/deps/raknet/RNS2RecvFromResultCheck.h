#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum RNS2RecvFromResultCheck : int {
    RFRC_PASS_RECEIVED_DATA_TO_APP         = 1,
    RFRC_HANDLE_RECEIVED_EMPTY_UDP_PACKET  = 0,
    RFRC_HANDLE_GRACEFULLY_CLOSED_TCP_CONN = -1,
    RFRC_HANDLE_ENETDOWN_NETERROR          = -2,
    RFRC_HANDLE_OTHER_NETERRORS            = -101,
};

}
