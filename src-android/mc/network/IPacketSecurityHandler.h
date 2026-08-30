#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/platform/ErrorInfo.h"

class IPacketSecurityHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ::PacketViolationResponse checkForViolation(::MinecraftPacketIds, ::nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>> const&, bool*) = 0;

    virtual ~IPacketSecurityHandler() = default;

    virtual uint getTelemetryData() = 0;
    // clang-format on
    // NOLINTEND
};
