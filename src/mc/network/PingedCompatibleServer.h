#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/certificates/identity/ServerSupportedAuthenticationTypes.h"
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/network/ConnectionType.h"
#include "mc/network/Nonce.h"
#include "mc/network/TransportLayer.h"
#include "mc/world/level/GameType.h"
#else // @header-generator platform
#endif // @header-generator platform

struct PingedCompatibleServer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32>  mUnk8523a7;
    ::ll::UntypedStorage<8, 32>  mUnk3d7aec;
    ::ll::UntypedStorage<4, 4>   mUnke564b6;
    ::ll::UntypedStorage<4, 4>   mUnk130f1b;
    ::ll::UntypedStorage<8, 32>  mUnk4e7dc2;
    ::ll::UntypedStorage<4, 4>   mUnk3ea2c9;
    ::ll::UntypedStorage<4, 4>   mUnkd9f37a;
    ::ll::UntypedStorage<8, 32>  mUnk6c3bb8;
    ::ll::UntypedStorage<8, 136> mUnke52a42;
    ::ll::UntypedStorage<4, 4>   mUnkbc1dd6;
    ::ll::UntypedStorage<4, 4>   mUnk3ce443;
    ::ll::UntypedStorage<8, 16>  mUnk1289fb;
    ::ll::UntypedStorage<8, 8>   mUnkb0d1a5;
    ::ll::UntypedStorage<8, 24>  mUnk59a07a;
    ::ll::UntypedStorage<4, 4>   mUnk702444;
    ::ll::UntypedStorage<2, 2>   mUnk89225c;
    ::ll::UntypedStorage<8, 8>   mUnkf06804;
    ::ll::UntypedStorage<1, 1>   mUnk317f91;
    ::ll::UntypedStorage<1, 1>   mUnk30edaa;
    ::ll::UntypedStorage<1, 2>   mUnke83298;
    ::ll::UntypedStorage<8, 32>  mUnk11d9ac;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    PingedCompatibleServer();

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    PingedCompatibleServer& operator=(PingedCompatibleServer const&);
    PingedCompatibleServer();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    PingedCompatibleServer();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PingedCompatibleServer(::PingedCompatibleServer const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getId() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::std::string getId() const;
#endif

    MCNAPI ::PingedCompatibleServer& operator=(::PingedCompatibleServer&&);

#ifdef LL_PLAT_C
    MCNAPI ::PingedCompatibleServer& operator=(::PingedCompatibleServer const&);
#endif
#endif // @header-generator platform

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
