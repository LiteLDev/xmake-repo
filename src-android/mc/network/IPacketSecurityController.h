#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/PacketGroupDefinition.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/platform/ErrorInfo.h"

class IPacketSecurityController
: public ::Bedrock::ImplBase<
      IPacketSecurityController,
      Bedrock::ImplCtor(const NetworkIdentifier&),
      Bedrock::ImplCtor(const NetworkIdentifier&, std::shared_ptr<PacketGroupDefinition::PacketGroupBuilder>)> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IPacketSecurityController() = default;

    virtual ::PacketViolationResponse checkForViolation(::MinecraftPacketIds, ::SubClientId, ::nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>> const&, bool*) = 0;

    virtual uint getTelemetryData() = 0;

    virtual ::Bedrock::ErrorInfo<std::error_code> consumePacketError(::SubClientId) = 0;

    virtual void reloadPacketLimitConfig(std::shared_ptr<PacketGroupDefinition::PacketGroupBuilder>) = 0;
    // clang-format on
    // NOLINTEND
};
