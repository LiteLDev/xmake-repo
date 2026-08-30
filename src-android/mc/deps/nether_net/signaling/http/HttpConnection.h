#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/signal_with_thread_policy.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class HttpServer; }
namespace NetherNet { struct HttpRequest; }
namespace NetherNet { struct HttpResponse; }
namespace sigslot { class single_threaded; }
namespace webrtc { class Socket; }
namespace webrtc { template<typename T0> class scoped_refptr; }
// clang-format on

namespace NetherNet {

class HttpConnection : public ::NetherNet::ContextProxy,
                       public ::std::enable_shared_from_this<NetherNet::HttpConnection>,
                       public ::sigslot::has_slots<sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56>                               SignalClosed;
    ::ll::TypedStorage<8, 8, ::NetherNet::HttpServer&>        mServer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<webrtc::Socket>> mSocket;
    ::ll::TypedStorage<8, 24, std::string>                    mBuffer;
    ::ll::UntypedStorage<8, 8>                                mSafetyFlag;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpConnection& operator=(HttpConnection const&);
    HttpConnection(HttpConnection const&);
    HttpConnection();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HttpConnection();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _onCloseEvent(::webrtc::Socket*, int);

    MCNAPI void _onReadEvent(::webrtc::Socket*);
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
