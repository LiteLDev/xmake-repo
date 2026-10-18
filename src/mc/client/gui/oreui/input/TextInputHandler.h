#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/input/GamefaceImeComposer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/RectangleArea.h"
#include "mc/external/gameface/cohtml/ITextInputHandler.h"

// auto generated forward declare list
// clang-format off
class GuiData;
class KeyboardManager;
struct TextBoxSelection;
namespace OreUI::InputUtils { struct TextInputResult; }
namespace cohtml { class IInputProxy; }
namespace cohtml { class View; }
namespace cohtml::TextInput { struct Selection; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class TextInputHandler : public ::cohtml::ITextInputHandler {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TextInputHandler : public ::cohtml::ITextInputHandler {
#else // @header-generator platform
class TextInputHandler {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // TextInputHandler inner types declare
    // clang-format off
    struct TextInputState;
    // clang-format on

    // TextInputHandler inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct TextInputState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::cohtml::IInputProxy&>                         mInputProxy;
        ::ll::TypedStorage<8, 56, ::std::optional<::OreUI::GamefaceImeComposer>> mImeComposer;
        ::ll::TypedStorage<4, 20, ::std::optional<::RectangleArea>>              mCaretArea;
        ::ll::TypedStorage<4, 4, int const>                                      mMaxLength;
        ::ll::TypedStorage<1, 1, bool const>                                     mIsMultiline;
        ::ll::TypedStorage<1, 1, bool>                                           mIgnoreTextCallbacks;
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
    ::ll::TypedStorage<8, 8, ::KeyboardManager&>                                           mKeyboardManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GuiData>>                    mGuiData;
    ::ll::TypedStorage<8, 8, ::cohtml::View*>                                              mView;
    ::ll::TypedStorage<8, 104, ::std::optional<::OreUI::TextInputHandler::TextInputState>> mTextInputState;
    // NOLINTEND

public:
    // prevent constructor by default
    TextInputHandler& operator=(TextInputHandler const&);
    TextInputHandler(TextInputHandler const&);
    TextInputHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    OnSelectionChanged(::cohtml::IInputProxy* proxy, ::cohtml::TextInput::Selection selection) /*override*/;

    virtual void OnTextChanged(
        ::cohtml::IInputProxy* proxy,
        char const*            addedChars,
        uint                   addedCount,
        char const*            removedChars,
        uint                   removedCount,
        uint                   index
    ) /*override*/;

    virtual void OnFocus(::cohtml::IInputProxy* proxy) /*override*/;

    virtual void OnBlur(::cohtml::IInputProxy*) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextInputHandler(::Bedrock::NotNullNonOwnerPtr<::GuiData> guiData, ::KeyboardManager& keyboardManager);

    MCAPI void _handleLostFocus();

    MCAPI void _sendTextChangedEvent(::OreUI::InputUtils::TextInputResult const& inputResult);

    MCAPI ::std::optional<::RectangleArea> getTextInputControlArea();

    MCAPI ::std::string getTextInputText();

    MCAPI void setText(::std::string const& text, ::std::optional<::TextBoxSelection> const& selection);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::GuiData> guiData, ::KeyboardManager& keyboardManager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $OnSelectionChanged(::cohtml::IInputProxy* proxy, ::cohtml::TextInput::Selection selection);

    MCAPI void $OnTextChanged(
        ::cohtml::IInputProxy* proxy,
        char const*            addedChars,
        uint                   addedCount,
        char const*            removedChars,
        uint                   removedCount,
        uint                   index
    );

    MCAPI void $OnFocus(::cohtml::IInputProxy* proxy);

    MCAPI void $OnBlur(::cohtml::IInputProxy*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct TextInputState {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
