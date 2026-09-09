#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::ThreadModel {

struct MultiThreaded {
public:
    // MultiThreaded inner types define
    using MutexType = std::mutex;
};

} // namespace Bedrock::PubSub::ThreadModel
