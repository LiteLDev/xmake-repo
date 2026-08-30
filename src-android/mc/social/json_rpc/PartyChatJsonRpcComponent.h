#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/network/services/signaling/IJsonRpcComponent.h"

// auto generated forward declare list
// clang-format off
class ISignalingJsonRpcInterop;
class TaskGroup;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace JsonRpc { class JsonRpcProvider; }
namespace JsonRpc { struct ReceiveChatResult; }
// clang-format on

namespace JsonRpc {

class PartyChatJsonRpcComponent : public ::IJsonRpcComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<ISignalingJsonRpcInterop>> mInterop;
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonRpc::JsonRpcProvider>> mProvider;
    ::ll::UntypedStorage<8, 88>                                          mReceiveChatPublisher;
    ::ll::UntypedStorage<8, 64>                                          mChatMessageRpcRegistration;
    ::ll::UntypedStorage<8, 16>                                          mTaskGroup;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyChatJsonRpcComponent();

    virtual void initialize(std::shared_ptr<JsonRpc::JsonRpcProvider>);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PartyChatJsonRpcComponent();

    MCNAPI ::Bedrock::PubSub::Connector<void(const JsonRpc::ReceiveChatResult&)>& getReceiveChatConnector();

    MCNAPI ::Bedrock::Threading::Async<std::error_code> joinChannel(std::string const&);

    MCNAPI ::Bedrock::Threading::Async<std::error_code> leaveChannel(std::string const&, std::string const&);

    MCNAPI void sendMessage(std::string const&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
