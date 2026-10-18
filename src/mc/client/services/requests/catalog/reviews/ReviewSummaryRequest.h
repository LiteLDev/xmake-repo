#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/requests/CachedHttpRequest.h"
#include "mc/client/services/requests/catalog/reviews/ReviewSummaryParams.h"
#include "mc/client/services/requests/catalog/reviews/ReviewSummaryResponse.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
class CatalogBackend;
class ContentCatalogService;
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class Response; }
namespace Json { class Value; }
// clang-format on

class ReviewSummaryRequest : public ::CachedHttpRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<CatalogBackend>> mBackend;
    ::ll::TypedStorage<8, 24, std::string const>               mAcceptLanguage;
    ::ll::UntypedStorage<8, 32>                                mParams;
    ::ll::UntypedStorage<8, 48>                                mCallback;
    ::ll::TypedStorage<8, 8, ::ReviewSummaryResponse>          mReviewSummaryResponse;
    ::ll::UntypedStorage<8, 248>                               mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    ReviewSummaryRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReviewSummaryRequest();

    virtual ::Bedrock::Threading::Async<std::string> getAuthToken();

    virtual void onComplete();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> _sendRequest(std::string);

    virtual void _responseHeaders(::Bedrock::Http::HeaderCollection const&);

    virtual bool _parseJsonResponse(::Json::Value const&);

    virtual void _parseJsonMetadata(::Json::Value const&);

    virtual ::Json::Value _createMetadata() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ReviewSummaryRequest(
        ::ContentCatalogService const&,
        ::ReviewSummaryParams const&,
        std::function<void(ReviewSummaryResponse&)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::ContentCatalogService const&, ::ReviewSummaryParams const&, std::function<void(ReviewSummaryResponse&)>);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ReviewSummaryRequest {};
#endif // @header-generator platform
