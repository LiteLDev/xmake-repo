#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/ISignalingInterface.h"
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/nether_net/signaling/MessageReceived.h"
#include "mc/deps/nether_net/signaling/http/HttpResponse.h"
#include "mc/deps/nether_net/signaling/http/HttpServer.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { class ContextProxy; }
namespace NetherNet { struct HttpRequest; }
namespace NetherNet { struct ISignalingEventHandler; }
namespace webrtc { template<typename T0> class scoped_refptr; }
// clang-format on

namespace NetherNet {

class HttpSignalingServer : public ::NetherNet::HttpServer, public ::NetherNet::ISignalingInterface {
public:
    // HttpSignalingServer inner types define
    using PendingKey = std::pair<NetherNet::NetworkID, std::string>;

    using ResponsePromise =
        ::Bedrock::Threading::AsyncPromise<Bedrock::Result<NetherNet::HttpResponse, std::error_code>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mPendingJoinPromises;
    ::ll::UntypedStorage<8, 88> mEventDispatcher;
    ::ll::UntypedStorage<8, 8>  mSafetyFlag;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpSignalingServer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~HttpSignalingServer();

    virtual ::Bedrock::Threading::Async<Bedrock::Result<NetherNet::HttpResponse, std::error_code>> onRequest(::NetherNet::HttpRequest);

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
    MCNAPI ::Bedrock::Threading::Async<Bedrock::Result<NetherNet::HttpResponse, std::error_code>>
        $onRequest(::NetherNet::HttpRequest);

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

} // namespace NetherNet
