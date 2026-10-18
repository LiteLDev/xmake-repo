#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/nether_net/NetworkID.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace NetherNet::LanEvents {

struct MessageReceived {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID> mFrom;
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID> mTo;
    ::ll::TypedStorage<8, 24, std::string>            mSourceIp;
    ::ll::TypedStorage<8, 24, std::vector<std::byte>> mMessage;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk8571db;
    ::ll::UntypedStorage<8, 24> mUnk3bf291;
    ::ll::UntypedStorage<8, 32> mUnkb1a7e4;
    ::ll::UntypedStorage<8, 24> mUnkd18a2d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MessageReceived& operator=(MessageReceived const&);
    MessageReceived(MessageReceived const&);
    MessageReceived();
#endif // @header-generator platform
};

} // namespace NetherNet::LanEvents
