#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/BackendProviderType.h"
#include "mc/client/services/catalog/FetchResult.h"
#include "mc/client/services/requests/CachedHttpRequest.h"
#include "mc/client/services/requests/catalog/SearchQuery.h"
#include "mc/client/services/requests/catalog/SearchRequestURLType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CatalogBackend;
class ContentCatalogService;
class IMinecraftEventing;
class SearchRequestTelemetry;
struct CatalogSearchResponseCallbackHandler;
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class Response; }
namespace Json { class Value; }
// clang-format on

class SearchCatalogRequest : public ::CachedHttpRequest {
public:
    // SearchCatalogRequest inner types declare
    // clang-format off
    struct CacheMetadata;
    // clang-format on

    // SearchCatalogRequest inner types define
    struct CacheMetadata {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mCacheWriteDate;
        ::ll::TypedStorage<8, 24, std::string> mAcceptLanguage;
        ::ll::TypedStorage<8, 24, std::string> mRequestedBy;
        ::ll::TypedStorage<8, 24, std::string> mClientVersion;
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
    ::ll::TypedStorage<8, 16, std::shared_ptr<CatalogBackend>>                      mBackend;
    ::ll::TypedStorage<8, 24, std::string>                                          mRequestedByUserXUID;
    ::ll::TypedStorage<8, 24, std::string const>                                    mAcceptLanguage;
    ::ll::TypedStorage<8, 24, std::string const>                                    mDateCreated;
    ::ll::TypedStorage<8, 568, ::SearchQuery>                                       mQuery;
    ::ll::TypedStorage<8, 24, std::string>                                          mPostBody;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CatalogSearchResponseCallbackHandler>> mSearchResponse;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SearchRequestTelemetry>>               mTelemetry;
    ::ll::TypedStorage<8, 96, ::SearchCatalogRequest::CacheMetadata>                mCacheMetadata;
    ::ll::TypedStorage<4, 4, uint>                                                  mCacheDurationSec;
    ::ll::TypedStorage<4, 4, int>                                                   mCacheExpirationOffsetSec;
    ::ll::TypedStorage<4, 4, ::SearchRequestURLType>                                mSearchType;
    ::ll::TypedStorage<1, 1, bool>                                                  mOfflineSearch;
    ::ll::TypedStorage<1, 1, ::FetchResult>                                         mFetchResult;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                         mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    SearchCatalogRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SearchCatalogRequest();

    virtual ::Bedrock::Threading::Async<std::string> getAuthToken();

    virtual void onComplete();

    virtual void fireTelemetry(::Bedrock::NonOwnerPointer<IMinecraftEventing> const&);

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> _sendRequest(std::string);

    virtual void _recordTelemetry(::Bedrock::Http::Response const&) const;

    virtual void _responseHeaders(::Bedrock::Http::HeaderCollection const&);

    virtual bool _parseJsonResponse(::Json::Value const&);

    virtual void _parseJsonMetadata(::Json::Value const&);

    virtual ::Json::Value _createMetadata() const;

    virtual bool _tryUseCachedResponse();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SearchCatalogRequest(
        ::ContentCatalogService const&,
        ::SearchQuery const&,
        std::unique_ptr<CatalogSearchResponseCallbackHandler>,
        ::BackendProviderType,
        ::SearchRequestURLType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ContentCatalogService const&,
        ::SearchQuery const&,
        std::unique_ptr<CatalogSearchResponseCallbackHandler>,
        ::BackendProviderType,
        ::SearchRequestURLType
    );
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

    MCNAPI void $fireTelemetry(::Bedrock::NonOwnerPointer<IMinecraftEventing> const&);

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::Response> $_sendRequest(std::string);

    MCNAPI void $_recordTelemetry(::Bedrock::Http::Response const&) const;

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
