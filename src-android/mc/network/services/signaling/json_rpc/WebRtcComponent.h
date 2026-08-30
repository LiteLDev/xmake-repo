#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/network/services/signaling/IJsonRpcComponent.h"
#include "mc/network/services/signaling/player_messaging/NetworkID.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ISignalingJsonRpcInterop;
class TaskGroup;
namespace JsonRpc { class JsonRpcError; }
namespace JsonRpc { class JsonRpcProvider; }
namespace JsonRpc { class ReceiveClientMessageResult; }
// clang-format on

namespace JsonRpc {

class WebRtcComponent : public ::IJsonRpcComponent, public ::std::enable_shared_from_this<JsonRpc::WebRtcComponent> {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup> const> mTaskGroup;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<std::string, std::function<void (std::string*)>>>> mMethodRegistrations;
    ::ll::TypedStorage<4, 40, std::mutex> mNetworkIdTranslationMutex;
    ::ll::TypedStorage<8, 40, std::unordered_map<NetherNet::NetworkID, PlayerMessaging::NetworkID>> mNetworkIdTranslationMap;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ISignalingJsonRpcInterop>> mInterop;
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonRpc::JsonRpcProvider>> mProvider;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    WebRtcComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WebRtcComponent();

    virtual void initialize(std::shared_ptr<JsonRpc::JsonRpcProvider>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initialize(std::shared_ptr<JsonRpc::JsonRpcProvider>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace JsonRpc
