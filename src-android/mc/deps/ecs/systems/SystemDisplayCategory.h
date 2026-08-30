#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SystemDisplayCategory {
public:
    // SystemDisplayCategory inner types define
    using Index = uchar;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::string_view> mIdentifier;
    // NOLINTEND

public:
    // prevent constructor by default
    SystemDisplayCategory();
};
