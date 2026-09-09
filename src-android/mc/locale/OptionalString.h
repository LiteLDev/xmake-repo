#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OptionalString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         valid;
    ::ll::TypedStorage<8, 24, std::string> string;
    // NOLINTEND

public:
    // prevent constructor by default
    OptionalString& operator=(OptionalString const&);
    OptionalString();
};
