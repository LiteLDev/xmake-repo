#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/DispatcherProcess.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/http/Request.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/threading/Async.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/platform/threading/UniqueLock.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct HC_CALL;
struct XTaskQueueObject;
namespace Bedrock::Http { class LibHttpClientInstance; }
#else // @header-generator platform
namespace Bedrock::Http { class Request; }
#endif // @header-generator platform
namespace Bedrock::Http { class Response; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::Http::Internal { class IRequestBody; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::Http::Internal { class IResponseBody; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::Threading { class Mutex; }
struct HC_CALL;
#endif // @header-generator platform
// clang-format on

namespace Bedrock::Http {

class LibHttpClientImpl : public ::Bedrock::Http::DispatcherProcess {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::Http::LibHttpClientInstance>> mHttpLibrary;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, Bedrock::Http::Request>>     mRequestCache;
    ::ll::TypedStorage<4, 40, std::mutex>                                            mRequestCacheMutex;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                          mTaskGroup;
    ::ll::TypedStorage<8, 8, ::XTaskQueueObject*>                                    mHttpTaskQueue;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16>  mUnkcb3229;
    ::ll::UntypedStorage<8, 64>  mUnk419653;
    ::ll::UntypedStorage<8, 80>  mUnk2cebe7;
    ::ll::UntypedStorage<8, 336> mUnk2fe4b9;
    ::ll::UntypedStorage<8, 8>   mUnkf64a92;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LibHttpClientImpl& operator=(LibHttpClientImpl const&);
    LibHttpClientImpl(LibHttpClientImpl const&);
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LibHttpClientImpl();
#else // @header-generator platform
    virtual ~LibHttpClientImpl() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(::Bedrock::Http::Request&&);
#else // @header-generator platform
    virtual void initialize() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initialize();
#else // @header-generator platform
    virtual void shutdown() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void shutdown();
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Bedrock::Http::Response>
    send(::Bedrock::Http::Request&& request) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LibHttpClientImpl();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<Bedrock::Http::Internal::IResponseBody> _tryGetResponseBody(::gsl::not_null<HC_CALL*>);
#else // @header-generator platform
    MCNAPI ::std::shared_ptr<::Bedrock::Http::Internal::IResponseBody>
    _tryGetResponseBody(::gsl::not_null<::HC_CALL*> call);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int _convertResponseBody(::gsl::not_null<HC_CALL*>, ::Bedrock::Http::Response&);
#else // @header-generator platform
    MCNAPI static HRESULT
    _requestBodyRead(::HC_CALL* call, uint64, uint64 bytesAvailable, void*, uchar* destination, uint64* bytesWritten);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int _requestBodyRead(::HC_CALL*, ulong, ulong, void*, uchar*, ulong*);

    MCNAPI static int _responseBodyWrite(::HC_CALL*, uchar const*, ulong, void*);
#else // @header-generator platform
    MCNAPI static HRESULT _responseBodyWrite(::HC_CALL* call, uchar const* source, uint64 bytesAvailable, void*);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::weak_ptr<Bedrock::Http::LibHttpClientImpl>& sWeakThis();

    MCNAPI static std::mutex& sWeakThisMutex();
#else // @header-generator platform
    MCNAPI static ::Bedrock::Threading::Mutex& sWeakThisMutex();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::Response> $send(::Bedrock::Http::Request&&);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI void $initialize();

    MCNAPI void $shutdown();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<::Bedrock::Http::Response> $send(::Bedrock::Http::Request&& request);


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Http
