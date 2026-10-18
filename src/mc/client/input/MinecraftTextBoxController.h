#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/interface/ITextBoxController.h"

// auto generated forward declare list
// clang-format off
class IGamefaceTextInputProxy;
class IMinecraftGame;
struct TextBoxStateChange;
namespace OreUI { class OreUISystem; }
// clang-format on

class MinecraftTextBoxController : public ::ITextBoxController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>     mMinecraftGame;
    ::ll::TypedStorage<8, 8, ::OreUI::OreUISystem*> mOreUISystem;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftTextBoxController& operator=(MinecraftTextBoxController const&);
    MinecraftTextBoxController(MinecraftTextBoxController const&);
    MinecraftTextBoxController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftTextBoxController();

    virtual void setTextBoxState(int, ::TextBoxStateChange const&);

    virtual void onKeyboardDismissed(int);

    virtual std::unique_ptr<IGamefaceTextInputProxy> getTextInputProxy();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MinecraftTextBoxController(::IMinecraftGame&);

    MCNAPI void onOreUIInitialized(::OreUI::OreUISystem*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftGame&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setTextBoxState(int, ::TextBoxStateChange const&);

    MCNAPI void $onKeyboardDismissed(int);

    MCNAPI std::unique_ptr<IGamefaceTextInputProxy> $getTextInputProxy();
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
#include "mc/deps/input/interface/ITextBoxController.h"

// auto generated forward declare list
// clang-format off
class IGamefaceTextInputProxy;
class IMinecraftGame;
struct TextBoxStateChange;
namespace OreUI { class OreUISystem; }
// clang-format on

class MinecraftTextBoxController : public ::ITextBoxController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>     mMinecraftGame;
    ::ll::TypedStorage<8, 8, ::OreUI::OreUISystem*> mOreUISystem;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftTextBoxController& operator=(MinecraftTextBoxController const&);
    MinecraftTextBoxController(MinecraftTextBoxController const&);
    MinecraftTextBoxController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftTextBoxController() /*override*/ = default;

    virtual void setTextBoxState(int controllerId, ::TextBoxStateChange const& stateChange) /*override*/;

    virtual void onKeyboardDismissed(int controllerId) /*override*/;

    virtual ::std::unique_ptr<::IGamefaceTextInputProxy> getTextInputProxy() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setTextBoxState(int controllerId, ::TextBoxStateChange const& stateChange);

    MCAPI void $onKeyboardDismissed(int controllerId);

    MCAPI ::std::unique_ptr<::IGamefaceTextInputProxy> $getTextInputProxy();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class MinecraftTextBoxController {};
#endif // @header-generator platform
#endif // @header-generator platform
