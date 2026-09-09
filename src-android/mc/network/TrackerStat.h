#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/NetworkIdentifier.h"

struct TrackerStat {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, uint> sentCount;
    ::ll::TypedStorage<4, 4, uint> sentBytes;
    ::ll::TypedStorage<4, 4, uint> receivedCount;
    ::ll::TypedStorage<4, 4, uint> receivedBytes;
    ::ll::TypedStorage<4, 4, uint> sampleNum;
    ::ll::TypedStorage<8, 40, std::unordered_map<NetworkIdentifier, std::vector<std::reference_wrapper<const std::string>>>> packetsSent;
    ::ll::TypedStorage<8, 40, std::unordered_map<NetworkIdentifier, std::vector<std::reference_wrapper<const std::string>>>> packetsReceived;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    TrackerStat& operator=(TrackerStat const&);
    TrackerStat(TrackerStat const&);
};
