#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

class IAsyncResourceStreamResponse {
public:
    // IAsyncResourceStreamResponse inner types define
    enum Status : uint {
        Success = 0,
        Failure = 1,
    };
};

} // namespace cohtml
