#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/UserPermissions.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/UserPermissionsFEWrapper.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class GenericEntitlementChangeListener;
class IEntitlementManager;
class MainMenuScreenModel;
class PlatformMultiplayerRestrictions;
namespace Social { class User; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/UserPermissions.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/UserPermissionsFEWrapper.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class GenericEntitlementChangeListener;
class IEntitlementManager;
class MainMenuScreenModel;
class PlatformMultiplayerRestrictions;
namespace Social { class User; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class UserAccountFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::UserAccountFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                             mIsDirty;
    ::ll::TypedStorage<1, 1, bool>                                             mIsTrialAccount;
    ::ll::TypedStorage<1, 1, bool>                                             mHasPremiumNetworkAccess;
    ::ll::TypedStorage<1, 1, bool>                                             mIsSignInInProgress;
    ::ll::TypedStorage<1, 1, bool>                                             mIsLoggedInWithMicrosoftAccount;
    ::ll::TypedStorage<1, 1, bool>                                             mCanLogInWithMicrosoftAccount;
    ::ll::TypedStorage<1, 1, bool>                                             mHasValidCrossPlatformSkin;
    ::ll::TypedStorage<1, 1, bool>                                             mIsBanned;
    ::ll::TypedStorage<4, 12, ::OreUI::UserPermissions>                        mUserPermissions;
    ::ll::TypedStorage<8, 96, ::OreUI::UserPermissionsFEWrapper>               mUserPermissionsFEWrapper;
    ::ll::TypedStorage<8, 24, std::string>                                     mBanReason;
    ::ll::TypedStorage<8, 24, std::string>                                     mBanExpiration;
    ::ll::TypedStorage<1, 1, bool>                                             mIsSignedInPlatformNetwork;
    ::ll::TypedStorage<1, 1, bool>                                             mIsRealmsPlusSubscriptionActive;
    ::ll::TypedStorage<1, 1, bool>                                             mIsMarketplacePassSubscriptionActive;
    ::ll::TypedStorage<1, 1, bool>                                             mIsMarketplaceDisabled;
    ::ll::TypedStorage<8, 24, std::string>                                     mCurrentXuid;
    ::ll::TypedStorage<8, 24, std::string>                                     mCurrentPlatformId;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MainMenuScreenModel>>            mMainMenuScreenModel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::User>>                   mUser;
    ::ll::UntypedStorage<4, 12>                                                mUnlinkAccountTask;
    ::ll::UntypedStorage<4, 16>                                                mSignInToPlatformNetworkTask;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                    mTaskGroup;
    ::ll::UntypedStorage<8, 24>                                                mEntitlementManager;
    ::ll::UntypedStorage<8, 16>                                                mEntitlementChangeListener;
    // NOLINTEND

public:
    // prevent constructor by default
    UserAccountFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UserAccountFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UserAccountFacet(
        std::shared_ptr<MainMenuScreenModel>,
        std::shared_ptr<Social::User>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>
    );

    MCNAPI bool _isMarketplacePassSubscriptionActive() const;

    MCNAPI bool _isRealmsPlusSubscriptionActive() const;

    MCNAPI void _onEntitlementsInventoryRefreshed();

    MCNAPI void clearAccountUnlinkState();

    MCNAPI ::OreUI::FacetTaskState getAccountUnlinkState();

    MCNAPI std::string const& getBanExpiration() const;

    MCNAPI std::string const& getBanReason() const;

    MCNAPI std::string const& getCurrentPlatformId() const;

    MCNAPI std::string const& getCurrentXuid() const;

    MCNAPI std::string getMarketplaceDisabledReason() const;

    MCNAPI std::optional<Social::UserPlatformConnectionResult> const& getSignInToPlatformNetworkResult() const;

    MCNAPI ::OreUI::FacetTaskState getSignInToPlatformNetworkState();

    MCNAPI ::OreUI::UserPermissionsFEWrapper const& getUserPermissions() const;

    MCNAPI bool hasPremiumNetworkAccess() const;

    MCNAPI bool hasValidCrossPlatformSkin() const;

    MCNAPI bool isBanned() const;

    MCNAPI bool isLoggedInWithMicrosoftAccount() const;

    MCNAPI bool isMarketplaceDisabled() const;

    MCNAPI bool isMarketplacePassSubscriptionActive() const;

    MCNAPI bool isRealmsPlusSubscriptionActive() const;

    MCNAPI bool isSignInInProgress() const;

    MCNAPI bool isSignedInPlatformNetwork() const;

    MCNAPI void manageMicrosoftAccount();

    MCNAPI void resetSignInToPlatformNetwork();

    MCNAPI void showPremiumNetworkUpsellModal();

    MCNAPI void signInToPlatformNetwork(bool);

    MCNAPI void signOutOfMicrosoftAccount();

    MCNAPI void unlinkMicrosoftAccount();

    MCNAPI void updateMultiplayerPrivilegeUsingSystemModal();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[20]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MainMenuScreenModel>,
        std::shared_ptr<Social::User>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>
    );
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
class UserAccountFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::UserAccountFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                 mIsDirty;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsTrialAccount;
    ::ll::TypedStorage<1, 1, bool>                                                 mHasPremiumNetworkAccess;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsSignInInProgress;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsLoggedInWithMicrosoftAccount;
    ::ll::TypedStorage<1, 1, bool>                                                 mCanLogInWithMicrosoftAccount;
    ::ll::TypedStorage<1, 1, bool>                                                 mHasValidCrossPlatformSkin;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsBanned;
    ::ll::TypedStorage<4, 12, ::OreUI::UserPermissions>                            mUserPermissions;
    ::ll::TypedStorage<8, 96, ::OreUI::UserPermissionsFEWrapper>                   mUserPermissionsFEWrapper;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mBanReason;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mBanExpiration;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsSignedInPlatformNetwork;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsRealmsPlusSubscriptionActive;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsMarketplacePassSubscriptionActive;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsMarketplaceDisabled;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mCurrentXuid;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mCurrentPlatformId;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MainMenuScreenModel>>            mMainMenuScreenModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::User>>                   mUser;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::std::monostate>>         mUnlinkAccountTask;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::Social::UserPlatformConnectionResult>>
                                                                                     mSignInToPlatformNetworkTask;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                          mTaskGroup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>  mEntitlementManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GenericEntitlementChangeListener>> mEntitlementChangeListener;
    // NOLINTEND

public:
    // prevent constructor by default
    UserAccountFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UserAccountFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UserAccountFacet(
        ::std::shared_ptr<::MainMenuScreenModel>             model,
        ::std::shared_ptr<::Social::User>                    user,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager
    );

    MCAPI bool _isMarketplacePassSubscriptionActive() const;

    MCAPI bool _isRealmsPlusSubscriptionActive() const;

    MCAPI void _onEntitlementsInventoryRefreshed();

    MCAPI void clearAccountUnlinkState();

    MCAPI ::OreUI::FacetTaskState getAccountUnlinkState();

    MCFOLD ::std::string const& getBanExpiration() const;

    MCFOLD ::std::string const& getBanReason() const;

    MCFOLD ::std::string const& getCurrentPlatformId() const;

    MCAPI ::std::string const& getCurrentXuid() const;

    MCAPI ::std::string getMarketplaceDisabledReason() const;

    MCAPI ::std::optional<::Social::UserPlatformConnectionResult> const& getSignInToPlatformNetworkResult() const;

    MCAPI ::OreUI::FacetTaskState getSignInToPlatformNetworkState();

    MCFOLD ::OreUI::UserPermissionsFEWrapper const& getUserPermissions() const;

    MCFOLD bool hasPremiumNetworkAccess() const;

    MCAPI bool hasValidCrossPlatformSkin() const;

    MCAPI bool isBanned() const;

    MCAPI bool isLoggedInWithMicrosoftAccount() const;

    MCAPI bool isMarketplaceDisabled() const;

    MCAPI bool isMarketplacePassSubscriptionActive() const;

    MCAPI bool isRealmsPlusSubscriptionActive() const;

    MCAPI bool isSignInInProgress() const;

    MCAPI bool isSignedInPlatformNetwork() const;

    MCAPI void manageMicrosoftAccount();

    MCAPI void resetSignInToPlatformNetwork();

    MCAPI void showPremiumNetworkUpsellModal();

    MCAPI void signInToPlatformNetwork(bool isUserInitiated);

    MCAPI void signOutOfMicrosoftAccount();

    MCAPI void unlinkMicrosoftAccount();

    MCAPI void updateMultiplayerPrivilegeUsingSystemModal();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>             model,
        ::std::shared_ptr<::Social::User>                    user,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class UserAccountFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
