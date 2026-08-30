#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class KeyboardAction;
class TextInput;
// clang-format on

class Keyboard {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void feed(uchar, int, bool);

    MCNAPI static void feedText(std::string const&, uchar);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int& _gameControllerId();

    MCNAPI static int& _index();

    MCNAPI static std::vector<TextInput>& _inputText();

    MCNAPI static std::vector<KeyboardAction>& _inputs();

    MCNAPI static std::array<std::string_view, 256>& _keyNames();

    MCNAPI static uchar& _lastTextId();

    MCNAPI static std::vector<TextInput>& _nativeTextInputs();

    MCNAPI static int& _nativeTextInputsIndex();

    MCNAPI static std::array<std::string_view, 256>& _shortKeyNames();

    MCNAPI static ::std::add_lvalue_reference_t<int[256]> _states();

    MCNAPI static int& _textIndex();

    MCNAPI static std::array<std::string_view, 256>& _ttsKeyNames();
    // NOLINTEND
};
