#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct PacketViolation {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 4, uint> mTotalCount;
    ::ll::TypedStorage<4, 4, float> mTotalScore;
    ::ll::TypedStorage<4, 4, ::MinecraftPacketIds> mLastPacketId;
    ::ll::TypedStorage<8, 24, std::optional<std::error_code>> mLastResult;
    ::ll::TypedStorage<4, 4, ::PacketViolationResponse> mLastResponse;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastViolationTime;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                                    mTotalCount;
    ::ll::TypedStorage<4, 4, float>                                   mTotalScore;
    ::ll::TypedStorage<4, 4, ::MinecraftPacketIds>                    mLastPacketId;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::error_code>>     mLastResult;
    ::ll::TypedStorage<4, 4, ::PacketViolationResponse>               mLastResponse;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastViolationTime;
#endif // @header-generator platform
    // NOLINTEND
};
