#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/CatalogProviderId.h"
#include "mc/client/services/requests/catalog/SearchRequestURLType.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class CreateReviewParams;
class ServiceClient;
struct RatingData;
struct ReviewSummaryData;
namespace Bedrock::Http { class Method; }
namespace Bedrock::Http { class RequestBuilder; }
namespace Json { class Value; }
// clang-format on

class CatalogBackend {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CatalogProviderId> mProviderId;
    // NOLINTEND

public:
    // prevent constructor by default
    CatalogBackend();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CatalogBackend();

    virtual std::string const& getCachedFilePrefix() const = 0;

    virtual std::string getHostUrl() const = 0;

    virtual std::string getSearchUrl(::SearchRequestURLType) const = 0;

    virtual std::string getHydrateUrl(std::string const&) const = 0;

    virtual std::string getReviewSummaryUrl(std::string const&) const = 0;

    virtual std::string getMyReviewUrl(std::string const&, std::string const&) const = 0;

    virtual std::string getCreateReviewUrl(std::string const&) const = 0;

    virtual ::Bedrock::Http::Method getItemIdHttpRequestMethod() const = 0;

    virtual ::Bedrock::Threading::Async<Bedrock::Http::RequestBuilder> addAuthTokenHeader(::Bedrock::Http::RequestBuilder&&, ::ServiceClient const&) = 0;

    virtual void addETagHeader(::Bedrock::Http::RequestBuilder&, std::string const&) const = 0;

    virtual void setItemIdPostBody(::Bedrock::Http::RequestBuilder&, std::string const&, std::string const&) const = 0;

    virtual void setCreateReviewBody(::Bedrock::Http::RequestBuilder&, ::CreateReviewParams const&) const = 0;

    virtual bool usePascalCase() const = 0;

    virtual std::string parseCreatorId(::Json::Value const&) const = 0;

    virtual void parseETag(::Json::Value const&, std::string&) const = 0;

    virtual std::string parseFriendlyId(::Json::Value const&) const = 0;

    virtual std::string parseOneStoreId(::Json::Value const&) const = 0;

    virtual ::Json::Value const& prepareSearchResponse(::Json::Value const&, int&, ::SearchRequestURLType) const = 0;

    virtual ::Json::Value const& prepareItemDataResponse(::Json::Value const&) const = 0;

    virtual std::unique_ptr<ReviewSummaryData> reviewSummaryDataFromJson(::Json::Value const&) const = 0;

    virtual ::RatingData parseRatingData(::Json::Value const&) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CatalogBackend(::CatalogProviderId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CatalogProviderId);
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
