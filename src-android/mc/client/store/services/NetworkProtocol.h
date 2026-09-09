#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services::gatherings::model {

enum class NetworkProtocol : int {
    Default          = 0,
    NetherNet        = 1,
    NetherNetJsonRpc = 2,
};

}
