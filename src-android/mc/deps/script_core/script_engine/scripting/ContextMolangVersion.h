#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ContextMolangVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextMolangVersion();
};

} // namespace Scripting
