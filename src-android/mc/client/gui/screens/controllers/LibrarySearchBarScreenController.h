#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class LibraryCollection;
class MainMenuScreenModel;
// clang-format on

class LibrarySearchBarScreenController : public ::MainMenuScreenController {
public:
    // LibrarySearchBarScreenController inner types declare
    // clang-format off
    struct SearchConfig;
    // clang-format on

    // LibrarySearchBarScreenController inner types define
    struct SearchConfig {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>              mSearchString;
        ::ll::TypedStorage<8, 24, std::vector<std::string>> mSearchTags;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~SearchConfig();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::LibrarySearchBarScreenController::SearchConfig> mConfig;
    ::ll::UntypedStorage<8, 24>                                                 mLibraryCollection;
    ::ll::UntypedStorage<8, 48>                                                 mUpdateSearchResult;
    // NOLINTEND

public:
    // prevent constructor by default
    LibrarySearchBarScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibrarySearchBarScreenController();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LibrarySearchBarScreenController(std::shared_ptr<MainMenuScreenModel>);

    MCNAPI void openSearch();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
