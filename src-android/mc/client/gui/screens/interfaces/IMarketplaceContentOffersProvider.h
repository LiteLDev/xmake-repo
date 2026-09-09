#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StoreCatalogItem;
// clang-format on

class IMarketplaceContentOffersProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMarketplaceContentOffersProvider() = default;

    virtual ::StoreCatalogItem& getOfferItem(int) = 0;

    virtual ::StoreCatalogItem const& getOfferItem(int) const = 0;

    virtual ulong getNumOfferItems() const = 0;

    virtual void setQuery(std::string const&) = 0;

    virtual void clearQuery() = 0;

    virtual bool tick() = 0;

    virtual std::string getSeeMorePageId() const = 0;

    virtual std::optional<std::string> getSuggestedOffersTitle() const = 0;

    virtual bool areSuggestedOffersLoaded() const = 0;

    virtual std::function<bool(const StoreCatalogItem&)> _getFilterFunction() = 0;
    // NOLINTEND
};
