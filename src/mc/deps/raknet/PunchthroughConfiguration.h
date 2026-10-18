#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct PunchthroughConfiguration {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> TIME_BETWEEN_PUNCH_ATTEMPTS_INTERNAL;
    ::ll::TypedStorage<8, 8, ulong> TIME_BETWEEN_PUNCH_ATTEMPTS_EXTERNAL;
    ::ll::TypedStorage<4, 4, int>   UDP_SENDS_PER_PORT_INTERNAL;
    ::ll::TypedStorage<4, 4, int>   UDP_SENDS_PER_PORT_EXTERNAL;
    ::ll::TypedStorage<4, 4, int>   INTERNAL_IP_WAIT_AFTER_ATTEMPTS;
    ::ll::TypedStorage<4, 4, int>   MAX_PREDICTIVE_PORT_RANGE;
    ::ll::TypedStorage<4, 4, int>   EXTERNAL_IP_WAIT_AFTER_FIRST_TTL;
    ::ll::TypedStorage<4, 4, int>   EXTERNAL_IP_WAIT_BETWEEN_PORTS;
    ::ll::TypedStorage<4, 4, int>   EXTERNAL_IP_WAIT_AFTER_ALL_ATTEMPTS;
    ::ll::TypedStorage<4, 4, int>   MAXIMUM_NUMBER_OF_INTERNAL_IDS_TO_CHECK;
    ::ll::TypedStorage<1, 1, bool>  retryOnFailure;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkdd3b1b;
    ::ll::UntypedStorage<8, 8> mUnke7ccfe;
    ::ll::UntypedStorage<4, 4> mUnka9fbcd;
    ::ll::UntypedStorage<4, 4> mUnkac3844;
    ::ll::UntypedStorage<4, 4> mUnk4a6952;
    ::ll::UntypedStorage<4, 4> mUnka13c63;
    ::ll::UntypedStorage<4, 4> mUnk2786ac;
    ::ll::UntypedStorage<4, 4> mUnkdd5659;
    ::ll::UntypedStorage<4, 4> mUnk5a9c16;
    ::ll::UntypedStorage<4, 4> mUnkb3d8d4;
    ::ll::UntypedStorage<1, 1> mUnk35772e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PunchthroughConfiguration& operator=(PunchthroughConfiguration const&);
    PunchthroughConfiguration(PunchthroughConfiguration const&);
    PunchthroughConfiguration();
#endif // @header-generator platform
};

} // namespace RakNet
