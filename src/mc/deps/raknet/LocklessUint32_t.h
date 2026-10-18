#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/raknet/SimpleMutex.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace RakNet {

class LocklessUint32_t {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 40, ::RakNet::SimpleMutex> mutex;
    ::ll::TypedStorage<4, 4, uint>                   value;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnka0282a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LocklessUint32_t& operator=(LocklessUint32_t const&);
    LocklessUint32_t(LocklessUint32_t const&);
    LocklessUint32_t();
#endif // @header-generator platform
};

} // namespace RakNet
