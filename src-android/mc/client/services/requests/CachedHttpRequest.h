#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/HttpRequestHandler.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/http/Status.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class RequestTelemetry;
class ServiceClient;
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class Response; }
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class CachedHttpRequest : public ::HttpRequestHandler {
public:
    // CachedHttpRequest inner types declare
    // clang-format off
    struct LoadedCache;
    // clang-format on

    // CachedHttpRequest inner types define
    struct LoadedCache {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> jsonRoot;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                               mCacheLocation;
    ::ll::TypedStorage<8, 24, std::string>                                    mCachedFilename;
    ::ll::TypedStorage<4, 40, std::mutex>                                     mResponseReadLock;
    ::ll::TypedStorage<4, 40, std::mutex>                                     mCacheLoadLock;
    ::ll::TypedStorage<8, 24, std::string const>                              mRelyingParty;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CachedHttpRequest::LoadedCache>> mLoadedCachedData;
    ::ll::TypedStorage<8, 24, ::Bedrock::Http::Status>                        mResponseStatus;
    ::ll::TypedStorage<1, 1, bool>                                            mDisableCachedResponseOnFailure;
    ::ll::TypedStorage<1, 1, bool>                                            mResponseReadComplete;
    ::ll::TypedStorage<1, 1, bool>                                            mCacheLoadComplete;
    // NOLINTEND

public:
    // prevent constructor by default
    CachedHttpRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CachedHttpRequest();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(std::string);

    virtual void processResponse(::Bedrock::Http::Response);

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> _sendRequest(std::string) = 0;

    virtual void _recordTelemetry(::Bedrock::Http::Response const&) const;

    virtual void _responseHeaders(::Bedrock::Http::HeaderCollection const&) = 0;

    virtual bool _parseJsonResponse(::Json::Value const&) = 0;

    virtual void _parseJsonMetadata(::Json::Value const&) = 0;

    virtual ::Json::Value _createMetadata() const = 0;

    virtual bool _tryUseCachedResponse();

    virtual void _writeToCache(::Json::Value const&, ::Json::Value const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CachedHttpRequest(::ServiceClient const&, ::Core::Path const&, std::string const&, int);

    MCNAPI ::Json::Value const& _loadFromCache();

    MCNAPI bool _populateFromResponse(::Json::Value const&);

    MCNAPI bool _useCachedResponse();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServiceClient const&, ::Core::Path const&, std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::Response> $send(std::string);

    MCNAPI void $processResponse(::Bedrock::Http::Response);

    MCNAPI void $_recordTelemetry(::Bedrock::Http::Response const&) const;

    MCNAPI bool $_tryUseCachedResponse();

    MCNAPI void $_writeToCache(::Json::Value const&, ::Json::Value const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
