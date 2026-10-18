#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/CatalogBackend.h"
#include "mc/client/services/requests/catalog/SearchRequestURLType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"

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

class PersonaBackendProvider : public ::CatalogBackend {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PersonaBackendProvider();

    virtual std::string const& getCachedFilePrefix() const;

    virtual std::string getHostUrl() const;

    virtual std::string getSearchUrl(::SearchRequestURLType) const;

    virtual std::string getHydrateUrl(std::string const&) const;

    virtual std::string getReviewSummaryUrl(std::string const&) const;

    virtual std::string getMyReviewUrl(std::string const&, std::string const&) const;

    virtual std::string getCreateReviewUrl(std::string const&) const;

    virtual ::Bedrock::Http::Method getItemIdHttpRequestMethod() const;

    virtual ::Bedrock::Threading::Async<Bedrock::Http::RequestBuilder> addAuthTokenHeader(::Bedrock::Http::RequestBuilder&&, ::ServiceClient const&);

    virtual void addETagHeader(::Bedrock::Http::RequestBuilder&, std::string const&) const;

    virtual void setItemIdPostBody(::Bedrock::Http::RequestBuilder&, std::string const&, std::string const&) const;

    virtual void setCreateReviewBody(::Bedrock::Http::RequestBuilder&, ::CreateReviewParams const&) const;

    virtual bool usePascalCase() const;

    virtual std::string parseCreatorId(::Json::Value const&) const;

    virtual void parseETag(::Json::Value const&, std::string&) const;

    virtual std::string parseFriendlyId(::Json::Value const&) const;

    virtual std::string parseOneStoreId(::Json::Value const&) const;

    virtual ::Json::Value const& prepareSearchResponse(::Json::Value const&, int&, ::SearchRequestURLType) const;

    virtual ::Json::Value const& prepareItemDataResponse(::Json::Value const&) const;

    virtual std::unique_ptr<ReviewSummaryData> reviewSummaryDataFromJson(::Json::Value const&) const;

    virtual ::RatingData parseRatingData(::Json::Value const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaBackendProvider();
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
    MCNAPI std::string const& $getCachedFilePrefix() const;

    MCNAPI std::string $getHostUrl() const;

    MCNAPI std::string $getSearchUrl(::SearchRequestURLType) const;

    MCNAPI std::string $getHydrateUrl(std::string const&) const;

    MCNAPI std::string $getReviewSummaryUrl(std::string const&) const;

    MCNAPI std::string $getMyReviewUrl(std::string const&, std::string const&) const;

    MCNAPI std::string $getCreateReviewUrl(std::string const&) const;

    MCNAPI ::Bedrock::Http::Method $getItemIdHttpRequestMethod() const;

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::RequestBuilder>
    $addAuthTokenHeader(::Bedrock::Http::RequestBuilder&&, ::ServiceClient const&);

    MCNAPI void $addETagHeader(::Bedrock::Http::RequestBuilder&, std::string const&) const;

    MCNAPI void $setItemIdPostBody(::Bedrock::Http::RequestBuilder&, std::string const&, std::string const&) const;

    MCNAPI void $setCreateReviewBody(::Bedrock::Http::RequestBuilder&, ::CreateReviewParams const&) const;

    MCNAPI bool $usePascalCase() const;

    MCNAPI std::string $parseCreatorId(::Json::Value const&) const;

    MCNAPI void $parseETag(::Json::Value const&, std::string&) const;

    MCNAPI std::string $parseFriendlyId(::Json::Value const&) const;

    MCNAPI std::string $parseOneStoreId(::Json::Value const&) const;

    MCNAPI ::Json::Value const& $prepareSearchResponse(::Json::Value const&, int&, ::SearchRequestURLType) const;

    MCNAPI ::Json::Value const& $prepareItemDataResponse(::Json::Value const&) const;

    MCNAPI std::unique_ptr<ReviewSummaryData> $reviewSummaryDataFromJson(::Json::Value const&) const;

    MCNAPI ::RatingData $parseRatingData(::Json::Value const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class PersonaBackendProvider {};
#endif // @header-generator platform
