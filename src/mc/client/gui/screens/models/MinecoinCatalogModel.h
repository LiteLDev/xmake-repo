#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/OfferCatalogModelBase.h"
#include "mc/client/gui/screens/models/OfferCatalogStatus.h"
#include "mc/client/services/catalog/CommonImage.h"
#include "mc/client/services/catalog/ImageMetaListDocument.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/RetryDelay.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class DateManager;
class FlightingService;
class IOfferRepository;
struct MinecoinDocument;
struct MinecoinSearchResults;
namespace Bedrock::Http { class Status; }
namespace Core { class Path; }
namespace Social { class IUserManager; }
// clang-format on

class MinecoinCatalogModel : public ::OfferCatalogModelBase {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/OfferCatalogModelBase.h"
#include "mc/client/gui/screens/models/OfferCatalogStatus.h"
#include "mc/client/services/catalog/CommonImage.h"
#include "mc/client/services/catalog/ImageMetaListDocument.h"
#include "mc/util/RetryDelay.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
struct MinecoinSearchResults;
namespace Bedrock::Http { class Status; }
namespace Core { class Path; }
// clang-format on

class MinecoinCatalogModel : public ::OfferCatalogModelBase {
#else // @header-generator platform
class MinecoinCatalogModel {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // MinecoinCatalogModel inner types declare
    // clang-format off
    struct ActiveModelImageTracker;
    // clang-format on

    // MinecoinCatalogModel inner types define
    struct ActiveModelImageTracker {
    public:
        // ActiveModelImageTracker inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        enum class FetchState : uchar {
            Fetching          = 0,
            FailedAndCanRetry = 1,
            Failed            = 2,
            Success           = 3,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 20, ::RetryDelay>                                               mRetryDelay;
        ::ll::TypedStorage<8, 24, std::string>                                                mActiveModelProductId;
        ::ll::TypedStorage<8, 144, ::CommonImage>                                             mImage;
        ::ll::TypedStorage<8, 24, ::ImageMetaListDocument>                                    mImageListDoc;
        ::ll::TypedStorage<1, 1, ::MinecoinCatalogModel::ActiveModelImageTracker::FetchState> mFetchState;
        ::ll::TypedStorage<4, 4, uint>                                                        mRefetchCount;
        // NOLINTEND

    public:
        // prevent constructor by default
        ActiveModelImageTracker& operator=(ActiveModelImageTracker const&);
        ActiveModelImageTracker(ActiveModelImageTracker const&);
        ActiveModelImageTracker();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ActiveModelImageTracker();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        enum class FetchState : uchar {
            Fetching          = 0,
            FailedAndCanRetry = 1,
            Failed            = 2,
            Success           = 3,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 20, ::RetryDelay>                                               mRetryDelay;
        ::ll::TypedStorage<8, 32, ::std::string>                                              mActiveModelProductId;
        ::ll::TypedStorage<8, 192, ::CommonImage>                                             mImage;
        ::ll::TypedStorage<8, 24, ::ImageMetaListDocument>                                    mImageListDoc;
        ::ll::TypedStorage<1, 1, ::MinecoinCatalogModel::ActiveModelImageTracker::FetchState> mFetchState;
        ::ll::TypedStorage<4, 4, uint>                                                        mRefetchCount;
        // NOLINTEND
#else // @header-generator platform
        enum class FetchState : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContentCatalogService>>                      mContentCatalogService;
    ::ll::TypedStorage<8, 24, std::vector<MinecoinCatalogModel::ActiveModelImageTracker>> mActiveModelImageTrackerList;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>                                      mExistenceTracker;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecoinCatalogModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecoinCatalogModel();

    virtual ::OfferCatalogStatus update();

    virtual void fetchAllCoinOffers();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _fetchKeyArtForActiveOfferModel(::MinecoinCatalogModel::ActiveModelImageTracker&);

    MCNAPI ::MinecoinCatalogModel::ActiveModelImageTracker* _findActiveModelImageTrackerByProductId(std::string const&);

    MCNAPI void _handleOfferSearchResults(std::weak_ptr<bool>, ::MinecoinSearchResults const&);

    MCNAPI void _onFetchKeyArtForActiveOfferModelFinished(
        std::weak_ptr<bool>,
        std::string const&,
        ::Bedrock::Http::Status const,
        ::Core::Path const&
    );

    MCNAPI void _onTreatmentTagsReceived(std::weak_ptr<bool>, std::vector<std::string> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::OfferCatalogStatus $update();

    MCNAPI void $fetchAllCoinOffers();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContentCatalogService>> mContentCatalogService;
    ::ll::TypedStorage<8, 24, ::std::vector<::MinecoinCatalogModel::ActiveModelImageTracker>>
                                                       mActiveModelImageTrackerList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>> mExistenceTracker;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecoinCatalogModel() /*override*/ = default;

    virtual ::OfferCatalogStatus update() /*override*/;

    virtual void fetchAllCoinOffers() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _fetchKeyArtForActiveOfferModel(::MinecoinCatalogModel::ActiveModelImageTracker& modelFetchImageInfo);

    MCAPI ::MinecoinCatalogModel::ActiveModelImageTracker*
    _findActiveModelImageTrackerByProductId(::std::string const& activeModelProductId);

    MCAPI void _handleOfferSearchResults(::std::weak_ptr<bool> weakExistence, ::MinecoinSearchResults const& results);

    MCAPI void _onFetchKeyArtForActiveOfferModelFinished(
        ::std::weak_ptr<bool>         weakExistence,
        ::std::string const&          activeModelProductId,
        ::Bedrock::Http::Status const status,
        ::Core::Path const&           fullpath
    );

    MCAPI void
    _onTreatmentTagsReceived(::std::weak_ptr<bool> weakExistence, ::std::vector<::std::string> const& treatments);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::OfferCatalogStatus $update();

    MCAPI void $fetchAllCoinOffers();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};
