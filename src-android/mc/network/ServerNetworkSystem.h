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
class NetherNetTransportFactory;
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
    using DependencyFactory = ::brstd::function_ref<NetworkSystem::Dependencies()>;

    using StatisticsFactory = ::brstd::function_ref<std::unique_ptr<NetworkStatistics>()>;

public:
    // prevent constructor by default
    ServerNetworkSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerNetworkSystem();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerNetworkSystem(
        ::brstd::function_ref<NetworkSystem::Dependencies()>,
        ::brstd::function_ref<std::unique_ptr<NetworkStatistics>()>
    );

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

    MCNAPI std::shared_ptr<SignalingServiceSignInJob> createSignalingServiceSigninJobIfNeeded(
        std::shared_ptr<SignalingService>,
        ::Bedrock::Threading::Async<std::optional<PlayerMessaging::NetworkID>>&&
    );

    MCNAPI ::NetworkIdentifier getLocalNetworkId() const;

    MCNAPI std::string getMultiplayerCorrelationId() const;

    MCNAPI bool host(::ConnectionDefinition const&, ::PrivateKeyManager const&);

    MCNAPI void reloadPacketLimitConfig(::PacketGroupDefinition::PacketGroupBuilder&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
    );
    // NOLINTEND

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
};
