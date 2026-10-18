#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/raknet/SystemAddress.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace RakNet {

struct NetworkAdapter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                           attributeFlags;
    ::ll::TypedStorage<4, 4, int>                            interfaceIndex;
    ::ll::TypedStorage<1, 1, bool>                           isDisabled;
    ::ll::TypedStorage<8, 2856, ::RakNet::SystemAddress[21]> addresses;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>    mUnk10ab0a;
    ::ll::UntypedStorage<4, 4>    mUnk9967c7;
    ::ll::UntypedStorage<1, 1>    mUnk4ed148;
    ::ll::UntypedStorage<8, 2856> mUnk165a44;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    NetworkAdapter& operator=(NetworkAdapter const&);
    NetworkAdapter(NetworkAdapter const&);
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint GetNumberOfAddresses();
#else // @header-generator platform
    MCAPI NetworkAdapter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace RakNet
