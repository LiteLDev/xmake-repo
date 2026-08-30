#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/RequestPriority.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class FetchImageParams;
class IEntitlementManager;
class SearchQuery;
struct DurableSearchResults;
struct FetchImageDataResult;
// clang-format on

class IContentCatalogPackSourceService {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IContentCatalogPackSourceService() = default;

    virtual ::Bedrock::Threading::Async<FetchImageDataResult> fetchImageData(::FetchImageParams const&, ::Bedrock::Http::RequestPriority) = 0;

    virtual ::Bedrock::Threading::Async<DurableSearchResults> searchCatalog(::SearchQuery const&) = 0;

    virtual bool isRealmsPlusExpired(::IEntitlementManager&) = 0;
    // clang-format on
    // NOLINTEND
};
