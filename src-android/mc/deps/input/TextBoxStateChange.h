#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
