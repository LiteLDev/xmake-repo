#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/external/sigslot/has_slots.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/external/sigslot/signal_with_thread_policy.h"
#include "mc/platform/Result.h"
#else // @header-generator platform
#include "mc/external/sigslot/single_threaded.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace NetherNet { class HttpServer; }
namespace NetherNet { struct HttpRequest; }
namespace NetherNet { struct HttpResponse; }
namespace sigslot { class single_threaded; }
#else // @header-generator platform
#endif // @header-generator platform
namespace webrtc { class Socket; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace webrtc { template<typename T0> class scoped_refptr; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace NetherNet {

class HttpConnection : public ::NetherNet::ContextProxy,
#if defined(LL_PLAT_A) // @header-generator platform
                       public ::std::enable_shared_from_this<NetherNet::HttpConnection>,
                       public ::sigslot::has_slots<sigslot::single_threaded> {
#else // @header-generator platform
                       public ::sigslot::has_slots<::sigslot::single_threaded>,
                       public ::std::enable_shared_from_this<::NetherNet::HttpConnection> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 56>                               SignalClosed;
    ::ll::TypedStorage<8, 8, ::NetherNet::HttpServer&>        mServer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<webrtc::Socket>> mSocket;
    ::ll::TypedStorage<8, 24, std::string>                    mBuffer;
    ::ll::UntypedStorage<8, 8>                                mSafetyFlag;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 48> mUnk9aa3ce;
    ::ll::UntypedStorage<8, 8>  mUnk655767;
    ::ll::UntypedStorage<8, 8>  mUnk1ddd04;
    ::ll::UntypedStorage<8, 32> mUnke09860;
    ::ll::UntypedStorage<8, 8>  mUnk880be3;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    HttpConnection& operator=(HttpConnection const&);
    HttpConnection(HttpConnection const&);
    HttpConnection();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~HttpConnection();
#else // @header-generator platform
    virtual ~HttpConnection() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _onCloseEvent(::webrtc::Socket*, int);

    MCNAPI void _onReadEvent(::webrtc::Socket*);
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace NetherNet
