#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/SimpleMutex.h"

namespace RakNet {

class LocklessUint32_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, ::RakNet::SimpleMutex> mutex;
    ::ll::TypedStorage<4, 4, uint>                   value;
    // NOLINTEND
};

} // namespace RakNet
