#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/IPacketSecurityController.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketGroupDefinition.h"
#include "mc/network/PacketRateLimitFeature.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/network/PacketViolationHandler.h"
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<PacketViolationHandler>> mPacketViolationHandler;
    ::ll::TypedStorage<8, 40, std::optional<PacketRateLimitFeature>>  mPacketRateLimitFeature;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PacketViolationHandler>> mPacketViolationHandler;
    ::ll::TypedStorage<8, 40, ::std::optional<::PacketRateLimitFeature>>  mPacketRateLimitFeature;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PacketSecurityController();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~PacketSecurityController();
#else // @header-generator platform
    virtual ~PacketSecurityController() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PacketViolationResponse checkForViolation(::MinecraftPacketIds, ::SubClientId, ::nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>> const&, bool*);
#else // @header-generator platform
    virtual ::PacketViolationResponse checkForViolation(
        ::MinecraftPacketIds                                                     packetId,
        ::SubClientId                                                            subClientId,
        ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>> const& result,
        bool*                                                                    outIsNewOrUpdatedViolation
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint getTelemetryData();
#else // @header-generator platform
    virtual uint getTelemetryData() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::ErrorInfo<std::error_code> consumePacketError(::SubClientId);
#else // @header-generator platform
    virtual ::Bedrock::ErrorInfo<::std::error_code> consumePacketError(::SubClientId subClientId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadPacketLimitConfig(std::shared_ptr<PacketGroupDefinition::PacketGroupBuilder>);
    // clang-format on
#else // @header-generator platform
    virtual void reloadPacketLimitConfig(
        ::std::shared_ptr<::PacketGroupDefinition::PacketGroupBuilder> packetGroupBuilder
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    PacketSecurityController(::NetworkIdentifier const&, std::shared_ptr<PacketGroupDefinition::PacketGroupBuilder>);
#else // @header-generator platform
    MCNAPI PacketSecurityController(
        ::NetworkIdentifier const&                                     netId,
        ::std::shared_ptr<::PacketGroupDefinition::PacketGroupBuilder> packetGroupBuilder
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::NetworkIdentifier const&, std::shared_ptr<PacketGroupDefinition::PacketGroupBuilder>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::NetworkIdentifier const&                                     netId,
        ::std::shared_ptr<::PacketGroupDefinition::PacketGroupBuilder> packetGroupBuilder
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PacketViolationResponse $checkForViolation(
#if defined(LL_PLAT_A) // @header-generator platform
        ::MinecraftPacketIds,
        ::SubClientId,
        ::nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>> const&,
        bool*
#else // @header-generator platform
        ::MinecraftPacketIds                                                     packetId,
        ::SubClientId                                                            subClientId,
        ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>> const& result,
        bool*                                                                    outIsNewOrUpdatedViolation
#endif // @header-generator platform
    );

    MCNAPI uint $getTelemetryData();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::ErrorInfo<std::error_code> $consumePacketError(::SubClientId);
#else // @header-generator platform
    MCNAPI ::Bedrock::ErrorInfo<::std::error_code> $consumePacketError(::SubClientId subClientId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadPacketLimitConfig(std::shared_ptr<PacketGroupDefinition::PacketGroupBuilder>);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void
    $reloadPacketLimitConfig(::std::shared_ptr<::PacketGroupDefinition::PacketGroupBuilder> packetGroupBuilder);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
