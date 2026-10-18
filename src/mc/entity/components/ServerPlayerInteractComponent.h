#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/InteractPacket.h"

struct ServerPlayerInteractComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 88> mCurrentInteraction;
#else // @header-generator platform
    ::ll::TypedStorage<8, 88, ::InteractPacket> mCurrentInteraction;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ServerPlayerInteractComponent& operator=(ServerPlayerInteractComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
