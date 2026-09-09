#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ValueParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         isNumber;
    ::ll::TypedStorage<1, 1, bool>         isFloat;
    ::ll::TypedStorage<4, 4, float>        floatVal;
    ::ll::TypedStorage<4, 4, int>          intVal;
    ::ll::TypedStorage<1, 1, bool>         isBool;
    ::ll::TypedStorage<1, 1, bool>         boolVal;
    ::ll::TypedStorage<8, 24, std::string> stringVal;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
