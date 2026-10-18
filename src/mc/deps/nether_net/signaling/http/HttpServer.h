#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/TaskGroup.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/external/sigslot/has_slots.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/external/sigslot/single_threaded.h"
#endif // @header-generator platform
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Scheduler;
class WorkerPool;
#else // @header-generator platform
#endif // @header-generator platform
namespace NetherNet { class HttpConnection; }
namespace NetherNet { struct HttpRequest; }
namespace NetherNet { struct HttpResponse; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace sigslot { class single_threaded; }
#else // @header-generator platform
#endif // @header-generator platform
namespace webrtc { class Socket; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace webrtc { class SocketFactory; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace NetherNet {

#if defined(LL_PLAT_A) // @header-generator platform
class HttpServer : public ::NetherNet::ContextProxy, public ::sigslot::has_slots<sigslot::single_threaded> {
#else // @header-generator platform
class HttpServer : public ::NetherNet::ContextProxy, public ::sigslot::has_slots<::sigslot::single_threaded> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ushort>                                                   mPort;
    ::ll::TypedStorage<8, 24, std::string>                                             mBindAddress;
    ::ll::TypedStorage<8, 8, std::unique_ptr<webrtc::Socket>>                          mListenSocket;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<NetherNet::HttpConnection>>> mConnections;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                            mTaskGroup;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2>   mUnk202df9;
    ::ll::UntypedStorage<8, 32>  mUnk784a80;
    ::ll::UntypedStorage<8, 8>   mUnkf36298;
    ::ll::UntypedStorage<8, 24>  mUnk3d8f1e;
    ::ll::UntypedStorage<8, 336> mUnka23eeb;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    HttpServer& operator=(HttpServer const&);
    HttpServer(HttpServer const&);
#endif // @header-generator platform
    HttpServer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~HttpServer();
#else // @header-generator platform
    virtual ~HttpServer() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<Bedrock::Result<NetherNet::HttpResponse, std::error_code>> onRequest(::NetherNet::HttpRequest) = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Bedrock::Result<::NetherNet::HttpResponse>>
    onRequest(::NetherNet::HttpRequest request) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onConnectionClosed(::NetherNet::HttpConnection*);
#else // @header-generator platform
    MCNAPI void _onConnectionClosed(::NetherNet::HttpConnection* conn);
#endif // @header-generator platform

    MCNAPI void _onListenReadEvent(::webrtc::Socket*);
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet
