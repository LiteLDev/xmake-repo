#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct CodeScreenEditorButton;
// clang-format on

struct UriData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> uri;
    ::ll::TypedStorage<1, 1, bool>         hasHomeButton;
    // NOLINTEND

public:
    // prevent constructor by default
    UriData& operator=(UriData const&);
    UriData(UriData const&);
};
