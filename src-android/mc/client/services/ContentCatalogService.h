#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/BackendProviderType.h"
#include "mc/client/services/CatalogRequestType.h"
#include "mc/client/services/SearchCacheDuration.h"
#include "mc/client/services/ServiceClient.h"
#include "mc/client/services/catalog/FetchResult.h"
#include "mc/client/services/utility/CustomDocumentModifier.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/http/RequestPriority.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CatalogBackend;
class CreateReviewParams;
class DateManager;
class EduContentCallbackObject;
class FetchImageParams;
class FileDataRequest;
class HttpRequestHandler;
class HydrateParams;
class OwnedDurablesPagingCache;
class ReviewByUserParams;
class ReviewByUserResponse;
class ReviewSummaryParams;
class ReviewSummaryResponse;
class SearchQuery;
struct DurableDocument;
struct DurableSearchResults;
struct GiftPromotionSearchResults;
struct MinecoinDocument;
struct MinecoinSearchResults;
struct QueryManifestDocument;
struct QueryManifestSearchResults;
struct RealmsSearchResults;
struct ResourcePackTreatmentSearchResults;
struct StoreConfigSearchResults;
struct StoreOfferSearchResults;
struct ThirdPartyServerSearchResults;
struct WorldSeedSearchResults;
namespace Bedrock::Http { class Status; }
namespace Core { class Path; }
// clang-format on

class ContentCatalogService : public ::ServiceClient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<CatalogBackend>>          mCatalogBackendPlayFab;
    ::ll::TypedStorage<8, 16, std::shared_ptr<CatalogBackend>>          mCatalogBackendPersonaService;
    ::ll::TypedStorage<8, 16, std::shared_ptr<CatalogBackend>>          mCatalogBackendGatherings;
    ::ll::TypedStorage<8, 24, ::CustomDocumentModifier>                 mCustomModifier;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OwnedDurablesPagingCache>> mOwnedDurablesPagingInterface;
    ::ll::TypedStorage<8, 24, std::string>                              mAcceptLanguage;
    ::ll::UntypedStorage<8, 24>                                         mDefaultCacheLocation;
    ::ll::UntypedStorage<8, 40>                                         mCacheLocationPerType;
    ::ll::TypedStorage<8, 24, std::string>                              mPlatformOverride;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>                    mExistenceTracker;
    ::ll::TypedStorage<4, 4, uint>                                      mCacheDurationSeconds;
    ::ll::TypedStorage<4, 4, int>                                       mCacheExpirationOffsetSec;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentCatalogService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentCatalogService();

    virtual void _submitRequest(std::shared_ptr<HttpRequestHandler>);

    virtual void reviewSummary(::ReviewSummaryParams const&, std::function<void(ReviewSummaryResponse&)>);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContentCatalogService(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>> const,
        ::Core::Path const&,
        ::SearchCacheDuration const
    );

    MCNAPI void _handleDurableSearch(::SearchQuery const&, std::function<void(const DurableSearchResults&)>);

    MCNAPI void clearCache();

    MCNAPI void enableSynchronizedCacheExpiration();

    MCNAPI void fetchFileData(std::string const&, std::function<void(Bedrock::Http::Status, const Core::Path&, ulong)>);

    MCNAPI void fetchFileSize(std::string const&, std::function<void(Bedrock::Http::Status&, ulong)>);

    MCNAPI std::shared_ptr<FileDataRequest>
           fetchImageData(std::string const&, std::function<void(Bedrock::Http::Status, const Core::Path&, ulong)>);

    MCNAPI void fetchImageData(
        ::FetchImageParams const&,
        std::function<void(Bedrock::Http::Status, const Core::Path&, ulong)>,
        ::Bedrock::Http::RequestPriority
    );

    MCNAPI std::string const& getAcceptLanguage() const;

    MCNAPI std::shared_ptr<CatalogBackend> getBackendProvider(::BackendProviderType) const;

    MCNAPI uint getCacheDurationSec() const;

    MCNAPI int getCacheExpirationOffsetSec() const;

    MCNAPI ::Core::PathBuffer<std::string> const& getCacheLocation(::CatalogRequestType) const;

    MCNAPI ::OwnedDurablesPagingCache& getOwnedDurablesPagingInterface();

    MCNAPI std::string const& getPlatformOverride() const;

    MCNAPI char const* getTitleTag() const;

    MCNAPI void
    hydrateItem(::HydrateParams const&, std::function<void(const Bedrock::Http::Status&, const DurableDocument&)>);

    MCNAPI void hydrateItem(::HydrateParams const&, ::EduContentCallbackObject);

    MCNAPI void postReview(::CreateReviewParams const&, std::function<void(bool)>);

    MCNAPI void reviewByUser(::ReviewByUserParams const&, std::function<void(ReviewByUserResponse&)>);

    MCNAPI void searchCatalog(::SearchQuery const&, std::function<void(const DurableSearchResults&)>);

    MCNAPI void searchCatalog(::SearchQuery const&, std::function<void(const MinecoinSearchResults&)>);

    MCNAPI void searchCatalog(::SearchQuery const&, std::function<void(const QueryManifestSearchResults&)>);

    MCNAPI void
    searchCatalog(::SearchQuery const&, std::function<void(FetchResult, const ResourcePackTreatmentSearchResults&)>);

    MCNAPI void searchCatalog(::SearchQuery const&, std::function<void(const StoreOfferSearchResults&)>);

    MCNAPI void searchCatalog(::SearchQuery const&, std::function<void(const ThirdPartyServerSearchResults&)>);

    MCNAPI void searchCatalog(::SearchQuery const&, std::function<void(const WorldSeedSearchResults&)>);

    MCNAPI void searchCatalog(::SearchQuery const&, ::EduContentCallbackObject);

    MCNAPI void
    searchCatalog(::SearchQuery const&, std::string const&, std::function<void(const std::vector<std::string>&)>);

    MCNAPI void setAcceptLanguage(std::string const&);

    MCNAPI void setCacheLocationForTypes(std::vector<CatalogRequestType> const&, ::Core::Path const&);

    MCNAPI void setMessageSessionId(std::string const&);

    MCNAPI void setPlatformOverride(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>> const,
        ::Core::Path const&,
        ::SearchCacheDuration const
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
    MCNAPI void $_submitRequest(std::shared_ptr<HttpRequestHandler>);

    MCNAPI void $reviewSummary(::ReviewSummaryParams const&, std::function<void(ReviewSummaryResponse&)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
