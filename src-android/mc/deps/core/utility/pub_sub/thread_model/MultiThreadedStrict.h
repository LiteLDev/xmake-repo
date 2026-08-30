#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::ThreadModel {

struct MultiThreadedStrict {
public:
    // MultiThreadedStrict inner types define
    using MutexType = std::recursive_mutex;
};

} // namespace Bedrock::PubSub::ThreadModel
