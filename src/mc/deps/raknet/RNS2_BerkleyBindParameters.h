#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace RakNet { class RNS2EventHandler; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace RakNet {

struct RNS2_BerkleyBindParameters {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ushort>                      port;
    ::ll::TypedStorage<8, 8, char*>                       hostAddress;
    ::ll::TypedStorage<2, 2, ushort>                      addressFamily;
    ::ll::TypedStorage<4, 4, int>                         type;
    ::ll::TypedStorage<4, 4, int>                         protocol;
    ::ll::TypedStorage<1, 1, bool>                        nonBlockingSocket;
    ::ll::TypedStorage<4, 4, int>                         setBroadcast;
    ::ll::TypedStorage<4, 4, int>                         setIPHdrIncl;
    ::ll::TypedStorage<4, 4, int>                         doNotFragment;
    ::ll::TypedStorage<4, 4, int>                         pollingThreadPriority;
    ::ll::TypedStorage<8, 8, ::RakNet::RNS2EventHandler*> eventHandler;
    ::ll::TypedStorage<2, 2, ushort>                      remotePortRakNetWasStartedOn_PS3_PS4_PSP2;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2> mUnk5aba32;
    ::ll::UntypedStorage<8, 8> mUnk62fbc4;
    ::ll::UntypedStorage<2, 2> mUnk8643e8;
    ::ll::UntypedStorage<4, 4> mUnk7c32a9;
    ::ll::UntypedStorage<4, 4> mUnk654105;
    ::ll::UntypedStorage<1, 1> mUnk651633;
    ::ll::UntypedStorage<4, 4> mUnk8cc3d7;
    ::ll::UntypedStorage<4, 4> mUnkb6239a;
    ::ll::UntypedStorage<4, 4> mUnkea7ae7;
    ::ll::UntypedStorage<4, 4> mUnkba0640;
    ::ll::UntypedStorage<8, 8> mUnk92f343;
    ::ll::UntypedStorage<2, 2> mUnke3f4ef;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RNS2_BerkleyBindParameters& operator=(RNS2_BerkleyBindParameters const&);
    RNS2_BerkleyBindParameters(RNS2_BerkleyBindParameters const&);
    RNS2_BerkleyBindParameters();
#endif // @header-generator platform
};

} // namespace RakNet
