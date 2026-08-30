#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
namespace NetherNet { class HttpConnection; }
namespace NetherNet { struct HttpRequest; }
namespace NetherNet { struct HttpResponse; }
namespace sigslot { class single_threaded; }
namespace webrtc { class Socket; }
namespace webrtc { class SocketFactory; }
// clang-format on

namespace NetherNet {

class HttpServer : public ::NetherNet::ContextProxy, public ::sigslot::has_slots<sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>                                                   mPort;
    ::ll::TypedStorage<8, 24, std::string>                                             mBindAddress;
    ::ll::TypedStorage<8, 8, std::unique_ptr<webrtc::Socket>>                          mListenSocket;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<NetherNet::HttpConnection>>> mConnections;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                            mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpServer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~HttpServer();

    virtual ::Bedrock::Threading::Async<Bedrock::Result<NetherNet::HttpResponse, std::error_code>> onRequest(::NetherNet::HttpRequest) = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _onConnectionClosed(::NetherNet::HttpConnection*);

    MCNAPI void _onListenReadEvent(::webrtc::Socket*);
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

} // namespace NetherNet
