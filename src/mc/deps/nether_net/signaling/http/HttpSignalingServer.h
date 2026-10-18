#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/ISignalingInterface.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/nether_net/signaling/MessageReceived.h"
#include "mc/deps/nether_net/signaling/http/HttpResponse.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/nether_net/signaling/http/HttpServer.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Scheduler;
class WorkerPool;
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::PubSub { class Subscription; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace NetherNet { class ContextProxy; }
#else // @header-generator platform
#endif // @header-generator platform
namespace NetherNet { struct HttpRequest; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace NetherNet { struct HttpResponse; }
#endif // @header-generator platform
namespace NetherNet { struct ISignalingEventHandler; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace webrtc { template<typename T0> class scoped_refptr; }
#else // @header-generator platform
namespace NetherNet { struct NetworkID; }
#endif // @header-generator platform
// clang-format on

namespace NetherNet {

class HttpSignalingServer : public ::NetherNet::HttpServer, public ::NetherNet::ISignalingInterface {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // HttpSignalingServer inner types define
    using PendingKey = std::pair<NetherNet::NetworkID, std::string>;

    using ResponsePromise =
        ::Bedrock::Threading::AsyncPromise<Bedrock::Result<NetherNet::HttpResponse, std::error_code>>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mPendingJoinPromises;
    ::ll::UntypedStorage<8, 88> mEventDispatcher;
    ::ll::UntypedStorage<8, 8>  mSafetyFlag;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16>  mUnka951d0;
    ::ll::UntypedStorage<8, 128> mUnkb54189;
    ::ll::UntypedStorage<8, 8>   mUnkaf0d99;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    HttpSignalingServer& operator=(HttpSignalingServer const&);
    HttpSignalingServer(HttpSignalingServer const&);
#endif // @header-generator platform
    HttpSignalingServer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~HttpSignalingServer();
#else // @header-generator platform
    virtual ~HttpSignalingServer() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<Bedrock::Result<NetherNet::HttpResponse, std::error_code>> onRequest(::NetherNet::HttpRequest);
#else // @header-generator platform
    virtual void SendSignal(
        ::NetherNet::NetworkID,
        ::NetherNet::NetworkID                              to,
        ::std::string const&                                signal,
        ::std::function<void(::NetherNet::ESessionError)>&& onComplete
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SendSignal(::NetherNet::NetworkID, ::NetherNet::NetworkID, std::string const&, std::function<void (NetherNet::ESessionError)>&&);
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription
    RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Bedrock::Result<::NetherNet::HttpResponse>>
    onRequest(::NetherNet::HttpRequest request) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<Bedrock::Result<NetherNet::HttpResponse, std::error_code>>
        $onRequest(::NetherNet::HttpRequest);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI void $SendSignal(
        ::NetherNet::NetworkID,
#if defined(LL_PLAT_A) // @header-generator platform
        ::NetherNet::NetworkID,
        std::string const&,
        std::function<void(NetherNet::ESessionError)>&&
#else // @header-generator platform
        ::NetherNet::NetworkID                              to,
        ::std::string const&                                signal,
        ::std::function<void(::NetherNet::ESessionError)>&& onComplete
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Subscription $RegisterEventHandler(::NetherNet::ISignalingEventHandler*);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Subscription $RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<::Bedrock::Result<::NetherNet::HttpResponse>>
    $onRequest(::NetherNet::HttpRequest request);


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet
