#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/raknet/SystemAddress.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct ChunkLoadTelemetryData;
struct NetworkAddress;
namespace Json { class Value; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace RakNet { class TCPInterface; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ServerCommunicationInterface {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<RakNet::TCPInterface>> mTCPConnection;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>             mHostAddress;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnk48044d;
    ::ll::UntypedStorage<8, 136> mUnkd080df;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ServerCommunicationInterface& operator=(ServerCommunicationInterface const&);
    ServerCommunicationInterface(ServerCommunicationInterface const&);
#endif // @header-generator platform
    ServerCommunicationInterface();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void communicate(::std::string const& method, ::Json::Value const& params);

    MCNAPI void sendBandwidthMetric(
        uint64               connectionTotalBytesReceived,
        uint64               connectionTotalBytesSent,
        uint64               playerDeltaBytesReceived,
        uint64               playerDeltaBytesSent,
        ::std::string const& xuid
    );

    MCNAPI void sendChunkLoadTelemtryData(::ChunkLoadTelemetryData const& data);

    MCNAPI void sendServerStarted();

    MCNAPI void sendServerTickTime(::std::chrono::nanoseconds timepoint);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI static ::std::unique_ptr<::ServerCommunicationInterface> create(::NetworkAddress const& address);
#endif
    // NOLINTEND
#endif // @header-generator platform
};
