#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/services/persona/PieceOfferWrapper.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/world/actor/player/persona/OwnershipFilterType.h"

// auto generated forward declare list
// clang-format off
class IStoreCatalogItem;
class PersonaRepository;
class SearchQuery;
class StoreCatalogItem;
class StoreCatalogRepository;
struct QueryDocument;
namespace mce { class UUID; }
namespace persona { struct CategoryQueryDocument; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace persona {

class IPieceCollector {
public:
    // IPieceCollector inner types declare
    // clang-format off
    struct QueryInfo;
    // clang-format on

    // IPieceCollector inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct QueryInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<SearchQuery>> mQuery;
        ::ll::TypedStorage<4, 4, uint>                          mPossiblePackCount;
        ::ll::TypedStorage<4, 4, uint>                          mNumPacksCollected;
        ::ll::TypedStorage<4, 4, uint>                          mFilteredOutContent;
        ::ll::TypedStorage<4, 4, uint>                          mCatalogTotal;
        ::ll::TypedStorage<1, 1, bool>                          mHasStartedFetcing;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueryInfo& operator=(QueryInfo const&);
        QueryInfo(QueryInfo const&);
        QueryInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~QueryInfo();
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
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>                            mExistenceTracker;
    ::ll::TypedStorage<8, 24, std::string>                                      mHeader;
    ::ll::TypedStorage<4, 4, ::persona::OwnershipFilterType>                    mOwnershipFilterType;
    ::ll::TypedStorage<8, 24, std::vector<persona::IPieceCollector::QueryInfo>> mQueryInfoList;
    ::ll::TypedStorage<8, 24, std::vector<persona::PieceOfferWrapper>>          mPieceOffers;
    ::ll::UntypedStorage<8, 24>                                                 mDiscoveredItems;
    ::ll::UntypedStorage<8, 24>                                                 mOfferMapping;
    ::ll::TypedStorage<4, 40, std::mutex>                                       mDiscoveredItemsMutex;
    ::ll::TypedStorage<4, 4, uint>                                              mActiveQueryIndex;
    ::ll::TypedStorage<4, 4, uint>                                              mVisibleRangeStart;
    ::ll::TypedStorage<4, 4, uint>                                              mVisibleRangeEnd;
    ::ll::TypedStorage<4, 4, uint>                                              mCycleAmount;
    ::ll::TypedStorage<4, 4, uint>                                              mCycleOffset;
    ::ll::TypedStorage<1, 1, bool>                                              mDirty;
    ::ll::TypedStorage<1, 1, bool>                                              mIsExhaustiveCollector;
    ::ll::TypedStorage<1, 1, bool>                                              mSearchActive;
    ::ll::TypedStorage<1, 1, bool>                                              mShowDefaultOffers;
    // NOLINTEND

public:
    // prevent constructor by default
    IPieceCollector& operator=(IPieceCollector const&);
    IPieceCollector(IPieceCollector const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPieceCollector();

    virtual bool isFeatured() const;

    virtual void _addCollectionEventPage();

    virtual void _addOfferIdToDiscoveredSet(::persona::PieceOfferWrapper const&);

    virtual bool _hasDiscoveredOffer(::mce::UUID const&) const;

    virtual bool _hasPriorityOffer() const;

    virtual ::mce::UUID const& _getPriorityOfferProductId() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit IPieceCollector(::persona::CategoryQueryDocument const&);

    MCNAPI ::persona::IPieceCollector::QueryInfo& _addQuery(::QueryDocument const&, bool);

    MCNAPI void _collect(::PersonaRepository&);

    MCNAPI std::shared_ptr<SearchQuery> _createNewQuery(::QueryDocument const&, bool) const;

    MCNAPI void _reset();

    MCNAPI void _search(::gsl::not_null<Bedrock::NonOwnerPointer<StoreCatalogRepository>> const&);

    MCNAPI ::persona::PieceOfferWrapper const& getPieceOfferByPieceId(::mce::UUID const&) const;

    MCNAPI void resetContent();

    MCNAPI void tick(
        ::ui::DirtyFlag&,
        ::PersonaRepository&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<StoreCatalogRepository>> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::persona::CategoryQueryDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isFeatured() const;

    MCNAPI void $_addCollectionEventPage();

    MCNAPI void $_addOfferIdToDiscoveredSet(::persona::PieceOfferWrapper const&);

    MCNAPI bool $_hasDiscoveredOffer(::mce::UUID const&) const;

    MCNAPI bool $_hasPriorityOffer() const;

    MCNAPI ::mce::UUID const& $_getPriorityOfferProductId() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct QueryInfo {};
#endif // @header-generator platform
};

} // namespace persona
