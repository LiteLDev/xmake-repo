#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOfferRepository;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOfferRepository;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class OfferRepositoryFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::OfferRepositoryFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository>> mOfferRepository;
    ::ll::TypedStorage<1, 1, bool>                             mIsFinishedQueryingProductsAndPurchases;
    ::ll::TypedStorage<1, 1, bool>                             mIsRealmsTrialOfferAvailable;
    ::ll::TypedStorage<1, 1, bool>                             mIsCoreOfferAvailable;
    ::ll::TypedStorage<1, 1, bool>                             mIsPlusOfferAvailable;
    ::ll::TypedStorage<8, 32, ::std::string>                   mCoreTerms;
    ::ll::TypedStorage<8, 32, ::std::string>                   mCoreTermsExtra;
    ::ll::TypedStorage<8, 32, ::std::string>                   mPlusTerms;
    ::ll::TypedStorage<8, 32, ::std::string>                   mPlusTermsExtra;
    ::ll::TypedStorage<8, 32, ::std::string>                   mCoreSubscriptionPrice;
    ::ll::TypedStorage<8, 32, ::std::string>                   mPlusSubscriptionPrice;
    ::ll::TypedStorage<1, 1, bool>                             mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOfferRepositoryEventSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    OfferRepositoryFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit OfferRepositoryFacet(::Bedrock::NotNullNonOwnerPtr<::IOfferRepository> offerRepository);

    MCFOLD ::std::string const& getCoreSubscriptionPrice() const;

    MCFOLD ::std::string const& getCoreTerms() const;

    MCFOLD ::std::string const& getCoreTermsExtra() const;

    MCAPI ::std::string const& getPlusSubscriptionPrice() const;

    MCAPI ::std::string const& getPlusTerms() const;

    MCAPI ::std::string const& getPlusTermsExtra() const;

    MCFOLD bool isFinishedQueryingProductsAndPurchases() const;

    MCFOLD bool isRealmsCoreOfferAvailable() const;

    MCAPI bool isRealmsPlusOfferAvailable() const;

    MCAPI bool isRealmsTrialOfferAvailable() const;

    MCAPI void setFacetDirty();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IOfferRepository> offerRepository);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class OfferRepositoryFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
