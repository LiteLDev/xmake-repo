#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RakPeerConfiguration {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> useJoinfloodProtection;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnkbd8bc4;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RakPeerConfiguration& operator=(RakPeerConfiguration const&);
    RakPeerConfiguration(RakPeerConfiguration const&);
    RakPeerConfiguration();
#endif // @header-generator platform
};

} // namespace RakNet
