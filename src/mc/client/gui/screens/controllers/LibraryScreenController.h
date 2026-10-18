#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/services/catalog/FetchResult.h"

// auto generated forward declare list
// clang-format off
class LibraryCollection;
class LibraryItem;
class LibrarySearchBarScreenController;
class MainMenuScreenModel;
class UIPropertyBag;
namespace Json { class Value; }
namespace librarySearch { struct TelemetryData; }
// clang-format on

class LibraryScreenController : public ::MainMenuScreenController {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class LibraryCollection;
class LibraryItem;
class LibrarySearchBarScreenController;
class MainMenuScreenModel;
class UIPropertyBag;
namespace Json { class Value; }
namespace librarySearch { struct TelemetryData; }
// clang-format on

class LibraryScreenController : public ::MainMenuScreenController {
#else // @header-generator platform
class LibraryScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // LibraryScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ItemType : uchar {
        Normal = 0,
        Large  = 1,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class ItemType : uchar {
        Normal = 0,
        Large  = 1,
    };
#else // @header-generator platform
    enum class ItemType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class OptionalFeature : uchar {
        None                         = 0,
        FilterBar                    = 2,
        FindWorldsAndFeedbackButtons = 4,
        WelcomeMessage               = 8,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class OptionalFeature : uchar {
        None                         = 0,
        FilterBar                    = 2,
        FindWorldsAndFeedbackButtons = 4,
        WelcomeMessage               = 8,
    };
#else // @header-generator platform
    enum class OptionalFeature : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class ScreenType : uchar {
        None    = 0,
        Library = 1,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class ScreenType : uchar {
        None    = 0,
        Library = 1,
    };
#else // @header-generator platform
    enum class ScreenType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class ErrorType : uchar {
        None              = 0,
        LibraryConnection = 1,
        NoLessonsFound    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<librarySearch::TelemetryData>>     mSearchTelemetryData;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LibraryCollection>>                mLibraryCollection;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LibrarySearchBarScreenController>> mSearchBarSubController;
    ::ll::TypedStorage<8, 24, std::string>                                       mLibraryTitle;
    ::ll::TypedStorage<8, 24, std::string>                                       mLibraryIcon;
    ::ll::TypedStorage<8, 24, std::string>                                       mLibraryPageDescription;
    ::ll::TypedStorage<8, 24, std::string>                                       mCategoryTitle;
    ::ll::TypedStorage<1, 1, ::LibraryScreenController::ItemType>                mItemType;
    ::ll::TypedStorage<1, 1, ::LibraryScreenController::OptionalFeature>         mOptionalFeatures;
    ::ll::TypedStorage<1, 1, ::LibraryScreenController::ScreenType>              mScreenType;
    ::ll::TypedStorage<1, 1, ::LibraryScreenController::ErrorType>               mCurrentError;
    ::ll::TypedStorage<1, 1, bool>                                               mFetchComplete;
    ::ll::TypedStorage<1, 1, bool>                                               mShowingWelcome;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibraryScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onInit();

    virtual void addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LibraryScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        std::shared_ptr<LibraryCollection>,
        ::LibraryScreenController::OptionalFeature
    );

    MCNAPI LibraryScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        std::shared_ptr<LibraryCollection>,
        std::string const&,
        std::string const&,
        std::string const&,
        ::LibraryScreenController::OptionalFeature
    );

    MCNAPI LibraryScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        std::shared_ptr<LibraryCollection>,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        ::LibraryScreenController::OptionalFeature
    );

    MCNAPI ::LibraryItem* _getItem(::UIPropertyBag&) const;

    MCNAPI void _initialize();

    MCNAPI void _initializeLibraryCollection(std::shared_ptr<LibraryCollection>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MainMenuScreenModel>,
        std::shared_ptr<LibraryCollection>,
        ::LibraryScreenController::OptionalFeature
    );

    MCNAPI void* $ctor(
        std::shared_ptr<MainMenuScreenModel>,
        std::shared_ptr<LibraryCollection>,
        std::string const&,
        std::string const&,
        std::string const&,
        ::LibraryScreenController::OptionalFeature
    );

    MCNAPI void* $ctor(
        std::shared_ptr<MainMenuScreenModel>,
        std::shared_ptr<LibraryCollection>,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        ::LibraryScreenController::OptionalFeature
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

    MCNAPI void $onInit();

    MCNAPI void $addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class ErrorType : uchar {
        None              = 0,
        LibraryConnection = 1,
        NoLessonsFound    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::librarySearch::TelemetryData>>     mSearchTelemetryData;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LibraryCollection>>                mLibraryCollection;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LibrarySearchBarScreenController>> mSearchBarSubController;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mLibraryTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mLibraryIcon;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mLibraryPageDescription;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mCategoryTitle;
    ::ll::TypedStorage<1, 1, ::LibraryScreenController::ItemType>                    mItemType;
    ::ll::TypedStorage<1, 1, ::LibraryScreenController::OptionalFeature>             mOptionalFeatures;
    ::ll::TypedStorage<1, 1, ::LibraryScreenController::ScreenType>                  mScreenType;
    ::ll::TypedStorage<1, 1, ::LibraryScreenController::ErrorType>                   mCurrentError;
    ::ll::TypedStorage<1, 1, bool>                                                   mFetchComplete;
    ::ll::TypedStorage<1, 1, bool>                                                   mShowingWelcome;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibraryScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onInit() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LibraryScreenController(
        ::std::shared_ptr<::MainMenuScreenModel>   model,
        ::std::shared_ptr<::LibraryCollection>     collection,
        ::LibraryScreenController::OptionalFeature optionalFeatures
    );

    MCAPI LibraryScreenController(
        ::std::shared_ptr<::MainMenuScreenModel>   model,
        ::std::shared_ptr<::LibraryCollection>     collection,
        ::std::string const&                       title,
        ::std::string const&                       icon,
        ::std::string const&                       pageDescription,
        ::LibraryScreenController::OptionalFeature optionalFeatures
    );

    MCAPI LibraryScreenController(
        ::std::shared_ptr<::MainMenuScreenModel>   model,
        ::std::shared_ptr<::LibraryCollection>     collection,
        ::std::string const&                       title,
        ::std::string const&                       icon,
        ::std::string const&                       pageDescription,
        ::std::string const&                       categoryTitle,
        ::LibraryScreenController::OptionalFeature optionalFeatures
    );

    MCAPI ::LibraryItem* _getItem(::UIPropertyBag& bag) const;

    MCAPI void _initialize();

    MCAPI void _initializeLibraryCollection(::std::shared_ptr<::LibraryCollection> libraryCollection);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>   model,
        ::std::shared_ptr<::LibraryCollection>     collection,
        ::LibraryScreenController::OptionalFeature optionalFeatures
    );

    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>   model,
        ::std::shared_ptr<::LibraryCollection>     collection,
        ::std::string const&                       title,
        ::std::string const&                       icon,
        ::std::string const&                       pageDescription,
        ::LibraryScreenController::OptionalFeature optionalFeatures
    );

    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>   model,
        ::std::shared_ptr<::LibraryCollection>     collection,
        ::std::string const&                       title,
        ::std::string const&                       icon,
        ::std::string const&                       pageDescription,
        ::std::string const&                       categoryTitle,
        ::LibraryScreenController::OptionalFeature optionalFeatures
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $onOpen();

    MCAPI void $onInit();

    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND
#else // @header-generator platform
    enum class ErrorType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
};
