#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/DocumentMeta.h"
#include "mc/client/services/catalog/PackIdentityUUIDEquality.h"
#include "mc/client/services/catalog/PackIdentityUUIDHash.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/threading/SharedLockbox.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class GenericEntitlementChangeListener;
class SearchQuery;
struct DurableDocument;
struct DurableSearchResults;
// clang-format on

class OwnedDurablesPagingCache {
public:
    // OwnedDurablesPagingCache inner types declare
    // clang-format off
    class AggregateResults;
    // clang-format on

    // OwnedDurablesPagingCache inner types define
    class AggregateResults {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                                              mRemainingBatches;
        ::ll::TypedStorage<8, 8, std::unique_ptr<std::unordered_set<std::string>>> mProductIdSet;
        ::ll::UntypedStorage<8, 48>                                                mCallback;
        // NOLINTEND

    public:
        // prevent constructor by default
        AggregateResults();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void aggregateResponse(std::vector<DurableDocument> const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mEntitlementChangeListener;
    ::ll::UntypedStorage<8, 48>  mSearchHandler;
    ::ll::UntypedStorage<8, 48>  mCachedQueryResultsMap;
    ::ll::UntypedStorage<8, 48>  mRetrieveOwnedPackIds;
    ::ll::UntypedStorage<8, 48>  mRetrieveInstalledPackIds;
    ::ll::UntypedStorage<8, 192> mProdIdDocsCache;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnedDurablesPagingCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit OwnedDurablesPagingCache(
        std::function<void(const SearchQuery&, std::function<void(const DurableSearchResults&)>)>
    );

    MCNAPI void clearCachedResults();

    MCNAPI std::weak_ptr<EntitlementChangeListener> getEntitlementChangeListener() const;

    MCNAPI void search(::SearchQuery const&, std::function<void(const DurableSearchResults&)>);

    MCNAPI void setInstalledPacksCallback(
        std::function<std::unordered_set<
            PackIdVersion,
            PackIdentityUUIDHash,
            PackIdentityUUIDEquality,
            std::allocator<PackIdVersion>>()>
    );

    MCNAPI void setRetrieveOwnedPackIdsCallback(std::function<std::vector<mce::UUID>()>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<void(const SearchQuery&, std::function<void(const DurableSearchResults&)>)>);
    // NOLINTEND
};
