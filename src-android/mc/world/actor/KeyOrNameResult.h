#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct KeyOrNameResult {
public:
    // KeyOrNameResult inner types define
    enum ResultType : uint {
        LocalizationKey = 0,
        Name            = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                  mString;
    ::ll::TypedStorage<4, 4, ::KeyOrNameResult::ResultType> mType;
    // NOLINTEND
};
