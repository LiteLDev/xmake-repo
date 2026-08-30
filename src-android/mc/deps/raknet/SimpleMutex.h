#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class SimpleMutex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 40> hMutex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Lock();

    MCNAPI void Unlock();
    // NOLINTEND
};

} // namespace RakNet
