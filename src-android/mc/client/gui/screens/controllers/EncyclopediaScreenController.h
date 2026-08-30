#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/EncyclopediaTopicIndex.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class UIPropertyBag;
// clang-format on

class EncyclopediaScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>             mCurrentTabTitle;
    ::ll::TypedStorage<4, 4, ::EncyclopediaTopicIndex> mCurrentTab;
    ::ll::TypedStorage<4, 4, ::EncyclopediaTopicIndex> mInitialTab;
    ::ll::TypedStorage<1, 1, bool>                     mInitialTabSelected;
    // NOLINTEND

public:
    // prevent constructor by default
    EncyclopediaScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EncyclopediaScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual bool bind(std::string const&, uint, std::string const&, ::UIPropertyBag&);

    virtual std::string _getButtonADescription();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EncyclopediaScreenController(std::shared_ptr<MainMenuScreenModel>, ::EncyclopediaTopicIndex);

    MCNAPI void _init();

    MCNAPI void _registerBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, ::EncyclopediaTopicIndex);
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

    MCNAPI bool $bind(std::string const&, uint, std::string const&, ::UIPropertyBag&);

    MCNAPI std::string $_getButtonADescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
