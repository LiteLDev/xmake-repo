#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace brstd {

struct once_flag {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mState;
    // NOLINTEND
};

} // namespace brstd
