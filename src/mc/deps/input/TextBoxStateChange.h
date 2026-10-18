#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/TextBoxSelection.h"
#include "mc/deps/input/TextboxTextUpdateReason.h"

struct TextBoxStateChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                     text;
    ::ll::TypedStorage<4, 16, std::optional<TextBoxSelection>> selection;
    ::ll::TypedStorage<4, 4, ::TextboxTextUpdateReason>        reason;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/TextBoxSelection.h"
#include "mc/deps/input/TextboxTextUpdateReason.h"

struct TextBoxStateChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                       text;
    ::ll::TypedStorage<4, 16, ::std::optional<::TextBoxSelection>> selection;
    ::ll::TypedStorage<4, 4, ::TextboxTextUpdateReason>            reason;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TextBoxStateChange();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct TextBoxStateChange {};
#endif // @header-generator platform
#endif // @header-generator platform
