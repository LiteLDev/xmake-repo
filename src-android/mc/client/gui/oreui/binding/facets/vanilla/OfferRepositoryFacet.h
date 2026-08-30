#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOfferRepository;
// clang-format on

namespace OreUI {

class OfferRepositoryFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::OfferRepositoryFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                mOfferRepository;
    ::ll::TypedStorage<1, 1, bool>                             mIsFinishedQueryingProductsAndPurchases;
    ::ll::TypedStorage<1, 1, bool>                             mIsRealmsTrialOfferAvailable;
    ::ll::TypedStorage<1, 1, bool>                             mIsCoreOfferAvailable;
    ::ll::TypedStorage<1, 1, bool>                             mIsPlusOfferAvailable;
    ::ll::TypedStorage<8, 24, std::string>                     mCoreTerms;
    ::ll::TypedStorage<8, 24, std::string>                     mCoreTermsExtra;
    ::ll::TypedStorage<8, 24, std::string>                     mPlusTerms;
    ::ll::TypedStorage<8, 24, std::string>                     mPlusTermsExtra;
    ::ll::TypedStorage<8, 24, std::string>                     mCoreSubscriptionPrice;
    ::ll::TypedStorage<8, 24, std::string>                     mPlusSubscriptionPrice;
    ::ll::TypedStorage<1, 1, bool>                             mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOfferRepositoryEventSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    OfferRepositoryFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OfferRepositoryFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit OfferRepositoryFacet(::gsl::not_null<Bedrock::NonOwnerPointer<IOfferRepository>>);

    MCNAPI std::string const& getCoreSubscriptionPrice() const;

    MCNAPI std::string const& getCoreTerms() const;

    MCNAPI std::string const& getCoreTermsExtra() const;

    MCNAPI std::string const& getPlusSubscriptionPrice() const;

    MCNAPI std::string const& getPlusTerms() const;

    MCNAPI std::string const& getPlusTermsExtra() const;

    MCNAPI bool isFinishedQueryingProductsAndPurchases() const;

    MCNAPI bool isRealmsCoreOfferAvailable() const;

    MCNAPI bool isRealmsPlusOfferAvailable() const;

    MCNAPI bool isRealmsTrialOfferAvailable() const;

    MCNAPI void setFacetDirty();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[24]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IOfferRepository>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
