#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/util/Random.h"

// auto generated forward declare list
// clang-format off
class ActorRuntimeID;
class ClientNetworkSystem;
class NetworkReplayReader;
class NetworkSessionOwner;
class Scheduler;
namespace Core { class Path; }
namespace Json { class Value; }
namespace Social { class GameConnectionInfo; }
// clang-format on

class NetworkReplayer : public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mPingIntervals;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scheduler>> mScheduler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<NetworkSessionOwner>> mNetworkSessionOwner;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientNetworkSystem>> mNetwork;
    ::ll::UntypedStorage<8, 8> mPacketReplayNetworkHandler;
    ::ll::TypedStorage<8, 24, std::vector<long>> mLatencyTimePointsMS;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastLatencyPacketSentAt;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastReplayPacketSentAt;
    ::ll::TypedStorage<8, 2544, ::Random> mRandom;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkReplayer() = default;
    // NOLINTEND
};
