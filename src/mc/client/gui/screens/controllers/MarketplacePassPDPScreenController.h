#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/StoreNavigationOrigin.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MarketplacePassTabIndex.h"
#include "mc/client/gui/screens/controllers/PurchaseEnabledScreenController.h"
#include "mc/client/services/sdl/SubscriptionInfo.h"
#include "mc/client/store/iap/transactions/TransactionStatus.h"
#include "mc/client/store/servicecomponent/MarketplacePassSectionType.h"
#include "mc/client/store/sidebar/Type.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CatalogCollection;
class IEntitlementManager;
class MainMenuScreenModel;
namespace Json { class Value; }
namespace RealmsScreenUtils { struct RealmsWorldLoadingDetailsGroup; }
namespace SDL { struct ScreenLayoutQuery; }
namespace sidebar { class NavigationModel; }
// clang-format on

class MarketplacePassPDPScreenController : public ::PurchaseEnabledScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::MarketplacePassTabIndex>                mInitialTab;
    ::ll::TypedStorage<4, 4, ::MarketplacePassTabIndex>                mCurrentTab;
    ::ll::TypedStorage<4, 4, ::StoreNavigationOrigin>                  mOrigin;
    ::ll::TypedStorage<1, 1, bool>                                     mInitialTabSelected;
    ::ll::TypedStorage<8, 24, std::string>                             mCurrentFocus;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                mToggleSectionNames;
    ::ll::TypedStorage<8, 16, std::shared_ptr<CatalogCollection>>      mPopularPacksCollection;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SDL::ScreenLayoutQuery>> mMarketplacePassLayoutQuery;
    ::ll::UntypedStorage<8, 24>                                        mEntitlementManager;
    ::ll::TypedStorage<8, 24, std::string>                             mPacksLabel;
    ::ll::TypedStorage<8, 24, std::string>                             mMarketplacePassPrice;
    ::ll::TypedStorage<1, 1, bool>                                     mCheckedTOS;
    ::ll::TypedStorage<1, 1, bool>                                     mDirty;
    ::ll::TypedStorage<8, 152, ::SDL::SubscriptionInfo const>          mSubscriptionInfo;
    ::ll::TypedStorage<4, 4, ::TransactionStatus>                      mCurrentTransactionStatus;
    ::ll::UntypedStorage<8, 16>                                        mNavigationModel;
    ::ll::UntypedStorage<8, 24>                                        mRealmsWorldLoadingDetailsGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplacePassPDPScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MarketplacePassPDPScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onCreation();

    virtual void onLeave();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual std::string getAdditionalScreenInfo() const;

    virtual ::ui::SceneType getSceneType() const;

    virtual void onEntered();

    virtual ::sidebar::navigationLayout::Type getSidebarLayoutType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MarketplacePassPDPScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::MarketplacePassTabIndex,
        ::StoreNavigationOrigin,
        ::sidebar::navigationLayout::Type
    );

    MCNAPI ::ui::ViewRequest _changeTabTo(::MarketplacePassTabIndex);

    MCNAPI std::string const _getMarketplacePassOfferString(std::string const&);

    MCNAPI bool _isCsbSubscribed() const;

    MCNAPI bool _isRealmsPlusSubscriptionActive() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MainMenuScreenModel>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::MarketplacePassTabIndex,
        ::StoreNavigationOrigin,
        ::sidebar::navigationLayout::Type
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
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onOpen();

    MCNAPI void $onCreation();

    MCNAPI void $onLeave();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI std::string $getAdditionalScreenInfo() const;

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI void $onEntered();

    MCNAPI ::sidebar::navigationLayout::Type $getSidebarLayoutType() const;
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
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/StoreNavigationOrigin.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MarketplacePassTabIndex.h"
#include "mc/client/gui/screens/controllers/PurchaseEnabledScreenController.h"
#include "mc/client/services/sdl/SubscriptionInfo.h"
#include "mc/client/store/iap/transactions/TransactionStatus.h"
#include "mc/client/store/sidebar/Type.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CatalogCollection;
class IEntitlementManager;
class MainMenuScreenModel;
namespace Json { class Value; }
namespace RealmsScreenUtils { struct RealmsWorldLoadingDetailsGroup; }
namespace SDL { struct ScreenLayoutQuery; }
namespace sidebar { class NavigationModel; }
// clang-format on

class MarketplacePassPDPScreenController : public ::PurchaseEnabledScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::MarketplacePassTabIndex>                             mInitialTab;
    ::ll::TypedStorage<4, 4, ::MarketplacePassTabIndex>                             mCurrentTab;
    ::ll::TypedStorage<4, 4, ::StoreNavigationOrigin>                               mOrigin;
    ::ll::TypedStorage<1, 1, bool>                                                  mInitialTabSelected;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mCurrentFocus;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                         mToggleSectionNames;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CatalogCollection>>               mPopularPacksCollection;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SDL::ScreenLayoutQuery>>          mMarketplacePassLayoutQuery;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>> mEntitlementManager;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mPacksLabel;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mMarketplacePassPrice;
    ::ll::TypedStorage<1, 1, bool>                                                  mCheckedTOS;
    ::ll::TypedStorage<1, 1, bool>                                                  mDirty;
    ::ll::TypedStorage<8, 200, ::SDL::SubscriptionInfo const>                       mSubscriptionInfo;
    ::ll::TypedStorage<4, 4, ::TransactionStatus>                                   mCurrentTransactionStatus;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::sidebar::NavigationModel>>        mNavigationModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RealmsScreenUtils::RealmsWorldLoadingDetailsGroup>>
        mRealmsWorldLoadingDetailsGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplacePassPDPScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MarketplacePassPDPScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onCreation() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onEntered() /*override*/;

    virtual void onLeave() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual ::sidebar::navigationLayout::Type getSidebarLayoutType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MarketplacePassPDPScreenController(
        ::std::shared_ptr<::MainMenuScreenModel>             model,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager,
        ::MarketplacePassTabIndex                            marketplacePassTabIndex,
        ::StoreNavigationOrigin                              origin,
        ::sidebar::navigationLayout::Type                    sidebarLayoutType
    );

    MCAPI ::ui::ViewRequest _changeTabTo(::MarketplacePassTabIndex tabIndex);

    MCAPI ::std::string const _getMarketplacePassOfferPrice();

    MCAPI ::std::string const _getMarketplacePassOfferString(::std::string const& locKey);

    MCAPI bool _isCsbSubscribed() const;

    MCAPI bool _isRealmsPlusSubscriptionActive() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>             model,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager,
        ::MarketplacePassTabIndex                            marketplacePassTabIndex,
        ::StoreNavigationOrigin                              origin,
        ::sidebar::navigationLayout::Type                    sidebarLayoutType
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $onCreation();

    MCAPI void $onOpen();

    MCAPI void $onEntered();

    MCAPI void $onLeave();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI ::std::string $getAdditionalScreenInfo() const;

    MCFOLD ::ui::SceneType $getSceneType() const;

    MCAPI ::sidebar::navigationLayout::Type $getSidebarLayoutType() const;
    // NOLINTEND
};
#else // @header-generator platform
class MarketplacePassPDPScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
