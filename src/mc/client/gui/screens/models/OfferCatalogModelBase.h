#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/OfferCatalogStatus.h"
#include "mc/client/gui/screens/models/PlatformOfferModel.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class FlightingService;
class IOfferRepository;
struct ProductSku;
namespace Social { class IUserManager; }
// clang-format on

class OfferCatalogModelBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                      mOfferRepository;
    ::ll::UntypedStorage<8, 24>                      mFlightingService;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>> mExistenceTracker;
    ::ll::TypedStorage<4, 4, ::OfferCatalogStatus>   mCatalogStatus;
    ::ll::UntypedStorage<8, 24>                      mOfferModels;
    ::ll::UntypedStorage<8, 24>                      mActiveOfferModels;
    ::ll::UntypedStorage<8, 288>                     mInvalidOfferModel;
    // NOLINTEND

public:
    // prevent constructor by default
    OfferCatalogModelBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OfferCatalogModelBase();

    virtual ::OfferCatalogStatus update() = 0;

    virtual void fetchAllCoinOffers() = 0;

    virtual uint getNumOfferModels() const;

    virtual uint getNumActiveOfferModels() const;

    virtual ::PlatformOfferModel& getOfferModel(int);

    virtual ::PlatformOfferModel& getActiveOfferModel(int);

    virtual ::PlatformOfferModel* findOfferModelBySku(::ProductSku const&);

    virtual ::PlatformOfferModel* findOfferModelByMinCoins(int const);

    virtual ::PlatformOfferModel* findOfferModelByMinCoins(std::string const&);

    virtual ::PlatformOfferModel* _findActiveOfferModelByProductId(std::string const&);

    virtual ::PlatformOfferModel* _findOfferModelByProductId(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint $getNumOfferModels() const;

    MCNAPI uint $getNumActiveOfferModels() const;

    MCNAPI ::PlatformOfferModel& $getOfferModel(int);

    MCNAPI ::PlatformOfferModel& $getActiveOfferModel(int);

    MCNAPI ::PlatformOfferModel* $findOfferModelBySku(::ProductSku const&);

    MCNAPI ::PlatformOfferModel* $findOfferModelByMinCoins(int const);

    MCNAPI ::PlatformOfferModel* $findOfferModelByMinCoins(std::string const&);

    MCNAPI ::PlatformOfferModel* $_findActiveOfferModelByProductId(std::string const&);

    MCNAPI ::PlatformOfferModel* $_findOfferModelByProductId(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/OfferCatalogStatus.h"
#include "mc/client/gui/screens/models/PlatformOfferModel.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FlightingService;
class IOfferRepository;
struct ProductSku;
// clang-format on

class OfferCatalogModelBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository>> mOfferRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::FlightingService>> mFlightingService;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                           mExistenceTracker;
    ::ll::TypedStorage<4, 4, ::OfferCatalogStatus>                               mCatalogStatus;
    ::ll::TypedStorage<8, 24, ::std::vector<::PlatformOfferModel>>               mOfferModels;
    ::ll::TypedStorage<8, 24, ::std::vector<::PlatformOfferModel>>               mActiveOfferModels;
    ::ll::TypedStorage<8, 328, ::PlatformOfferModel>                             mInvalidOfferModel;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OfferCatalogModelBase() = default;

    virtual ::OfferCatalogStatus update() = 0;

    virtual void fetchAllCoinOffers() = 0;

    virtual uint getNumOfferModels() const;

    virtual uint getNumActiveOfferModels() const;

    virtual ::PlatformOfferModel& getOfferModel(int index);

    virtual ::PlatformOfferModel& getActiveOfferModel(int index);

    virtual ::PlatformOfferModel* findOfferModelBySku(::ProductSku const& sku);

    virtual ::PlatformOfferModel* findOfferModelByMinCoins(::std::string const& coinsNeeded);

    virtual ::PlatformOfferModel* findOfferModelByMinCoins(int const coinsNeeded);

    virtual ::PlatformOfferModel* _findActiveOfferModelByProductId(::std::string const& productId);

    virtual ::PlatformOfferModel* _findOfferModelByProductId(::std::string const& productId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI uint $getNumOfferModels() const;

    MCAPI uint $getNumActiveOfferModels() const;

    MCAPI ::PlatformOfferModel& $getOfferModel(int index);

    MCAPI ::PlatformOfferModel& $getActiveOfferModel(int index);

    MCAPI ::PlatformOfferModel* $findOfferModelBySku(::ProductSku const& sku);

    MCAPI ::PlatformOfferModel* $findOfferModelByMinCoins(::std::string const& coinsNeeded);

    MCAPI ::PlatformOfferModel* $findOfferModelByMinCoins(int const coinsNeeded);

    MCAPI ::PlatformOfferModel* $_findActiveOfferModelByProductId(::std::string const& productId);

    MCAPI ::PlatformOfferModel* $_findOfferModelByProductId(::std::string const& productId);
    // NOLINTEND
};
#else // @header-generator platform
class OfferCatalogModelBase {};
#endif // @header-generator platform
#endif // @header-generator platform
