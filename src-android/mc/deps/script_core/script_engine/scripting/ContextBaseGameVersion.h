#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ContextBaseGameVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextBaseGameVersion();
};

} // namespace Scripting
