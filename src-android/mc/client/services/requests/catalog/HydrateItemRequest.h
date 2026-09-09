#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/CachedHttpRequest.h"
#include "mc/client/services/requests/catalog/HydrateParams.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
class CatalogBackend;
class ContentCatalogService;
struct HydrateResponseCallbackHandler;
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class Response; }
namespace Json { class Value; }
// clang-format on

class HydrateItemRequest : public ::CachedHttpRequest {
public:
    // HydrateItemRequest inner types declare
    // clang-format off
    struct CacheMetadata;
    // clang-format on

    // HydrateItemRequest inner types define
    struct CacheMetadata {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mLastModifiedDate;
        ::ll::TypedStorage<8, 24, std::string> mCacheWriteDate;
        ::ll::TypedStorage<8, 24, std::string> mEntityTag;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CacheMetadata();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<CatalogBackend>>                mBackend;
    ::ll::TypedStorage<8, 24, std::string const>                              mAcceptLanguage;
    ::ll::TypedStorage<8, 56, ::HydrateParams>                                mParams;
    ::ll::TypedStorage<8, 8, std::unique_ptr<HydrateResponseCallbackHandler>> mHydrateResponse;
    ::ll::TypedStorage<8, 72, ::HydrateItemRequest::CacheMetadata>            mCacheMetadata;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                   mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    HydrateItemRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HydrateItemRequest();

    virtual ::Bedrock::Threading::Async<std::string> getAuthToken();

    virtual void onComplete();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> _sendRequest(std::string);

    virtual void _responseHeaders(::Bedrock::Http::HeaderCollection const&);

    virtual bool _parseJsonResponse(::Json::Value const&);

    virtual void _parseJsonMetadata(::Json::Value const&);

    virtual ::Json::Value _createMetadata() const;

    virtual bool _tryUseCachedResponse();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HydrateItemRequest(
        ::ContentCatalogService const&,
        ::HydrateParams const&,
        std::unique_ptr<HydrateResponseCallbackHandler>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::ContentCatalogService const&, ::HydrateParams const&, std::unique_ptr<HydrateResponseCallbackHandler>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<std::string> $getAuthToken();

    MCNAPI void $onComplete();

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::Response> $_sendRequest(std::string);

    MCNAPI void $_responseHeaders(::Bedrock::Http::HeaderCollection const&);

    MCNAPI bool $_parseJsonResponse(::Json::Value const&);

    MCNAPI void $_parseJsonMetadata(::Json::Value const&);

    MCNAPI ::Json::Value $_createMetadata() const;

    MCNAPI bool $_tryUseCachedResponse();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
