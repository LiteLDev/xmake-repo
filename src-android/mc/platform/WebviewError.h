#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WebviewError {
public:
    // WebviewError inner types define
    enum class Type : uchar {
        Unknown      = 0,
        NetworkError = 1,
        OutOfMemory  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::WebviewError::Type> type;
    ::ll::TypedStorage<8, 24, std::string>         message;
    ::ll::TypedStorage<4, 4, int>                  code;
    // NOLINTEND

public:
    // prevent constructor by default
    WebviewError& operator=(WebviewError const&);
    WebviewError();
};
