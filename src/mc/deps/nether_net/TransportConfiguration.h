#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/nether_net/MappedAddressRange.h"
#include "mc/deps/nether_net/StunRelayServer.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace NetherNet {

struct TransportConfiguration {
public:
    // TransportConfiguration inner types declare
    // clang-format off
    struct Http;
    // clang-format on

    // TransportConfiguration inner types define
    struct Http {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mBindAddress;
        ::ll::TypedStorage<2, 2, ushort>       mPort;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk7c12e9;
        ::ll::UntypedStorage<2, 2>  mUnk9cb90c;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using DefaultSignalingInterface = std::variant<std::monostate, NetherNet::TransportConfiguration::Http>;
#else // @header-generator platform
    public:
        // prevent constructor by default
        Http& operator=(Http const&);
        Http(Http const&);
        Http();
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 1152, ::NetherNet::StunRelayServer[16]> mStunRelayServers;
    ::ll::TypedStorage<4, 4, int> mStunRelayServerCount;
    ::ll::TypedStorage<8, 1280, ::NetherNet::MappedAddressRange[16]> mKnownMappedAddressRanges;
    ::ll::TypedStorage<4, 4, int> mKnownMappedAddressRangeCount;
    ::ll::TypedStorage<8, 40, std::variant<std::monostate, NetherNet::TransportConfiguration::Http>> mDefaultSignalingChannel;
    ::ll::TypedStorage<4, 4, int> mNegotiationTimeoutInSeconds;
    ::ll::TypedStorage<2, 2, ushort> mMinUdpPort;
    ::ll::TypedStorage<2, 2, ushort> mMaxUdpPort;
    ::ll::TypedStorage<1, 1, bool> mGlobalUdpPort;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 1536> mUnkd35e7d;
    ::ll::UntypedStorage<4, 4>    mUnkec821a;
    ::ll::UntypedStorage<8, 1536> mUnkcfa76d;
    ::ll::UntypedStorage<4, 4>    mUnked4e91;
    ::ll::UntypedStorage<8, 48>   mUnkd16d38;
    ::ll::UntypedStorage<4, 4>    mUnk358d77;
    ::ll::UntypedStorage<2, 2>    mUnkf9436b;
    ::ll::UntypedStorage<2, 2>    mUnkf11f51;
    ::ll::UntypedStorage<1, 1>    mUnka03b86;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TransportConfiguration();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    TransportConfiguration& operator=(TransportConfiguration const&);
    TransportConfiguration(TransportConfiguration const&);
    TransportConfiguration();
#endif // @header-generator platform
};

} // namespace NetherNet
