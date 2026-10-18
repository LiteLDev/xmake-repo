#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/StoreNavigationOrigin.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class StoreCatalogItem;
// clang-format on

class ScreenshotCarouselPurchaseScreen : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::StoreNavigationOrigin> mNavigationOrigin;
    ::ll::TypedStorage<4, 4, int>                     mMaxScreenshots;
    ::ll::TypedStorage<4, 4, int>                     mScreenshotsPerRow;
    ::ll::UntypedStorage<8, 8>                        mCatalogItem;
    ::ll::TypedStorage<4, 4, int>                     mSelectedScreenShotIndex;
    ::ll::UntypedStorage<4, 12>                       mCollectionIndexOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenshotCarouselPurchaseScreen& operator=(ScreenshotCarouselPurchaseScreen const&);
    ScreenshotCarouselPurchaseScreen(ScreenshotCarouselPurchaseScreen const&);
    ScreenshotCarouselPurchaseScreen();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenshotCarouselPurchaseScreen() = default;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual std::string getAdditionalScreenInfo() const;

    virtual void _handlePolymorphicButtonPress() = 0;

    virtual std::string _getPolymorphicButtonText() const = 0;

    virtual bool _polymorphicButtonVisible() const = 0;

    virtual bool _buttonCoinIconVisible() const = 0;

    virtual bool _polymorphicButtonEnabled() const;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/StoreNavigationOrigin.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class StoreCatalogItem;
// clang-format on

class ScreenshotCarouselPurchaseScreen : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::StoreNavigationOrigin>   mNavigationOrigin;
    ::ll::TypedStorage<4, 4, int>                       mMaxScreenshots;
    ::ll::TypedStorage<4, 4, int>                       mScreenshotsPerRow;
    ::ll::TypedStorage<8, 8, ::StoreCatalogItem const&> mCatalogItem;
    ::ll::TypedStorage<4, 4, int>                       mSelectedScreenShotIndex;
    ::ll::TypedStorage<4, 4, int>                       mCollectionIndexOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenshotCarouselPurchaseScreen& operator=(ScreenshotCarouselPurchaseScreen const&);
    ScreenshotCarouselPurchaseScreen(ScreenshotCarouselPurchaseScreen const&);
    ScreenshotCarouselPurchaseScreen();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenshotCarouselPurchaseScreen() /*override*/ = default;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;

    virtual void _handlePolymorphicButtonPress() = 0;

    virtual ::std::string _getPolymorphicButtonText() const = 0;

    virtual bool _polymorphicButtonVisible() const = 0;

    virtual bool _buttonCoinIconVisible() const = 0;

    virtual bool _polymorphicButtonEnabled() const;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;
    // NOLINTEND
};
#else // @header-generator platform
class ScreenshotCarouselPurchaseScreen {};
#endif // @header-generator platform
#endif // @header-generator platform
