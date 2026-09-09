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
    // clang-format off
    virtual ~ISignalingJsonRpcInterop() = default;

    virtual ::Bedrock::Threading::Async<Bedrock::Result<void, NetherNet::ESessionError>> sendJsonRpcTo(::PlayerMessaging::NetworkID, std::optional<std::string> const&, std::string const&) const = 0;

    virtual ::Bedrock::Threading::Async<Bedrock::Result<void, NetherNet::ESessionError>> sendJsonRpc(std::optional<std::string> const&, std::string const&) const = 0;

    virtual std::shared_ptr<MessageTracker> getMessageTracker() = 0;

    virtual void parseSignal(::NetherNet::NetworkID, std::string, std::string) = 0;

    virtual void parseTurnConfig(::Json::Value const&) = 0;

    virtual void setTurnConfig(std::vector<NetherNet::StunRelayServer>&&, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>) = 0;

    virtual void onTurnConfigFailure(::Bedrock::ErrorInfo<NetherNet::ESessionError> const&) = 0;
    // clang-format on
    // NOLINTEND
};
