#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/ISignalingInterface.h"
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/nether_net/signaling/MessageReceived.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class DispatcherInterface; }
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { struct ISignalingEventHandler; }
// clang-format on

class HttpSignalingClient : public ::NetherNet::ISignalingInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup>           mTaskGroup;
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID> mRemoteId;
    ::ll::TypedStorage<8, 24, std::string>            mServerUrl;
    ::ll::UntypedStorage<8, 24>                       mDispatcher;
    ::ll::UntypedStorage<8, 88>                       mEventDispatcher;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpSignalingClient();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~HttpSignalingClient();

    virtual void SendSignal(::NetherNet::NetworkID, ::NetherNet::NetworkID, std::string const&, std::function<void (NetherNet::ESessionError)>&&);

    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SendSignal(
        ::NetherNet::NetworkID,
        ::NetherNet::NetworkID,
        std::string const&,
        std::function<void(NetherNet::ESessionError)>&&
    );

    MCNAPI ::Bedrock::PubSub::Subscription $RegisterEventHandler(::NetherNet::ISignalingEventHandler*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
