#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/realms/RealmsSubscriptionInfo.h"
#include "mc/client/realms/RealmsSubscriptionsState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsSubscriptions; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/realms/RealmsSubscriptionsState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsSubscriptions; }
namespace Realms { struct RealmsSubscriptionInfo; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsSubscriptionsDataFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsSubscriptionsDataFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsSubscriptions>> mRealmsSubscriptions;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsSubscriptionsState>            mState;
    ::ll::TypedStorage<1, 1, bool>                                          mCanBuyPlusRealm;
    ::ll::TypedStorage<1, 1, bool>                                          mCanBuyCoreRealm;
    ::ll::TypedStorage<8, 24, std::string>                                  mClientStoreId;
    ::ll::TypedStorage<1, 1, bool>                                          mIsDirty;
    ::ll::TypedStorage<8, 24, std::vector<Realms::RealmsSubscriptionInfo>>  mRealmsSubscriptionInfo;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mStateChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSubscriptionsDataFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsSubscriptionsDataFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsSubscriptionsDataFacet(std::shared_ptr<Realms::RealmsSubscriptions>);

    MCNAPI bool getCanBuyCoreRealm() const;

    MCNAPI bool getCanBuyPlusRealm() const;

    MCNAPI std::string const& getClientStoreId() const;

    MCNAPI std::vector<Realms::RealmsSubscriptionInfo> const& getRealmsSubscriptionInfo() const;

    MCNAPI ::Realms::RealmsSubscriptionsState getState() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[32]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Realms::RealmsSubscriptions>);
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
class RealmsSubscriptionsDataFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsSubscriptionsDataFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsSubscriptions>> mRealmsSubscriptions;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsSubscriptionsState>                mState;
    ::ll::TypedStorage<1, 1, bool>                                              mCanBuyPlusRealm;
    ::ll::TypedStorage<1, 1, bool>                                              mCanBuyCoreRealm;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mClientStoreId;
    ::ll::TypedStorage<1, 1, bool>                                              mIsDirty;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::RealmsSubscriptionInfo>>  mRealmsSubscriptionInfo;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mStateChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSubscriptionsDataFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsSubscriptionsDataFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsSubscriptionsDataFacet(::std::shared_ptr<::Realms::RealmsSubscriptions> realmsSubscriptions);

    MCAPI bool getCanBuyCoreRealm() const;

    MCAPI bool getCanBuyPlusRealm() const;

    MCFOLD ::std::string const& getClientStoreId() const;

    MCFOLD ::std::vector<::Realms::RealmsSubscriptionInfo> const& getRealmsSubscriptionInfo() const;

    MCAPI ::Realms::RealmsSubscriptionsState getState() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsSubscriptions> realmsSubscriptions);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsSubscriptionsDataFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
