#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PunchthroughConfiguration.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/deps/raknet/data_structures/Queue.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct NatPunchthroughDebugInterface; }
// clang-format on

namespace RakNet {

class NatPunchthroughClient : public ::RakNet::PluginInterface2 {
public:
    // NatPunchthroughClient inner types declare
    // clang-format off
    struct SendPing;
    struct AddrAndGuid;
    struct DSTAndFac;
    // clang-format on

    // NatPunchthroughClient inner types define
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

    struct AddrAndGuid {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> addr;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     guid;
        // NOLINTEND
    };

    struct DSTAndFac {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     destination;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> facilitator;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 3040, ::RakNet::NatPunchthroughClient::SendPing> sp;
    ::ll::TypedStorage<2, 2, ushort>                                       mostRecentExternalPort;
    ::ll::TypedStorage<8, 56, ::RakNet::PunchthroughConfiguration>         pc;
    ::ll::TypedStorage<8, 8, ::RakNet::NatPunchthroughDebugInterface*>     natPunchthroughDebugInterface;
    ::ll::UntypedStorage<8, 16>                                            failedAttemptList;
    ::ll::UntypedStorage<8, 24>                                            queuedOpenNat;
    ::ll::TypedStorage<2, 2, ushort>                                       portStride;
    ::ll::UntypedStorage<4, 4>                                             hasPortStride;
    ::ll::TypedStorage<8, 8, ulong>                                        portStrideCalTimeout;
    // NOLINTEND
};

} // namespace RakNet
