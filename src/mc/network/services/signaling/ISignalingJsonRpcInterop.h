#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class MessageTracker;
namespace Json { class Value; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct StunRelayServer; }
namespace PlayerMessaging { struct NetworkID; }
// clang-format on

class ISignalingJsonRpcInterop {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~ISignalingJsonRpcInterop() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<Bedrock::Result<void, NetherNet::ESessionError>> sendJsonRpcTo(::PlayerMessaging::NetworkID, std::optional<std::string> const&, std::string const&) const = 0;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Bedrock::Result<void, ::NetherNet::ESessionError>> sendJsonRpcTo(
        ::PlayerMessaging::NetworkID          networkIdTo,
        ::std::optional<::std::string> const& messageId,
        ::std::string const&                  message
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<Bedrock::Result<void, NetherNet::ESessionError>> sendJsonRpc(std::optional<std::string> const&, std::string const&) const = 0;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Bedrock::Result<void, ::NetherNet::ESessionError>>
    sendJsonRpc(::std::optional<::std::string> const& messageId, ::std::string const& message) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<MessageTracker> getMessageTracker() = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<::MessageTracker> getMessageTracker() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void parseSignal(::NetherNet::NetworkID, std::string, std::string) = 0;
#else // @header-generator platform
    virtual void parseSignal(::NetherNet::NetworkID fromNetworkID, ::std::string message, ::std::string messageId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void parseTurnConfig(::Json::Value const&) = 0;
#else // @header-generator platform
    virtual void parseTurnConfig(::Json::Value const& config) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTurnConfig(std::vector<NetherNet::StunRelayServer>&&, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>) = 0;
#else // @header-generator platform
    virtual void setTurnConfig(
        ::std::vector<::NetherNet::StunRelayServer>&& config,
        ::std::chrono::steady_clock::time_point       expiration
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTurnConfigFailure(::Bedrock::ErrorInfo<NetherNet::ESessionError> const&) = 0;
    // clang-format on
#else // @header-generator platform
    virtual void onTurnConfigFailure(::Bedrock::ErrorInfo<::NetherNet::ESessionError> const& error) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
