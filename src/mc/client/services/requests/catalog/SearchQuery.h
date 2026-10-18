#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/requests/catalog/InventoryFilter.h"
#include "mc/client/services/requests/catalog/PositiveRange.h"
#include "mc/client/services/requests/catalog/SortBy.h"
#include "mc/client/services/requests/catalog/SortDirection.h"
#include "mc/client/services/requests/catalog/SortParams.h"

// auto generated forward declare list
// clang-format off
struct GlobalTags;
struct QueryDocument;
struct tm;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class SearchQuery {
public:
    // SearchQuery inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class TagType : uchar {
        And  = 0,
        Or   = 1,
        Not  = 2,
        Sale = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>>            mContentTypes;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>            mSelectedFields;
    ::ll::TypedStorage<8, 24, std::string>                         mSearchString;
    ::ll::TypedStorage<8, 24, std::string>                         mStartDateFrom;
    ::ll::TypedStorage<8, 24, std::string>                         mStartDateTo;
    ::ll::TypedStorage<8, 24, std::string>                         mPlatform;
    ::ll::TypedStorage<8, 24, std::string>                         mTitleTag;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>            mAndTags;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>            mOrTags;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>            mNotTags;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>            mSaleTags;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>            mProductIdOrder;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>            mAlternateIds;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>            mCreatorIds;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>            mNotCreatorIds;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>            mPackIds;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>            mAdditionalPackIds;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>            mPieceTypeFilters;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>            mNotPieceTypeFilters;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>            mRarityFilters;
    ::ll::TypedStorage<8, 24, std::vector<catalog::PositiveRange>> mPriceRangeFilters;
    ::ll::TypedStorage<4, 8, ::catalog::PositiveRange>             mRatingFilter;
    ::ll::TypedStorage<4, 8, ::catalog::SortParams>                mSortParams;
    ::ll::TypedStorage<4, 4, int>                                  mSkip;
    ::ll::TypedStorage<4, 4, int>                                  mTop;
    ::ll::TypedStorage<1, 1, ::catalog::InventoryFilter>           mClientSideInventoryFilter;
    ::ll::TypedStorage<8, 24, std::string>                         mClientSortType;
    ::ll::TypedStorage<1, 1, bool>                                 mFilterPastRealmsPlus;
    ::ll::TypedStorage<1, 1, bool>                                 mFilterCurrentRealmsPlus;
    ::ll::TypedStorage<1, 1, bool>                                 mClientSideInventorySearchEnabled;
    ::ll::TypedStorage<1, 1, bool>                                 mIncludeBundles;
    ::ll::TypedStorage<1, 1, bool>                                 mDisablePlatformFilter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SearchQuery(::QueryDocument const&);

    MCNAPI SearchQuery(::SearchQuery const&);

    MCNAPI SearchQuery(std::string const&, ::catalog::SortBy, ::catalog::SortDirection);

    MCNAPI SearchQuery(std::vector<std::string> const&, ::catalog::SortBy, ::catalog::SortDirection);

    MCNAPI void _addGlobalTags(::GlobalTags const&);

    MCNAPI void _appendClientVersionFilter(std::string&) const;

    MCNAPI void _appendTagFilters(std::string&, ::SearchQuery::TagType const, std::vector<std::string> const&) const;

    MCNAPI std::string _buildPostBody(std::string const&) const;

    MCNAPI std::string _generateTagsString() const;

    MCNAPI void addAdditionalPackIds(std::vector<std::string> const&);

    MCNAPI void addAlternateId(std::string const&);

    MCNAPI void addCreatorId(std::string const&);

    MCNAPI void addPriceRangeFilter(::catalog::PositiveRange const&);

    MCNAPI void addSelectField(std::string const&);

    MCNAPI void addTag(std::string const&, ::SearchQuery::TagType const);

    MCNAPI void addTags(std::vector<std::string> const&, ::SearchQuery::TagType const);

    MCNAPI void clearAllTags();

    MCNAPI void clearTags(::SearchQuery::TagType const);

    MCNAPI void disablePlatformFilter(bool);

    MCNAPI void enableClientSideInventorySearch(bool);

    MCNAPI uint generateSearchAndFilterIdentifier() const;

    MCNAPI ::catalog::InventoryFilter getClientSideInventoryFilter() const;

    MCNAPI std::string const& getClientSideSortType() const;

    MCNAPI ulong getContentTypeCount() const;

    MCNAPI std::vector<std::string> const& getCreatorIds() const;

    MCNAPI std::vector<std::string> const& getOrTags() const;

    MCNAPI std::vector<std::string> const& getPieceTypeFilters() const;

    MCNAPI std::vector<catalog::PositiveRange> const& getPriceRangeFilters() const;

    MCNAPI std::vector<std::string> const& getProductIdOrder() const;

    MCNAPI ::catalog::PositiveRange const& getRatingFilter() const;

    MCNAPI std::string const& getSearchString() const;

    MCNAPI int getSkip() const;

    MCNAPI ::catalog::SortBy getSortBy() const;

    MCNAPI std::string getSortByAndSortDirectionStr() const;

    MCNAPI ::catalog::SortDirection getSortDirection() const;

    MCNAPI ::catalog::SortParams const& getSortParams() const;

    MCNAPI int getTop() const;

    MCNAPI void incrementSkipByTop();

    MCNAPI bool isClientSideInventorySearchEnabled() const;

    MCNAPI bool isNotPerformingFullCatalogSearch() const;

    MCNAPI ::SearchQuery& operator=(::SearchQuery const&);

    MCNAPI void resetSkip();

    MCNAPI void setClientSideInventoryFilter(::catalog::InventoryFilter);

    MCNAPI void setFilterCurrentRealmsPlus(bool const);

    MCNAPI void setFilterPastRealmsPlus(bool const);

    MCNAPI void setPackIds(std::vector<std::string> const&);

    MCNAPI void setPlatform(std::string const&);

    MCNAPI void setProductIdOrder(std::vector<std::string> const&);

    MCNAPI void setRatingFilter(::catalog::PositiveRange const&);

    MCNAPI void setSearchString(std::string const&);

    MCNAPI void setSelectFields(std::vector<std::string> const&);

    MCNAPI void setSkip(int);

    MCNAPI void setSortBy(::catalog::SortBy);

    MCNAPI void setSortDirection(::catalog::SortDirection);

    MCNAPI void setTop(int);

    MCNAPI ~SearchQuery();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_SEARCH_RESULTS_PER_REQUEST();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::QueryDocument const&);

    MCNAPI void* $ctor(::SearchQuery const&);

    MCNAPI void* $ctor(std::string const&, ::catalog::SortBy, ::catalog::SortDirection);

    MCNAPI void* $ctor(std::vector<std::string> const&, ::catalog::SortBy, ::catalog::SortDirection);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    enum class TagType : schar {};
#endif // @header-generator platform
};
