#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/nether_net/LogSeverity.h"
#include "mc/network/NetworkSystem.h"
#include "mc/network/PacketGroupDefinition.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IPacketSerializationController;
#if defined(LL_PLAT_A) // @header-generator platform
class NetherNetTransportFactory;
#else // @header-generator platform
#endif // @header-generator platform
class NetworkDebugManager;
class NetworkIdentifier;
class NetworkSessionOwner;
class NetworkStatistics;
class PrivateKeyManager;
class Scheduler;
class SignalingService;
class SignalingServiceSignInJob;
struct ConnectionDefinition;
struct NetworkSettingOptions;
struct NetworkSystemToggles;
struct PortConfiguration;
namespace NetherNet { struct NetworkID; }
namespace PlayerMessaging { struct NetworkID; }
// clang-format on

class ServerNetworkSystem : public ::Bedrock::EnableNonOwnerReferences, public ::NetworkSystem {
public:
    // ServerNetworkSystem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using DependencyFactory = ::brstd::function_ref<NetworkSystem::Dependencies()>;
#else // @header-generator platform
    using DependencyFactory = ::brstd::function_ref<::NetworkSystem::Dependencies()>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using StatisticsFactory = ::brstd::function_ref<std::unique_ptr<NetworkStatistics>()>;
#else // @header-generator platform
    using StatisticsFactory = ::brstd::function_ref<::std::unique_ptr<::NetworkStatistics>()>;
#endif // @header-generator platform

public:
    // prevent constructor by default
    ServerNetworkSystem();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ServerNetworkSystem();
#else // @header-generator platform
    virtual ~ServerNetworkSystem() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ServerNetworkSystem(
        ::brstd::function_ref<NetworkSystem::Dependencies()>,
        ::brstd::function_ref<std::unique_ptr<NetworkStatistics>()>
#else // @header-generator platform
    MCAPI ServerNetworkSystem(
        ::Scheduler&                                                 receiveThread,
        ::std::vector<::std::string> const&                          overrideBroadcastAddresses,
        ::NetworkSystemToggles const&                                networkToggles,
        ::Bedrock::NonOwnerPointer<::NetworkDebugManager>            networkDebugManager,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>                 appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner>         networkSessionOwner,
        ::NetworkSettingOptions const&                               networkSettingOption,
        ::PortConfiguration const&                                   portConfig,
        ::NetherNet::LogSeverity                                     defaultLogSeverity,
        ::std::optional<::NetherNet::NetworkID>                      networkId,
        ::Bedrock::NonOwnerPointer<::SignalingService>               signalingService,
        ::std::optional<::PacketGroupDefinition::PacketGroupBuilder> packetGroupBuilder,
        ::std::unique_ptr<::IPacketSerializationController>          packetController
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ServerNetworkSystem(
        ::Scheduler&,
        std::vector<std::string> const&,
        ::NetworkSystemToggles const&,
        ::Bedrock::NonOwnerPointer<NetworkDebugManager>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetworkSessionOwner>>,
        ::NetworkSettingOptions const&,
        ::PortConfiguration const&,
        ::NetherNet::LogSeverity,
        std::optional<NetherNet::NetworkID>,
        ::Bedrock::NonOwnerPointer<SignalingService>,
        std::optional<PacketGroupDefinition::PacketGroupBuilder>,
        std::unique_ptr<IPacketSerializationController>
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::shared_ptr<::SignalingServiceSignInJob> createSignalingServiceSigninJobIfNeeded(
        ::std::shared_ptr<::SignalingService>                                        signalingService,
        ::Bedrock::Threading::Async<::std::optional<::PlayerMessaging::NetworkID>>&& playerMessagingId
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<SignalingServiceSignInJob> createSignalingServiceSigninJobIfNeeded(
        std::shared_ptr<SignalingService>,
        ::Bedrock::Threading::Async<std::optional<PlayerMessaging::NetworkID>>&&
    );
#else // @header-generator platform
    MCAPI ::NetworkIdentifier getLocalNetworkId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NetworkIdentifier getLocalNetworkId() const;
#else // @header-generator platform
    MCAPI bool host(::ConnectionDefinition const& definition, ::PrivateKeyManager const& keys);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getMultiplayerCorrelationId() const;

    MCNAPI bool host(::ConnectionDefinition const&, ::PrivateKeyManager const&);

    MCNAPI void reloadPacketLimitConfig(::PacketGroupDefinition::PacketGroupBuilder&&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void reloadPacketLimitConfig(::PacketGroupDefinition::PacketGroupBuilder&& packetGroupBuilder);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::brstd::function_ref<NetworkSystem::Dependencies()>,
        ::brstd::function_ref<std::unique_ptr<NetworkStatistics>()>
    );

    MCNAPI void* $ctor(
        ::Scheduler&,
        std::vector<std::string> const&,
        ::NetworkSystemToggles const&,
        ::Bedrock::NonOwnerPointer<NetworkDebugManager>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<NetworkSessionOwner>>,
        ::NetworkSettingOptions const&,
        ::PortConfiguration const&,
        ::NetherNet::LogSeverity,
        std::optional<NetherNet::NetworkID>,
        ::Bedrock::NonOwnerPointer<SignalingService>,
        std::optional<PacketGroupDefinition::PacketGroupBuilder>,
        std::unique_ptr<IPacketSerializationController>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Scheduler&                                                 receiveThread,
        ::std::vector<::std::string> const&                          overrideBroadcastAddresses,
        ::NetworkSystemToggles const&                                networkToggles,
        ::Bedrock::NonOwnerPointer<::NetworkDebugManager>            networkDebugManager,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>                 appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkSessionOwner>         networkSessionOwner,
        ::NetworkSettingOptions const&                               networkSettingOption,
        ::PortConfiguration const&                                   portConfig,
        ::NetherNet::LogSeverity                                     defaultLogSeverity,
        ::std::optional<::NetherNet::NetworkID>                      networkId,
        ::Bedrock::NonOwnerPointer<::SignalingService>               signalingService,
        ::std::optional<::PacketGroupDefinition::PacketGroupBuilder> packetGroupBuilder,
        ::std::unique_ptr<::IPacketSerializationController>          packetController
#endif // @header-generator platform
    );
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
