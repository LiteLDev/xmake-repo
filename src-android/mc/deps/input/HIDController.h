#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/KeyboardEventProcessor.h"
#include "mc/deps/input/TextBoxSelection.h"
#include "mc/deps/input/TextEditContext.h"

// auto generated forward declare list
// clang-format off
class IGamefaceTextInputProxy;
class IKeyboardProxy;
class ITextBoxController;
namespace ApplicationSignal { class ClipboardPaste; }
namespace Bedrock { class SignalReceiver; }
// clang-format on

class HIDController : public ::Bedrock::Input::KeyboardEventProcessor {
public:
    // HIDController inner types declare
    // clang-format off
    class GamefaceTextEditContext;
    // clang-format on

    // HIDController inner types define
    class GamefaceTextEditContext {
    public:
        // GamefaceTextEditContext inner types define
        enum class StateChange : int {
            None             = 0,
            Text             = 1,
            Selection        = 2,
            TextAndSelection = 3,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<IGamefaceTextInputProxy>> mTextInputProxy;
        ::ll::TypedStorage<8, 24, std::string>                             mLastCheckText;
        ::ll::TypedStorage<4, 12, ::TextBoxSelection>                      mLastCheckSelection;
        ::ll::TypedStorage<1, 1, bool>                                     mForceApplyChanges;
        ::ll::TypedStorage<1, 1, bool>                                     mIsComposing;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                      mTextboxIsFocused;
    ::ll::TypedStorage<1, 1, bool>                                      mTextboxIsSelected;
    ::ll::TypedStorage<1, 1, bool>                                      mIsMultiline;
    ::ll::TypedStorage<8, 72, ::TextEditContext>                        mEditContext;
    ::ll::TypedStorage<8, 48, ::HIDController::GamefaceTextEditContext> mGamefaceEditContext;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::SignalReceiver>>  mSignalRcvr;
    ::ll::TypedStorage<1, 1, bool>                                      mIsComposing;
    ::ll::TypedStorage<4, 4, int>                                       mCompositionStart;
    ::ll::TypedStorage<4, 4, int>                                       mCompositionEnd;
    ::ll::UntypedStorage<8, 24>                                         mTextBoxController;
    // NOLINTEND

public:
    // prevent constructor by default
    HIDController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onKeyDown(int, ::Bedrock::Input::KeyboardEventProcessor::InputOrigin);

    virtual void onKeyUp(int);

    virtual void update();

    virtual void updateEditContext(int);

    virtual void onTextInput(std::string const&);

    virtual void imeStartComposition();

    virtual void imeUpdateCompositionText(std::string const&);

    virtual void imeConfirmComposition(std::string const&);

    virtual void imeEndComposition();

    virtual void onTextEditComponentGainedFocus(std::string_view const, int);

    virtual void onTextEditComponentLostFocus();

    virtual void onShowKeyboard(std::string_view const, int, bool, ::InputMode);

    virtual void onHideKeyboard();

    virtual void onAppFocusLost();

    virtual void onAppFocusGained();

    virtual int getCaretPosition() const;

    virtual void setCaretPosition(int);

    virtual void setIMEEnabled(bool);
    // NOLINTEND
};
