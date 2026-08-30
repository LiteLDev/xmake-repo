#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/HCTraceLevel.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
struct HC_CALL;
struct HC_PERFORM_ENV;
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
namespace Bedrock::Http { class HttpInterface; }
namespace Bedrock::Http { class LoggingInterface; }
namespace Bedrock::Http { class WebSocketInterface; }
// clang-format on

namespace Bedrock::Http {

class LibHttpClientInstance {
public:
    // LibHttpClientInstance inner types define
    using Mutex = std::mutex;

    using UniqueLock = ::Bedrock::Threading::UniqueLock<std::mutex>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::Http::HttpInterface>>      mHttp;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::Http::WebSocketInterface>> mWebSocket;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::Http::LoggingInterface>>   mLogging;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibHttpClientInstance();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::mutex& sMutex();

    MCNAPI static std::weak_ptr<Bedrock::Http::LibHttpClientInstance>& sWeakInstance();
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

} // namespace Bedrock::Http
