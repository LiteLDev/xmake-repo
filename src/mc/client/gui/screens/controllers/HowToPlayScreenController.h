#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/HowToPlayTopicIndex.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

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
    ::ll::TypedStorage<8, 32, ::std::string>        mCurrentFocus;
    ::ll::TypedStorage<8, 32, ::std::string>        mCurrentTabTitle;
    ::ll::TypedStorage<4, 4, ::HowToPlayTopicIndex> mCurrentTab;
    ::ll::TypedStorage<4, 4, ::HowToPlayTopicIndex> mInitialTab;
    ::ll::TypedStorage<1, 1, bool>                  mInitialTabSelected;
    // NOLINTEND

public:
    // prevent constructor by default
    HowToPlayScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HowToPlayScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual bool bind(
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    ) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HowToPlayScreenController(::std::shared_ptr<::MainMenuScreenModel> model, ::HowToPlayTopicIndex topic);

    MCAPI void _selectNewTab(bool isInitialTab, int newTabIndex);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::HowToPlayTopicIndex topic);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCFOLD bool $bind(
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    MCAPI ::ui::DirtyFlag $tick();

    MCFOLD ::std::string $_getButtonADescription();
    // NOLINTEND
};
#else // @header-generator platform
class HowToPlayScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
