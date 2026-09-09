#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ScriptData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<8, 24, std::string> data;
    // NOLINTEND
};

} // namespace Scripting
