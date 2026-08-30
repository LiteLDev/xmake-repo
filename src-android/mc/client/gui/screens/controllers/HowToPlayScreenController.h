#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/HowToPlayTopicIndex.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class UIPropertyBag;
namespace Json { class Value; }
// clang-format on

class HowToPlayScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>          mCurrentFocus;
    ::ll::TypedStorage<8, 24, std::string>          mCurrentTabTitle;
    ::ll::TypedStorage<4, 4, ::HowToPlayTopicIndex> mCurrentTab;
    ::ll::TypedStorage<4, 4, ::HowToPlayTopicIndex> mInitialTab;
    ::ll::UntypedStorage<1, 16>                     mInitialTabSelected;
    // NOLINTEND

public:
    // prevent constructor by default
    HowToPlayScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HowToPlayScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual bool bind(std::string const&, uint, std::string const&, ::UIPropertyBag&);

    virtual void addStaticScreenVars(::Json::Value&);

    virtual std::string _getButtonADescription();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HowToPlayScreenController(std::shared_ptr<MainMenuScreenModel>, ::HowToPlayTopicIndex);

    MCNAPI void _selectNewTab(bool, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, ::HowToPlayTopicIndex);
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

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI std::string $_getButtonADescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
