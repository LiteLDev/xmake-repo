#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
public:
    // LibraryScreenController inner types define
    enum class ItemType : uchar {
        Normal = 0,
        Large  = 1,
    };

    enum class OptionalFeature : uchar {
        None                         = 0,
        FilterBar                    = 2,
        FindWorldsAndFeedbackButtons = 4,
        WelcomeMessage               = 8,
    };

    enum class ScreenType : uchar {
        None    = 0,
        Library = 1,
    };

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
};
