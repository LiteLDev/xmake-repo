#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/nether_net/ESessionError.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

class INetherNetTransportInterfaceCallbacks {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~INetherNetTransportInterfaceCallbacks() = default;

    virtual void OnSessionGetConnectionFlags(::NetherNet::NetworkID, uint*) = 0;

    virtual ::Bedrock::Threading::Async<bool> OnSessionRequested(::NetherNet::NetworkID, unsigned long long, std::string_view, std::string_view, bool) = 0;

    virtual ::Bedrock::Threading::Async<bool> OnSessionResponse(::NetherNet::NetworkID, unsigned long long, std::string_view, std::string_view, bool);

    virtual void OnSessionOpen(::NetherNet::NetworkID, unsigned long long, bool) = 0;

    virtual void OnSessionClose(::NetherNet::NetworkID, unsigned long long, ::NetherNet::ESessionError, ::Json::Value) = 0;

    virtual void OnSpopViolation() = 0;

    virtual void OnBroadcastResponseReceived(::NetherNet::NetworkID, void const*, int) = 0;

    virtual bool OnBroadcastDiscoveryRequestReceivedGetResponse(void*, int*) = 0;
    // clang-format on
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<bool>
    $OnSessionResponse(::NetherNet::NetworkID, unsigned long long, std::string_view, std::string_view, bool);
    // NOLINTEND
};

} // namespace NetherNet
