#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/IPacketSecurityController.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketGroupDefinition.h"
#include "mc/network/PacketRateLimitFeature.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/platform/ErrorInfo.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class PacketViolationHandler;
// clang-format on

class PacketSecurityController : public ::IPacketSecurityController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<PacketViolationHandler>> mPacketViolationHandler;
    ::ll::TypedStorage<8, 40, std::optional<PacketRateLimitFeature>>  mPacketRateLimitFeature;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketSecurityController();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PacketSecurityController();

    virtual ::PacketViolationResponse checkForViolation(::MinecraftPacketIds, ::SubClientId, ::nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>> const&, bool*);

    virtual uint getTelemetryData();

    virtual ::Bedrock::ErrorInfo<std::error_code> consumePacketError(::SubClientId);

    virtual void reloadPacketLimitConfig(std::shared_ptr<PacketGroupDefinition::PacketGroupBuilder>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    PacketSecurityController(::NetworkIdentifier const&, std::shared_ptr<PacketGroupDefinition::PacketGroupBuilder>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NetworkIdentifier const&, std::shared_ptr<PacketGroupDefinition::PacketGroupBuilder>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PacketViolationResponse $checkForViolation(
        ::MinecraftPacketIds,
        ::SubClientId,
        ::nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>> const&,
        bool*
    );

    MCNAPI uint $getTelemetryData();

    MCNAPI ::Bedrock::ErrorInfo<std::error_code> $consumePacketError(::SubClientId);

    MCNAPI void $reloadPacketLimitConfig(std::shared_ptr<PacketGroupDefinition::PacketGroupBuilder>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
