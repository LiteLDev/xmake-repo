#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class SimpleMutex {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 40> hMutex;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 40> criticalSection;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI void Lock();

    MCNAPI void Unlock();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    SimpleMutex& operator=(SimpleMutex const&);
    SimpleMutex(SimpleMutex const&);
    SimpleMutex();
#endif // @header-generator platform
};

} // namespace RakNet
