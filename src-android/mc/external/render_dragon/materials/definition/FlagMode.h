#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials::definition {

struct FlagMode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mValue;
    // NOLINTEND
};

} // namespace dragon::materials::definition
