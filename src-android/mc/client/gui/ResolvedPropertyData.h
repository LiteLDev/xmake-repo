#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace UI::Resources {

struct ResolvedPropertyData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<8, 24, std::string> value;
    // NOLINTEND
};

} // namespace UI::Resources
