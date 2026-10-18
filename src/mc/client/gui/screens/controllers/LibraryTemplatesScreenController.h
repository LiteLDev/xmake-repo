#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class LibraryCollection;
class MainMenuScreenModel;
// clang-format on

class LibraryTemplatesScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mCollection;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryTemplatesScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibraryTemplatesScreenController();

    virtual ::ui::DirtyFlag tick();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LibraryTemplatesScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        std::shared_ptr<LibraryCollection>,
        ulong
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, std::shared_ptr<LibraryCollection>, ulong);
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
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class LibraryCollection;
class MainMenuScreenModel;
// clang-format on

class LibraryTemplatesScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LibraryCollection>> mCollection;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryTemplatesScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibraryTemplatesScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LibraryTemplatesScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::shared_ptr<::LibraryCollection>   collection,
        uint64
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::std::shared_ptr<::LibraryCollection> collection, uint64);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND
};
#else // @header-generator platform
class LibraryTemplatesScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
