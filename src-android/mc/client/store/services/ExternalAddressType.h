#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services::multiplayer::model {

enum class ExternalAddressType : int {
    Ipv4     = 0,
    Ipv6     = 1,
    Hostname = 2,
};

}
