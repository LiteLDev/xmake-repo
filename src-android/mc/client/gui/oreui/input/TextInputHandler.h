#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/input/GamefaceImeComposer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/RectangleArea.h"
#include "mc/external/gameface/cohtml/ControlType.h"
#include "mc/external/gameface/cohtml/ITextInputHandler.h"

// auto generated forward declare list
// clang-format off
class GuiData;
class KeyboardManager;
struct TextBoxSelection;
namespace OreUI::InputUtils { struct TextInputResult; }
namespace cohtml { class IInputProxy; }
namespace cohtml { class View; }
namespace cohtml { struct KeyEventData; }
namespace cohtml::TextInput { struct Selection; }
// clang-format on

namespace OreUI {

class TextInputHandler : public ::cohtml::ITextInputHandler {
public:
    // TextInputHandler inner types declare
    // clang-format off
    struct TextInputState;
    // clang-format on

    // TextInputHandler inner types define
    struct TextInputState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::cohtml::IInputProxy&>                     mInputProxy;
        ::ll::TypedStorage<8, 48, std::optional<OreUI::GamefaceImeComposer>> mImeComposer;
        ::ll::TypedStorage<4, 20, std::optional<RectangleArea>>              mCaretArea;
        ::ll::TypedStorage<4, 4, int const>                                  mMaxLength;
        ::ll::TypedStorage<1, 1, bool const>                                 mIsMultiline;
        ::ll::TypedStorage<1, 1, bool>                                       mIgnoreTextCallbacks;
        // NOLINTEND

    public:
        // prevent constructor by default
        TextInputState& operator=(TextInputState const&);
        TextInputState(TextInputState const&);
        TextInputState();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::KeyboardManager&>                                      mKeyboardManager;
    ::ll::UntypedStorage<8, 24>                                                       mGuiData;
    ::ll::TypedStorage<8, 8, ::cohtml::View*>                                         mView;
    ::ll::TypedStorage<8, 96, std::optional<OreUI::TextInputHandler::TextInputState>> mTextInputState;
    // NOLINTEND

public:
    // prevent constructor by default
    TextInputHandler& operator=(TextInputHandler const&);
    TextInputHandler(TextInputHandler const&);
    TextInputHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextInputHandler();

    virtual void OnSelectionChanged(::cohtml::IInputProxy*, ::cohtml::TextInput::Selection);

    virtual void OnTextChanged(::cohtml::IInputProxy*, char const*, uint, char const*, uint, uint);

    virtual void OnFocus(::cohtml::IInputProxy*);

    virtual void OnBlur(::cohtml::IInputProxy*);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextInputHandler(::gsl::not_null<Bedrock::NonOwnerPointer<GuiData>>, ::KeyboardManager&);

    MCNAPI void _handleLostFocus();

    MCNAPI void _sendTextChangedEvent(::OreUI::InputUtils::TextInputResult const&);

    MCNAPI void _sendTextChangedEvent(std::string const&, std::string const&);

    MCNAPI std::optional<RectangleArea> getTextInputControlArea();

    MCNAPI void setText(std::string const&, std::optional<TextBoxSelection> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<GuiData>>, ::KeyboardManager&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnSelectionChanged(::cohtml::IInputProxy*, ::cohtml::TextInput::Selection);

    MCNAPI void $OnTextChanged(::cohtml::IInputProxy*, char const*, uint, char const*, uint, uint);

    MCNAPI void $OnFocus(::cohtml::IInputProxy*);

    MCNAPI void $OnBlur(::cohtml::IInputProxy*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
