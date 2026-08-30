#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
// clang-format on

struct PacketViolation {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, uint> mTotalCount;
    ::ll::TypedStorage<4, 4, float> mTotalScore;
    ::ll::TypedStorage<4, 4, ::MinecraftPacketIds> mLastPacketId;
    ::ll::TypedStorage<8, 24, std::optional<std::error_code>> mLastResult;
    ::ll::TypedStorage<4, 4, ::PacketViolationResponse> mLastResponse;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastViolationTime;
    // clang-format on
    // NOLINTEND
};
