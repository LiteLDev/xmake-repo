#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
