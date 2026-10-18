#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#endif // @header-generator platform
#include "mc/deps/raknet/PluginInterface2.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/raknet/PunchthroughConfiguration.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/deps/raknet/data_structures/Queue.h"
#else // @header-generator platform
#include "mc/deps/raknet/PluginReceiveResult.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace RakNet { struct NatPunchthroughDebugInterface; }
#else // @header-generator platform
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
#endif // @header-generator platform
// clang-format on

namespace RakNet {

class NatPunchthroughClient : public ::RakNet::PluginInterface2 {
public:
    // NatPunchthroughClient inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct SendPing;
#else // @header-generator platform
#endif // @header-generator platform
    struct AddrAndGuid;
    struct DSTAndFac;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct SendPing;
#endif // @header-generator platform
    // clang-format on

    // NatPunchthroughClient inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct SendPing {
    public:
        // SendPing inner types define
        enum TestMode : uint {
            TESTING_INTERNAL_IPS                                      = 0,
            WAITING_FOR_INTERNAL_IPS_RESPONSE                         = 1,
            TESTING_EXTERNAL_IPS_FACILITATOR_PORT_TO_FACILITATOR_PORT = 2,
            TESTING_EXTERNAL_IPS_1024_TO_FACILITATOR_PORT             = 3,
            TESTING_EXTERNAL_IPS_FACILITATOR_PORT_TO_1024             = 4,
            TESTING_EXTERNAL_IPS_1024_TO_1024                         = 5,
            WAITING_AFTER_ALL_ATTEMPTS                                = 6,
            PUNCHING_FIXED_PORT                                       = 7,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong>                                               nextActionTime;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                           targetAddress;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                           facilitator;
        ::ll::TypedStorage<8, 2720, ::RakNet::SystemAddress[20]>                      internalIds;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                               targetGuid;
        ::ll::TypedStorage<1, 1, bool>                                                weAreSender;
        ::ll::TypedStorage<4, 4, int>                                                 attemptCount;
        ::ll::TypedStorage<4, 4, int>                                                 retryCount;
        ::ll::TypedStorage<4, 4, int>                                                 punchingFixedPortAttempts;
        ::ll::TypedStorage<2, 2, ushort>                                              sessionId;
        ::ll::TypedStorage<1, 1, bool>                                                sentTTL;
        ::ll::TypedStorage<4, 4, ::RakNet::NatPunchthroughClient::SendPing::TestMode> testMode;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct AddrAndGuid {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> addr;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     guid;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 136> mUnk2032bb;
        ::ll::UntypedStorage<8, 16>  mUnkcbce59;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        AddrAndGuid& operator=(AddrAndGuid const&);
        AddrAndGuid(AddrAndGuid const&);
        AddrAndGuid();
#endif // @header-generator platform
    };

    struct DSTAndFac {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     destination;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> facilitator;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 16>  mUnk16424d;
        ::ll::UntypedStorage<8, 136> mUnkdc19cd;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        DSTAndFac& operator=(DSTAndFac const&);
        DSTAndFac(DSTAndFac const&);
        DSTAndFac();
    };

    struct SendPing {
    public:
        // SendPing inner types define
        enum class TestMode : int {
            TestingInternalIps                                 = 0,
            WaitingForInternalIpsResponse                      = 1,
            TestingExternalIpsFacilitatorPortToFacilitatorPort = 2,
            TestingExternalIps1024ToFacilitatorPort            = 3,
            TestingExternalIpsFacilitatorPortTo1024            = 4,
            TestingExternalIps1024To1024                       = 5,
            WaitingAfterAllAttempts                            = 6,
            PunchingFixedPort                                  = 7,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>    mUnk18a299;
        ::ll::UntypedStorage<8, 136>  mUnk242bfd;
        ::ll::UntypedStorage<8, 136>  mUnk3bbd25;
        ::ll::UntypedStorage<8, 2720> mUnk357acc;
        ::ll::UntypedStorage<8, 16>   mUnk558bb1;
        ::ll::UntypedStorage<1, 1>    mUnk1a32d8;
        ::ll::UntypedStorage<4, 4>    mUnk473bf6;
        ::ll::UntypedStorage<4, 4>    mUnkd5a23b;
        ::ll::UntypedStorage<4, 4>    mUnk3511c3;
        ::ll::UntypedStorage<2, 2>    mUnk87cc06;
        ::ll::UntypedStorage<1, 1>    mUnk14f9f5;
        ::ll::UntypedStorage<4, 4>    mUnkeb2995;
        // NOLINTEND

    public:
        // prevent constructor by default
        SendPing& operator=(SendPing const&);
        SendPing(SendPing const&);
        SendPing();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 3040, ::RakNet::NatPunchthroughClient::SendPing> sp;
    ::ll::TypedStorage<2, 2, ushort>                                       mostRecentExternalPort;
    ::ll::TypedStorage<8, 56, ::RakNet::PunchthroughConfiguration>         pc;
    ::ll::TypedStorage<8, 8, ::RakNet::NatPunchthroughDebugInterface*>     natPunchthroughDebugInterface;
    ::ll::UntypedStorage<8, 16>                                            failedAttemptList;
    ::ll::UntypedStorage<8, 24>                                            queuedOpenNat;
    ::ll::TypedStorage<2, 2, ushort>                                       portStride;
    ::ll::UntypedStorage<4, 4>                                             hasPortStride;
    ::ll::TypedStorage<8, 8, ulong>                                        portStrideCalTimeout;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 3040> mUnk54043f;
    ::ll::UntypedStorage<2, 2>    mUnk240a98;
    ::ll::UntypedStorage<8, 56>   mUnk79764a;
    ::ll::UntypedStorage<8, 8>    mUnkb0db55;
    ::ll::UntypedStorage<8, 16>   mUnk6c229b;
    ::ll::UntypedStorage<8, 24>   mUnkf9a4b3;
    ::ll::UntypedStorage<2, 2>    mUnka1a0e8;
    ::ll::UntypedStorage<4, 4>    mUnk3fd151;
    ::ll::UntypedStorage<8, 8>    mUnk49a337;
    // NOLINTEND

public:
    // prevent constructor by default
    NatPunchthroughClient& operator=(NatPunchthroughClient const&);
    NatPunchthroughClient(NatPunchthroughClient const&);
    NatPunchthroughClient();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NatPunchthroughClient() /*override*/ = default;

    virtual void Update() /*override*/;

    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool) /*override*/;

    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    virtual void OnAttach() /*override*/;

    virtual void OnDetach() /*override*/;

    virtual void OnRakPeerShutdown() /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace RakNet
