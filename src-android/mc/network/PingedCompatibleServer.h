#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/ServerSupportedAuthenticationTypes.h"
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/network/ConnectionType.h"
#include "mc/network/Nonce.h"
#include "mc/network/TransportLayer.h"
#include "mc/world/level/GameType.h"

struct PingedCompatibleServer {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<8, 24, std::string> worldName;
    ::ll::TypedStorage<4, 4, ::GameType> gameType;
    ::ll::TypedStorage<4, 4, int> protocol;
    ::ll::TypedStorage<8, 24, std::string> version;
    ::ll::TypedStorage<4, 4, int> players;
    ::ll::TypedStorage<4, 4, int> maxPlayers;
    ::ll::TypedStorage<8, 24, std::string> originalAddress;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> address;
    ::ll::TypedStorage<4, 4, uint> pingTime;
    ::ll::TypedStorage<4, 4, float> pingLatency;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID> hostGuid;
    ::ll::TypedStorage<8, 8, ulong> startTime;
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID> webRTCNetworkId;
    ::ll::TypedStorage<4, 4, ::TransportLayer> transportLayer;
    ::ll::TypedStorage<2, 2, ::Social::ConnectionType> connectionType;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> creationTime;
    ::ll::TypedStorage<1, 1, bool> isEditorWorld;
    ::ll::TypedStorage<1, 1, bool> isHardcore;
    ::ll::UntypedStorage<1, 2> supportedAuth;
    ::ll::UntypedStorage<8, 24> nonce;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PingedCompatibleServer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PingedCompatibleServer(::PingedCompatibleServer const&);

    MCNAPI std::string getId() const;

    MCNAPI ~PingedCompatibleServer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PingedCompatibleServer const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
