#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class StoreCatalogItem;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class StoreCatalogItem;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
class ISuggestedContentOffersProvider {
public:
    // ISuggestedContentOffersProvider inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class CollectionType : int {
        StoreItems      = 0,
        RealmsPlusItems = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISuggestedContentOffersProvider() = default;

    virtual ::StoreCatalogItem const&
    getOfferItem(::ISuggestedContentOffersProvider::CollectionType type, int index) const = 0;

    virtual ::StoreCatalogItem& getOfferItem(::ISuggestedContentOffersProvider::CollectionType type, int index) = 0;

    virtual uint64 getNumOfferItems(::ISuggestedContentOffersProvider::CollectionType type) const = 0;

    virtual void setQueries(::std::string const& upsellQueryName, ::std::string const& realmsPlusQueryName) = 0;

    virtual void clearQueries() = 0;

    virtual bool tick() = 0;

    virtual ::std::string getSeeMorePageId(::ISuggestedContentOffersProvider::CollectionType type) const = 0;

    virtual ::std::optional<::std::string> getSuggestedOffersTitle() const = 0;

    virtual bool areSuggestedOffersLoading() const = 0;
    // NOLINTEND
#else // @header-generator platform
    enum class CollectionType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
