#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/nether_net/NetworkID.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace NetherNet::LanEvents {

struct MessageSent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::error_code>        mResult;
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID> mTo;
    ::ll::TypedStorage<8, 24, std::string>            mDestinationIp;
    ::ll::TypedStorage<8, 24, std::vector<std::byte>> mMessage;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk9b2f6f;
    ::ll::UntypedStorage<8, 24> mUnk54701c;
    ::ll::UntypedStorage<8, 32> mUnk54897a;
    ::ll::UntypedStorage<8, 24> mUnk60e741;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MessageSent& operator=(MessageSent const&);
    MessageSent(MessageSent const&);
    MessageSent();
#endif // @header-generator platform
};

} // namespace NetherNet::LanEvents
