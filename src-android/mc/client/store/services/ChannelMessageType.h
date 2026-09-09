#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services::signaling_afd::model {

enum class ChannelMessageType : int {
    None           = 0,
    WebRTC         = 1,
    ChannelMessage = 2,
};

}
