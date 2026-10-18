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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ::PacketViolationResponse checkForViolation(::MinecraftPacketIds, ::nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>> const&, bool*) = 0;

    virtual ~IPacketSecurityHandler() = default;
#else // @header-generator platform
    virtual ::PacketViolationResponse checkForViolation(
        ::MinecraftPacketIds                                                     packetId,
        ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>> const& result,
        bool*                                                                    outIsNewOrUpdatedViolation
    ) = 0;
#endif // @header-generator platform

    virtual uint getTelemetryData() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform

    virtual ~IPacketSecurityHandler() = default;
#endif // @header-generator platform
    // NOLINTEND
};
