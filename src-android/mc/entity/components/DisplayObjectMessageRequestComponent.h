#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DisplayObjectMessageRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mLocalizableText;
    ::ll::TypedStorage<8, 24, std::string> mColor;
    // NOLINTEND

public:
    // prevent constructor by default
    DisplayObjectMessageRequestComponent& operator=(DisplayObjectMessageRequestComponent const&);
};
