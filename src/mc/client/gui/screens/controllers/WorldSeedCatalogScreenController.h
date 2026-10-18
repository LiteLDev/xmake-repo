#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class UIPropertyBag;
namespace Core { class Path; }
// clang-format on

class WorldSeedCatalogScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mCloseCallback;
    ::ll::UntypedStorage<8, 32> mFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSeedCatalogScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldSeedCatalogScreenController();

    virtual ::ui::DirtyFlag tick();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldSeedCatalogScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        std::function<void(const std::string&, const std::string&, const Core::Path&)>
    );

    MCNAPI void _registerBindings();

    MCNAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MainMenuScreenModel>,
        std::function<void(const std::string&, const std::string&, const Core::Path&)>
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
class MainMenuScreenModel;
namespace Core { class Path; }
// clang-format on

class WorldSeedCatalogScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, ::std::string const&, ::Core::Path const&)>>
                                             mCloseCallback;
    ::ll::TypedStorage<8, 32, ::std::string> mFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSeedCatalogScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldSeedCatalogScreenController(
        ::std::shared_ptr<::MainMenuScreenModel>                                               model,
        ::std::function<void(::std::string const&, ::std::string const&, ::Core::Path const&)> closeCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>                                               model,
        ::std::function<void(::std::string const&, ::std::string const&, ::Core::Path const&)> closeCallback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND
};
#else // @header-generator platform
class WorldSeedCatalogScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
