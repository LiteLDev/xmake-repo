#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
