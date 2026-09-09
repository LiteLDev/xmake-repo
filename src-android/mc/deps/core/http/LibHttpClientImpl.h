#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/DispatcherProcess.h"
#include "mc/deps/core/http/Request.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
struct HC_CALL;
struct XTaskQueueObject;
namespace Bedrock::Http { class LibHttpClientInstance; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http::Internal { class IRequestBody; }
namespace Bedrock::Http::Internal { class IResponseBody; }
// clang-format on

namespace Bedrock::Http {

class LibHttpClientImpl : public ::Bedrock::Http::DispatcherProcess {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::Http::LibHttpClientInstance>> mHttpLibrary;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, Bedrock::Http::Request>>     mRequestCache;
    ::ll::TypedStorage<4, 40, std::mutex>                                            mRequestCacheMutex;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                          mTaskGroup;
    ::ll::TypedStorage<8, 8, ::XTaskQueueObject*>                                    mHttpTaskQueue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibHttpClientImpl();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(::Bedrock::Http::Request&&);

    virtual void initialize();

    virtual void shutdown();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LibHttpClientImpl();

    MCNAPI std::shared_ptr<Bedrock::Http::Internal::IResponseBody> _tryGetResponseBody(::gsl::not_null<HC_CALL*>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int _convertResponseBody(::gsl::not_null<HC_CALL*>, ::Bedrock::Http::Response&);

    MCNAPI static int _requestBodyRead(::HC_CALL*, ulong, ulong, void*, uchar*, ulong*);

    MCNAPI static int _responseBodyWrite(::HC_CALL*, uchar const*, ulong, void*);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::weak_ptr<Bedrock::Http::LibHttpClientImpl>& sWeakThis();

    MCNAPI static std::mutex& sWeakThisMutex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::Response> $send(::Bedrock::Http::Request&&);

    MCNAPI void $initialize();

    MCNAPI void $shutdown();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
