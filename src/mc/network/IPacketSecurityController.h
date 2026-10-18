#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/MinecraftPacketIds.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/NetworkIdentifier.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/PacketGroupDefinition.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/platform/ErrorInfo.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
namespace Bedrock { struct ImplCtor; }
// clang-format on

#endif // @header-generator platform
class IPacketSecurityController
: public ::Bedrock::ImplBase<
#if defined(LL_PLAT_A) // @header-generator platform
      IPacketSecurityController,
      Bedrock::ImplCtor(const NetworkIdentifier&),
      Bedrock::ImplCtor(const NetworkIdentifier&, std::shared_ptr<PacketGroupDefinition::PacketGroupBuilder>)> {
#else // @header-generator platform
      ::IPacketSecurityController,
      ::Bedrock::ImplCtor(::NetworkIdentifier const&),
      ::Bedrock::ImplCtor(::NetworkIdentifier const&, ::std::shared_ptr<::PacketGroupDefinition::PacketGroupBuilder>)> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IPacketSecurityController() = default;

    virtual ::PacketViolationResponse checkForViolation(::MinecraftPacketIds, ::SubClientId, ::nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>> const&, bool*) = 0;
#else // @header-generator platform
    virtual ::PacketViolationResponse checkForViolation(
        ::MinecraftPacketIds                                                     packetId,
        ::SubClientId                                                            subClientId,
        ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>> const& result,
        bool*                                                                    outIsNewOrUpdatedViolation
    ) = 0;
#endif // @header-generator platform

    virtual uint getTelemetryData() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::ErrorInfo<std::error_code> consumePacketError(::SubClientId) = 0;
#else // @header-generator platform
    virtual ::Bedrock::ErrorInfo<::std::error_code> consumePacketError(::SubClientId subClientId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadPacketLimitConfig(std::shared_ptr<PacketGroupDefinition::PacketGroupBuilder>) = 0;
    // clang-format on
#else // @header-generator platform
    virtual void
    reloadPacketLimitConfig(::std::shared_ptr<::PacketGroupDefinition::PacketGroupBuilder> packetGroupBuilder) = 0;

    virtual ~IPacketSecurityController() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND
};
