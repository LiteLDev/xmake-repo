#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/external/lib_http_client/HCTraceLevel.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct HC_CALL;
struct HC_PERFORM_ENV;
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
namespace Bedrock::Http { class HttpInterface; }
namespace Bedrock::Http { class LoggingInterface; }
namespace Bedrock::Http { class WebSocketInterface; }
#else // @header-generator platform
namespace Bedrock::Threading { class Mutex; }
#endif // @header-generator platform
// clang-format on

namespace Bedrock::Http {

class LibHttpClientInstance {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // LibHttpClientInstance inner types define
    using Mutex = std::mutex;

    using UniqueLock = ::Bedrock::Threading::UniqueLock<std::mutex>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::Http::HttpInterface>>      mHttp;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::Http::WebSocketInterface>> mWebSocket;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::Http::LoggingInterface>>   mLogging;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkaefb5e;
    ::ll::UntypedStorage<8, 8> mUnk42bd1b;
    ::ll::UntypedStorage<8, 8> mUnkf15df7;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LibHttpClientInstance& operator=(LibHttpClientInstance const&);
    LibHttpClientInstance(LibHttpClientInstance const&);
    LibHttpClientInstance();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LibHttpClientInstance();
#else // @header-generator platform
    virtual ~LibHttpClientInstance() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI static ::Bedrock::Threading::Mutex& sMutex();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Http
