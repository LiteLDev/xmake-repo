#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CodeScreenEditorButton {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<8, 24, std::string> description;
    ::ll::TypedStorage<8, 24, std::string> url;
    ::ll::TypedStorage<8, 24, std::string> defaultImage;
    ::ll::TypedStorage<8, 24, std::string> color;
    ::ll::TypedStorage<1, 1, bool>         hasHomeButton;
    // NOLINTEND
};
