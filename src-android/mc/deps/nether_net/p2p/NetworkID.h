#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::P2P {

struct NetworkID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkID();
};

} // namespace NetherNet::P2P
