#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GenerateMessageResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mMessage;
    ::ll::TypedStorage<1, 1, bool>         mIsValid;
    // NOLINTEND
};
