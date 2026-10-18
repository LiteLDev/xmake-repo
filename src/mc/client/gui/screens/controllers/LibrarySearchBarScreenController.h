#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class LibraryCollection;
class MainMenuScreenModel;
// clang-format on

class LibrarySearchBarScreenController : public ::MainMenuScreenController {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class LibraryCollection;
class MainMenuScreenModel;
// clang-format on

class LibrarySearchBarScreenController : public ::MainMenuScreenController {
#else // @header-generator platform
class LibrarySearchBarScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // LibrarySearchBarScreenController inner types declare
    // clang-format off
    struct SearchConfig;
    // clang-format on

    // LibrarySearchBarScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct SearchConfig {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                mSearchString;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mSearchTags;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~SearchConfig();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::LibrarySearchBarScreenController::SearchConfig>              mConfig;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LibraryCollection>>                        mLibraryCollection;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::shared_ptr<::LibraryCollection>)>> mUpdateSearchResult;
    // NOLINTEND

public:
    // prevent constructor by default
    LibrarySearchBarScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibrarySearchBarScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LibrarySearchBarScreenController(::std::shared_ptr<::MainMenuScreenModel> model);

    MCAPI void openSearch();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
#else // @header-generator platform
    struct SearchConfig {};
#endif // @header-generator platform
#endif // @header-generator platform
};
