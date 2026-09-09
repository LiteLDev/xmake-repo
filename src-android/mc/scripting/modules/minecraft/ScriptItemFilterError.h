#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptItemFilterError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemFilterError& operator=(ScriptItemFilterError const&);
    ScriptItemFilterError(ScriptItemFilterError const&);
    ScriptItemFilterError();
};

} // namespace ScriptModuleMinecraft
