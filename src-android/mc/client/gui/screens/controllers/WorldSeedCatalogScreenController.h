#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
