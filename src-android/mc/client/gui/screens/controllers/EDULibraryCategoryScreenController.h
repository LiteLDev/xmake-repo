#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/models/EDULibraryCategory.h"

// auto generated forward declare list
// clang-format off
class LibrarySearchBarScreenController;
class MainMenuScreenModel;
class UIPropertyBag;
namespace Json { class Value; }
// clang-format on

class EDULibraryCategoryScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                               mFirstPage;
    ::ll::TypedStorage<8, 24, std::string>                                       mTitle;
    ::ll::TypedStorage<8, 24, std::string>                                       mIcon;
    ::ll::TypedStorage<8, 24, std::string>                                       mDescription;
    ::ll::TypedStorage<8, 24, std::string>                                       mScreenshotRatio;
    ::ll::TypedStorage<4, 4, int>                                                mColumnCount;
    ::ll::TypedStorage<8, 24, std::vector<EDULibraryCategory>>                   mLibraryCategories;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LibrarySearchBarScreenController>> mSearchBarSubController;
    // NOLINTEND

public:
    // prevent constructor by default
    EDULibraryCategoryScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDULibraryCategoryScreenController();

    virtual void onOpen();

    virtual void addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EDULibraryCategoryScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        std::string,
        std::string,
        std::string,
        std::string,
        int,
        std::vector<EDULibraryCategory>,
        bool
    );

    MCNAPI ::EDULibraryCategory* _getCategory(::UIPropertyBag const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MainMenuScreenModel>,
        std::string,
        std::string,
        std::string,
        std::string,
        int,
        std::vector<EDULibraryCategory>,
        bool
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
    MCNAPI void $onOpen();

    MCNAPI void $addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
