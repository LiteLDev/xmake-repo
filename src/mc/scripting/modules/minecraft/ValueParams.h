#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ValueParams {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>         isNumber;
    ::ll::TypedStorage<1, 1, bool>         isFloat;
    ::ll::TypedStorage<4, 4, float>        floatVal;
    ::ll::TypedStorage<4, 4, int>          intVal;
    ::ll::TypedStorage<1, 1, bool>         isBool;
    ::ll::TypedStorage<1, 1, bool>         boolVal;
    ::ll::TypedStorage<8, 24, std::string> stringVal;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>           isNumber;
    ::ll::TypedStorage<1, 1, bool>           isFloat;
    ::ll::TypedStorage<4, 4, float>          floatVal;
    ::ll::TypedStorage<4, 4, int>            intVal;
    ::ll::TypedStorage<1, 1, bool>           isBool;
    ::ll::TypedStorage<1, 1, bool>           boolVal;
    ::ll::TypedStorage<8, 32, ::std::string> stringVal;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
