#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StoreCatalogItem;
// clang-format on

class ISuggestedContentOffersProvider {
public:
    // ISuggestedContentOffersProvider inner types define
    enum class CollectionType : int {
        StoreItems      = 0,
        RealmsPlusItems = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ISuggestedContentOffersProvider() = default;

    virtual ::StoreCatalogItem& getOfferItem(::ISuggestedContentOffersProvider::CollectionType, int) = 0;

    virtual ::StoreCatalogItem const& getOfferItem(::ISuggestedContentOffersProvider::CollectionType, int) const = 0;

    virtual ulong getNumOfferItems(::ISuggestedContentOffersProvider::CollectionType) const = 0;

    virtual void setQueries(std::string const&, std::string const&) = 0;

    virtual void clearQueries() = 0;

    virtual bool tick() = 0;

    virtual std::string getSeeMorePageId(::ISuggestedContentOffersProvider::CollectionType) const = 0;

    virtual std::optional<std::string> getSuggestedOffersTitle() const = 0;

    virtual bool areSuggestedOffersLoading() const = 0;
    // clang-format on
    // NOLINTEND
};
